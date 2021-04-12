/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NewsFeed.FormatImageProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 size;
	 scale;
	 style;
	 inventory;
	 focalFrame;
	 renderingMode;
	 assetHandles;
	 assetHandle;

}

@property (readonly,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)init;
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
@end

