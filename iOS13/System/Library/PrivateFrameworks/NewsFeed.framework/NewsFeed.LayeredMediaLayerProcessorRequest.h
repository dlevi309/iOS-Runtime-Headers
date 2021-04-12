/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NewsFeed.LayeredMediaLayerProcessorRequest : _UKNOWN_SUPERCLASS_ <TSProcessedImageRequestType> {

	 assetHandles;
	 size;
	 scale;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
@end

