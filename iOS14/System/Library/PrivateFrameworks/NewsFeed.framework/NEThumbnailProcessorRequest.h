/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEThumbnailProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 thumbnailFrame;
	 focalFrame;
	 scale;
	 roundedCorners;
	 cornerRadius;

}

@property (readonly,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)init;
-(id)initWithThumbnailAssetHandle:(id)arg1 thumbnailFrame:(CGRect)arg2 focalFrame:(CGRect)arg3 scale:(double)arg4 byRoundingCorners:(unsigned long long)arg5 cornerRadius:(double)arg6 ;
-(NSDictionary *)assetHandles;
-(NSString *)cacheIdentifier;
@end

