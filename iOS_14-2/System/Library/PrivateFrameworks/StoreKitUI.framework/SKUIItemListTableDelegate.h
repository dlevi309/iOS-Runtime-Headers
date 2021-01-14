/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

