/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUTableViewController.h>

@class SUDocumentInteractionSession;

@interface SUItemTableViewController : SUTableViewController {

	SUDocumentInteractionSession* _documentInteractionSession;

}
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)reloadData;
-(void)dealloc;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)itemOfferButtonAction:(id)arg1 ;
-(void)_purchasedItemSetChangedNotification:(id)arg1 ;
-(void)_removeTouchCaptureView;
-(void)_showPurchaseConfirmationForButton:(id)arg1 ;
-(void)_hidePurchaseConfirmationForButton:(id)arg1 ;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(id)_preferredApplicationFromCandidates:(id)arg1 ;
-(void)_promptToOpenUTI:(id)arg1 fromIndexPath:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_tableCellForButton:(id)arg1 ;
@end

