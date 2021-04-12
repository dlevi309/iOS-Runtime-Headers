/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NewsFeed.IssueCoverImageProcessorRequest : _UKNOWN_SUPERCLASS_ <TSProcessedImageRequestType> {

	 assetHandles;
	 size;
	 scale;
	 corners;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(NSDictionary *)assetHandles;
-(NSString *)cacheIdentifier;
@end

