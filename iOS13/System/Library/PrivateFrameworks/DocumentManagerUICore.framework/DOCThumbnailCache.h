/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


@class NSMapTable, NSCache;

@interface DOCThumbnailCache : NSObject {

	NSMapTable* _cachedThumbnailItems;
	NSCache* _recentlyUsedItems;

}

@property (nonatomic,readonly) NSMapTable * cachedThumbnailItems;              //@synthesize cachedThumbnailItems=_cachedThumbnailItems - In the implementation block
@property (nonatomic,readonly) NSCache * recentlyUsedItems;                    //@synthesize recentlyUsedItems=_recentlyUsedItems - In the implementation block
-(id)init;
-(void)clear;
-(NSCache *)recentlyUsedItems;
-(NSMapTable *)cachedThumbnailItems;
@end

