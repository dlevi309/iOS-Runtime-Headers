/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


@class NSMapTable, NSCache;

@interface DOCThumbnailCache : NSObject {

	NSMapTable* _cachedThumbnailItems;
	NSCache* _recentlyUsedItems;

}

@property (nonatomic,readonly) NSMapTable * cachedThumbnailItems;              //@synthesize cachedThumbnailItems=_cachedThumbnailItems - In the implementation block
@property (nonatomic,readonly) NSCache * recentlyUsedItems;                    //@synthesize recentlyUsedItems=_recentlyUsedItems - In the implementation block
-(void)clear;
-(id)init;
-(NSCache *)recentlyUsedItems;
-(NSMapTable *)cachedThumbnailItems;
@end

