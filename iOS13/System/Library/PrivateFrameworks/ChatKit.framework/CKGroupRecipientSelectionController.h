/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKRecipientSelectionController.h>
#import <libobjc.A.dylib/CKRecipientSelectionControllerDelegate.h>

@class UIBarButtonItem, NSString;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate> {

	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) UIBarButtonItem * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(id)initWithConversation:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)recipientSelectionControllerDidChange;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg1 ;
-(void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientAvailibilitiesDidUpdate;
-(void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2 ;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)alwaysShowSearchResultsTable;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1 ;
-(id)handlesForScreenTimePolicyCheck;
-(void)_updateNavigationButton;
-(void)_frecencySearch;
-(double)topInsetForNavBar;
@end

