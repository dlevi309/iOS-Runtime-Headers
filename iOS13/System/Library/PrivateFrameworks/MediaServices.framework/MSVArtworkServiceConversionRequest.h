/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(Class)operationClass;
-(long long)destinationFormat;
-(double)destinationCompressionQuality;
-(long long)operationPriority;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3 ;
-(void)setDestinationFormat:(long long)arg1 ;
-(void)setDestinationCompressionQuality:(double)arg1 ;
@end

