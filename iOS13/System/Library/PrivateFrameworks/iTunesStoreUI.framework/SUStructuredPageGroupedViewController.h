/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {

	SULoadingView* _loadingView;

}
-(id)init;
-(void)dealloc;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
-(id)newNoItemsOverlayLabel;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(BOOL)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_performPurchaseAnimationForIndexPath:(id)arg1 ;
@end

