/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {

	SULoadingView* _loadingView;

}
-(id)init;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)setSkLoading:(BOOL)arg1 ;
-(id)newNoItemsOverlayLabel;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(BOOL)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_performPurchaseAnimationForIndexPath:(id)arg1 ;
@end

