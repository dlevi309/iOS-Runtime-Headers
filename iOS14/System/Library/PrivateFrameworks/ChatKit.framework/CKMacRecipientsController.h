/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CKDetailsContactsManagerDelegate.h>

@protocol CKMacRecipientsControllerDelegate;
@class CKConversation, CNComposeRecipientTextView, UIView, STConversationContext, CKDetailsContactsManager, UIScrollView, CKManualUpdater, NSString;

@interface CKMacRecipientsController : CKViewController <CNComposeRecipientTextViewDelegate, CKDetailsContactsManagerDelegate> {

	BOOL _allowedByScreenTime;
	CKConversation* _conversation;
	CNComposeRecipientTextView* _toField;
	UIView* _detailsPopoverPresentationSourceView;
	STConversationContext* _currentConversationContext;
	id<CKMacRecipientsControllerDelegate> _delegate;
	CKDetailsContactsManager* _contactsManager;
	UIScrollView* _toFieldScrollView;
	CKManualUpdater* _addressBookNotificationUpdater;
	unsigned long long _numberOfRowsInToField;

}

@property (nonatomic,retain) STConversationContext * currentConversationContext;                 //@synthesize currentConversationContext=_currentConversationContext - In the implementation block
@property (nonatomic,retain) CKDetailsContactsManager * contactsManager;                         //@synthesize contactsManager=_contactsManager - In the implementation block
@property (assign,nonatomic) BOOL allowedByScreenTime;                                           //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (nonatomic,retain) UIView * detailsPopoverPresentationSourceView;                      //@synthesize detailsPopoverPresentationSourceView=_detailsPopoverPresentationSourceView - In the implementation block
@property (nonatomic,retain) UIScrollView * toFieldScrollView;                                   //@synthesize toFieldScrollView=_toFieldScrollView - In the implementation block
@property (nonatomic,retain) CKManualUpdater * addressBookNotificationUpdater;                   //@synthesize addressBookNotificationUpdater=_addressBookNotificationUpdater - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRowsInToField;                           //@synthesize numberOfRowsInToField=_numberOfRowsInToField - In the implementation block
@property (assign,nonatomic,__weak) CKConversation * conversation;                               //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) CNComposeRecipientTextView * toField;                             //@synthesize toField=_toField - In the implementation block
@property (assign,nonatomic,__weak) id<CKMacRecipientsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recipients;
-(BOOL)isEditable;
-(void)setContactsManager:(CKDetailsContactsManager *)arg1 ;
-(CKDetailsContactsManager *)contactsManager;
-(void)viewWillLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<CKMacRecipientsControllerDelegate>)delegate;
-(BOOL)allowedByScreenTime;
-(void)refreshRecipients;
-(void)setConversation:(CKConversation *)arg1 ;
-(CNComposeRecipientTextView *)toField;
-(id)initWithConversation:(id)arg1 ;
-(void)setDelegate:(id<CKMacRecipientsControllerDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)setAllowedByScreenTime:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reset;
-(STConversationContext *)currentConversationContext;
-(void)setNumberOfRowsInToField:(unsigned long long)arg1 ;
-(double)preferredMacToolbarHeight;
-(void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1 ;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)_handleAddressBookPartialChangedNotification:(id)arg1 ;
-(void)setAddressBookNotificationUpdater:(CKManualUpdater *)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(void)setCurrentConversationContext:(STConversationContext *)arg1 ;
-(unsigned long long)numberOfRowsInToField;
-(double)_toolbarHeightForNumberOfRows:(unsigned long long)arg1 ;
-(void)updateScreenTimePolicy;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(BOOL)_shouldEnableScrolling;
-(CKManualUpdater *)addressBookNotificationUpdater;
-(id)handlesForScreenTimePolicyCheck;
-(id)composeRecipientView:(id)arg1 contextMenuConfigurationForAtom:(id)arg2 ;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1 ;
-(void)contactsManagerViewModelsDidChange:(id)arg1 ;
-(void)loadView;
-(void)setToFieldScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)toFieldScrollView;
-(void)_updateToFieldFrame;
-(CGRect)_detailsPopoverFrame;
-(void)setDetailsPopoverPresentationSourceView:(UIView *)arg1 ;
-(UIView *)detailsPopoverPresentationSourceView;
-(void)_reloadCurrentRecipientData;
-(void)_notifyDelegatesToFieldHeightHasChanged;
-(void)dealloc;
@end

