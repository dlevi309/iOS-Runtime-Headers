/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NewsFeed.FormatImageRequest : NSObject <TSProcessedImageRequestType> {

	 size;
	 scale;
	 style;
	 inventory;
	 focalFrame;
	 renderingMode;
	 traitCollection;
	 assetHandles;
	 assetHandle;

}

@property (readonly,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)init;
-(NSDictionary *)assetHandles;
-(NSString *)cacheIdentifier;
@end

