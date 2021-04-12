/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKRecipientSelectionController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/TPPillViewDelegate.h>

@class CTXPCServiceSubscriptionContext, TUSenderIdentity, UIView, TPPillView, NSArray, NSString;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate, TPPillViewDelegate> {

	BOOL _pillViewIdentityChanged;
	BOOL _hasUserSetContextPreference;
	BOOL _firstAppear;
	BOOL _contactPreferredContextSelected;
	CTXPCServiceSubscriptionContext* _selectedSubscriptionContext;
	TUSenderIdentity* _selectedSenderIdentity;
	UIView* _pillContainerView;
	/*^block*/id _sendBlock;
	TPPillView* _pillView;

}

@property (nonatomic,copy) id sendBlock;                                                                     //@synthesize sendBlock=_sendBlock - In the implementation block
@property (nonatomic,retain) UIView * pillContainerView;                                                     //@synthesize pillContainerView=_pillContainerView - In the implementation block
@property (nonatomic,retain) TPPillView * pillView;                                                          //@synthesize pillView=_pillView - In the implementation block
@property (assign,nonatomic) BOOL pillViewIdentityChanged;                                                   //@synthesize pillViewIdentityChanged=_pillViewIdentityChanged - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * selectedSubscriptionContext;                  //@synthesize selectedSubscriptionContext=_selectedSubscriptionContext - In the implementation block
@property (nonatomic,readonly) TUSenderIdentity * selectedSenderIdentity;                                    //@synthesize selectedSenderIdentity=_selectedSenderIdentity - In the implementation block
@property (assign,nonatomic) BOOL hasUserSetContextPreference;                                               //@synthesize hasUserSetContextPreference=_hasUserSetContextPreference - In the implementation block
@property (assign,getter=isFirstAppear,nonatomic) BOOL firstAppear;                                          //@synthesize firstAppear=_firstAppear - In the implementation block
@property (assign,nonatomic) BOOL contactPreferredContextSelected;                                           //@synthesize contactPreferredContextSelected=_contactPreferredContextSelected - In the implementation block
@property (assign,nonatomic,__weak) id<CKComposeRecipientSelectionControllerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * expandedRecipients; 
@property (nonatomic,readonly) NSArray * proposedRecipients; 
@property (nonatomic,readonly) NSString * selectedLastAddressedOrDefaultHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recipients;
-(void)addRecipient:(id)arg1 ;
-(TPPillView *)pillView;
-(NSArray *)expandedRecipients;
-(NSString *)selectedLastAddressedOrDefaultHandle;
-(CTXPCServiceSubscriptionContext *)selectedSubscriptionContext;
-(BOOL)hasiMessageableContext;
-(void)atomizeAndInvokeBlock:(/*^block*/id)arg1 ;
-(NSArray *)proposedRecipients;
-(UIView *)pillContainerView;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppearDeferredSetup;
-(id)sendBlock;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)reset;
-(void)recipientSelectionControllerDidChange;
-(BOOL)isBeingPresentedInMacDetailsView;
-(BOOL)homogenizePreferredServiceForiMessage;
-(BOOL)shouldAtomizeToConversationName;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)alwaysShowSearchResultsTable;
-(id)conversationList;
-(void)loadView;
-(void)setPillView:(TPPillView *)arg1 ;
-(void)setSendBlock:(id)arg1 ;
-(BOOL)isFirstAppear;
-(void)atomizeAndSendTimeoutHandler;
-(void)setHasUserSetContextPreference:(BOOL)arg1 ;
-(void)setFirstAppear:(BOOL)arg1 ;
-(void)configureSubscriptionContextForRecipients:(id)arg1 ;
-(void)presentAlertForSubscriptionContext;
-(void)_layoutPillViewKeepHidden:(BOOL)arg1 ;
-(BOOL)hasBackfilledConversation;
-(void)_updatePillViewIfNeeded;
-(id)_defaultSubscriptionContext;
-(BOOL)hasUserSetContextPreference;
-(void)setSelectedSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(id)_defaultSubscriptionContextForiMessage;
-(id)_bestSenderIdentityForRecipient:(id)arg1 ;
-(void)presentContextSelectionAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)setPillContainerView:(UIView *)arg1 ;
-(BOOL)pillViewIdentityChanged;
-(void)setPillViewIdentityChanged:(BOOL)arg1 ;
-(BOOL)_shouldHidePillView;
-(void)viewDidLayoutSubviews;
-(id)_preferrediMessageAccountName;
-(BOOL)deviceHasMultipleSubscriptions;
-(TUSenderIdentity *)selectedSenderIdentity;
-(unsigned long long)_pillViewThemeForCurrentService;
-(void)_updateContentOfPillView;
-(BOOL)hasMultipleActiveSharedSubscriptions;
-(void)_legacyAddRecipient:(id)arg1 ;
-(BOOL)_hasExistingConversationWithAddedRecipient:(id)arg1 ;
-(void)_updateSubscriptionContextForRecipient:(id)arg1 preferredService:(id)arg2 ;
-(id)_subscriptionContextForSimID:(id)arg1 phoneNumber:(id)arg2 ;
-(void)_atomizeToConversationNameIfNecessary:(unsigned long long)arg1 ;
-(BOOL)_isOniMessageService:(id)arg1 ;
-(id)_contactPreferredSenderIdentityForRecipient:(id)arg1 ;
-(id)menuForPillView:(id)arg1 ;
-(void)setContactPreferredContextSelected:(BOOL)arg1 ;
-(BOOL)_updateBackfillForNewRecipients;
-(id)_handlesForRecipients:(id)arg1 ;
-(id)autocompleteResultIdentifier:(id)arg1 ;
-(id)conversationGUIDForRecipient:(id)arg1 ;
-(BOOL)recipientIsiMessagable:(id)arg1 ;
-(BOOL)shouldInvalidateIDSRequests;
-(BOOL)contactPreferredContextSelected;
-(void)pillViewWasTapped:(id)arg1 ;
-(void)dealloc;
@end

