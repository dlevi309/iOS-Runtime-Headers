/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIItemListTableDelegate <NSObject>
@optional
-(BOOL)itemList:(id)arg1 canRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemListWillBeginDragging:(id)arg1;
-(id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
-(id)itemList:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;

@end

