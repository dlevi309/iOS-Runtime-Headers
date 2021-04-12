/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEPublisherLogoProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 publisherLogoImageSize;
	 scale;
	 theme;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)initWithPublisherLogoAssetHandle:(id)arg1 publisherLogoImageSize:(CGSize)arg2 scale:(double)arg3 theme:(long long)arg4 ;
-(id)init;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(NSDictionary *)assetHandles;
-(NSString *)cacheIdentifier;
@end

