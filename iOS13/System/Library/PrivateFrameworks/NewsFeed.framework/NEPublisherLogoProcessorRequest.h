/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(id)initWithPublisherLogoAssetHandle:(id)arg1 publisherLogoImageSize:(CGSize)arg2 scale:(double)arg3 theme:(long long)arg4 ;
@end

