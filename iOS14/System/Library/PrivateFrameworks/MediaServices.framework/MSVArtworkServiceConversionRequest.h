/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest {

	NSURL* _sourceURL;
	NSURL* _destinationURL;
	long long _destinationFormat;
	double _destinationCompressionQuality;

}

@property (nonatomic,copy) NSURL * sourceURL;                                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) long long destinationFormat;                       //@synthesize destinationFormat=_destinationFormat - In the implementation block
@property (assign,nonatomic) double destinationCompressionQuality;              //@synthesize destinationCompressionQuality=_destinationCompressionQuality - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3 ;
-(void)setDestinationFormat:(long long)arg1 ;
-(void)setDestinationCompressionQuality:(double)arg1 ;
-(NSURL *)sourceURL;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(Class)operationClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(long long)destinationFormat;
-(double)destinationCompressionQuality;
-(long long)operationPriority;
@end

