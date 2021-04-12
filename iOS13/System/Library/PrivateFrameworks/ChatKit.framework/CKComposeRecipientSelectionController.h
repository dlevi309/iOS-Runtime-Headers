/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKRecipientSelectionController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/TPPillViewDelegate.h>

@class UIView, CTXPCServiceSubscriptionContext, TPPillView, NSArray, NSString;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate, TPPillViewDelegate> {

	BOOL _hasUserSetContextPreference;
	BOOL _firstAppear;
	UIView* _pillContainerView;
	CTXPCServiceSubscriptionContext* _selectedSubscriptionContext;
	/*^block*/id _sendBlock;
	TPPillView* _pillView;

}

@property (nonatomic,copy) id sendBlock;                                                                     //@synthesize sendBlock=_sendBlock - In the implementation block
@property (nonatomic,retain) UIView * pillContainerView;                                                     //@synthesize pillContainerView=_pillContainerView - In the implementation block
@property (nonatomic,retain) TPPillView * pillView;                                                          //@synthesize pillView=_pillView - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * selectedSubscriptionContext;                  //@synthesize selectedSubscriptionContext=_selectedSubscriptionContext - In the implementation block
@property (assign,nonatomic) BOOL hasUserSetContextPreference;                                               //@synthesize hasUserSetContextPreference=_hasUserSetContextPreference - In the implementation block
@property (assign,getter=isFirstAppear,nonatomic) BOOL firstAppear;                                          //@synthesize firstAppear=_firstAppear - In the implementation block
@property (assign,nonatomic,__weak) id<CKComposeRecipientSelectionControllerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * expandedRecipients; 
@property (nonatomic,readonly) NSArray * proposedRecipients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id)recipients;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(TPPillView *)pillView;
-(void)setPillView:(TPPillView *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)recipientSelectionControllerDidChange;
-(BOOL)shouldAtomizeToConversationName;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)alwaysShowSearchResultsTable;
-(id)conversationList;
-(BOOL)deviceHasMultipleSubscriptions;
-(NSArray *)expandedRecipients;
-(CTXPCServiceSubscriptionContext *)selectedSubscriptionContext;
-(BOOL)allContextsiMessageable;
-(id)startNewConversationAccountDisplayName;
-(void)atomizeAndInvokeBlock:(/*^block*/id)arg1 ;
-(NSArray *)proposedRecipients;
-(UIView *)pillContainerView;
-(void)setSendBlock:(id)arg1 ;
-(void)atomizeAndSendTimeoutHandler;
-(void)setHasUserSetContextPreference:(BOOL)arg1 ;
-(BOOL)isFirstAppear;
-(void)configureSubscriptionContextForRecipients:(id)arg1 ;
-(void)setFirstAppear:(BOOL)arg1 ;
-(void)presentAlertForSubscriptionContext;
-(void)_layoutPillViewKeepHidden:(BOOL)arg1 ;
-(BOOL)hasBackfilledConversation;
-(void)_updatePillViewIfIsNewConversation:(BOOL)arg1 ;
-(id)_getSubscriptionContextToDisplay;
-(void)setSelectedSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(BOOL)hasUserSetContextPreference;
-(id)_startNewConverationFromContextInSettingsPreference;
-(id)_bestSenderIdentityForRecipient:(id)arg1 ;
-(void)setSelectedSubscriptionContext:(id)arg1 updatePillView:(BOOL)arg2 ;
-(void)presentContextSelectionAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)setPillContainerView:(UIView *)arg1 ;
-(id)_senderIdentityForSubscriptionContext:(id)arg1 ;
-(unsigned long long)_pillViewThemeForCurrentService;
-(void)_updatePillViewForContext:(id)arg1 ;
-(BOOL)_shouldHidePillViewForSenderIdentity:(id)arg1 recipientCount:(unsigned long long)arg2 ;
-(void)_updateContentOfPillView:(id)arg1 withSenderIdentity:(id)arg2 ;
-(BOOL)hasMultipleActiveSharedSubscriptions;
-(void)_legacyAddRecipient:(id)arg1 ;
-(BOOL)_hasExistingConversationWithAddedRecipient:(id)arg1 ;
-(id)_subscriptionContextForSimID:(id)arg1 phoneNumber:(id)arg2 ;
-(void)_atomizeToConversationNameIfNecessary:(unsigned long long)arg1 ;
-(id)sendBlock;
-(BOOL)_isOniMessageService:(id)arg1 ;
-(BOOL)_updateBackfillForNewRecipients;
-(void)_updatePillViewIfNeededIfIsNewConversation:(BOOL)arg1 ;
-(id)_handlesForRecipients:(id)arg1 ;
-(id)autocompleteResultIdentifier:(id)arg1 ;
-(id)conversationGUIDForRecipient:(id)arg1 ;
-(BOOL)recipientIsiMessagable:(id)arg1 ;
-(BOOL)shouldInvalidateIDSRequests;
-(void)pillViewWasTapped:(id)arg1 ;
@end

