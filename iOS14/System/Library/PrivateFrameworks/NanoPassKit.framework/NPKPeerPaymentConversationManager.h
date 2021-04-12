/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, MSConversation, PKPeerPaymentRecipient, NPKPeerPaymentConversationContext, NSString, PKPeerPaymentController, PKPeerPaymentService;

@interface NPKPeerPaymentConversationManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	MSConversation* _activeConversation;
	PKPeerPaymentRecipient* _recipient;
	NPKPeerPaymentConversationContext* _conversationContext;
	NSString* _currentRecipientAddressLookup;
	PKPeerPaymentController* _currentPeerPaymentController;
	PKPeerPaymentService* _peerPaymentService;

}

@property (nonatomic,retain) NSString * currentRecipientAddressLookup;                                   //@synthesize currentRecipientAddressLookup=_currentRecipientAddressLookup - In the implementation block
@property (assign,nonatomic,__weak) PKPeerPaymentController * currentPeerPaymentController;              //@synthesize currentPeerPaymentController=_currentPeerPaymentController - In the implementation block
@property (nonatomic,retain) PKPeerPaymentService * peerPaymentService;                                  //@synthesize peerPaymentService=_peerPaymentService - In the implementation block
@property (retain) MSConversation * activeConversation;                                                  //@synthesize activeConversation=_activeConversation - In the implementation block
@property (nonatomic,readonly) NSString * senderPhoneOrEmail; 
@property (nonatomic,readonly) NSString * recipientPhoneOrEmail; 
@property (nonatomic,copy,readonly) NSString * recipientDisplayName; 
@property (nonatomic,readonly) BOOL recipientFoundInContacts; 
@property (readonly) PKPeerPaymentRecipient * recipient;                                                 //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) NPKPeerPaymentConversationContext * conversationContext;                    //@synthesize conversationContext=_conversationContext - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSString *)recipientPhoneOrEmail;
-(void)setConversationContext:(NPKPeerPaymentConversationContext *)arg1 ;
-(NPKPeerPaymentConversationContext *)conversationContext;
-(void)setPeerPaymentService:(PKPeerPaymentService *)arg1 ;
-(NSString *)recipientDisplayName;
-(NSString *)senderPhoneOrEmail;
-(PKPeerPaymentService *)peerPaymentService;
-(PKPeerPaymentRecipient *)recipient;
-(void)_accountDidChange;
-(MSConversation *)activeConversation;
-(void)setActiveConversation:(MSConversation *)arg1 ;
-(id)_sharedPeerPaymentWebService;
-(void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2 ;
-(id)_newPeerPaymentController;
-(void)_internalQueue_performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPeerPaymentController *)currentPeerPaymentController;
-(id)_newPeerPaymentControllerWithQueue:(id)arg1 ;
-(void)setCurrentPeerPaymentController:(PKPeerPaymentController *)arg1 ;
-(id)_displayableErrorWithError:(id)arg1 ;
-(id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3 ;
-(NSString *)currentRecipientAddressLookup;
-(void)setCurrentRecipientAddressLookup:(NSString *)arg1 ;
-(void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2 ;
-(void)_internalQueue_performRequestWithAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_internalQueue_forceLookupRecipientInformation;
-(id)_negativeBalanceErrorWithUnderlyingError:(id)arg1 ;
-(id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1 ;
-(id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1 ;
-(id)_unknownPaymentErrorWithUnderlyingError:(id)arg1 ;
-(BOOL)recipientFoundInContacts;
-(void)lookupRecipientInformationIfNecessary;
-(void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2 ;
-(void)performRequestWithAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

