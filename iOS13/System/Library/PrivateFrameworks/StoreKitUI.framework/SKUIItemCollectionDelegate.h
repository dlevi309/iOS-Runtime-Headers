/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIItemCollectionDelegate <NSObject>
@optional
-(void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;
-(id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;
-(BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;

@required
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
-(NSRange*)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2;
-(NSRange*)visibleItemRangeForItemCollectionController:(id)arg1;

@end

