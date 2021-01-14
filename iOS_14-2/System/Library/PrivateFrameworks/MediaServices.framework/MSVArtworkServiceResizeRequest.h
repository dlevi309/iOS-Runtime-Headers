/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL, NSMutableArray;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest {

	NSURL* _sourceURL;
	NSMutableArray* _resizeDestinations;

}

@property (nonatomic,retain) NSMutableArray * resizeDestinations;              //@synthesize resizeDestinations=_resizeDestinations - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSMutableArray *)resizeDestinations;
-(void)setResizeDestinations:(NSMutableArray *)arg1 ;
-(Class)operationClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)addDestinationWithFormat:(long long)arg1 size:(CGSize)arg2 url:(id)arg3 ;
-(void)addJPEGDestinationWithSize:(CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3 ;
-(id)initWithSourceURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)enumerateDestinationsUsingBlock:(/*^block*/id)arg1 ;
@end

