/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_frecencySearch;
-(void)_updateNavigationButton;
-(void)_checkAvailabilityAndAddToken;
-(double)topInsetForNavBar;
-(BOOL)_enableRecipientsAdditionBasedOnAvailability;
-(id)initWithConversation:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewDidAppearDeferredSetup;
-(void)recipientSelectionControllerDidChange;
-(BOOL)isBeingPresentedInMacDetailsView;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerTabPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg1 ;
-(void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientSelectionControllerShouldResignFirstResponder:(id)arg1 ;
-(void)recipientAvailibilitiesDidUpdate;
-(void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2 ;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)alwaysShowSearchResultsTable;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1 ;
-(id)handlesForScreenTimePolicyCheck;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(void)loadView;
@end

