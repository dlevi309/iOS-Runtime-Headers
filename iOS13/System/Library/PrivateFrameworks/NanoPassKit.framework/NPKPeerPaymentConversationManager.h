/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, MSConversation, PKPeerPaymentRecipient, NPKPeerPaymentConversationContext, NSString, PKPeerPaymentController;

@interface NPKPeerPaymentConversationManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	MSConversation* _activeConversation;
	PKPeerPaymentRecipient* _recipient;
	NPKPeerPaymentConversationContext* _conversationContext;
	NSString* _currentRecipientAddressLookup;
	PKPeerPaymentController* _currentPeerPaymentController;

}

@property (nonatomic,retain) NSString * currentRecipientAddressLookup;                                   //@synthesize currentRecipientAddressLookup=_currentRecipientAddressLookup - In the implementation block
@property (assign,nonatomic,__weak) PKPeerPaymentController * currentPeerPaymentController;              //@synthesize currentPeerPaymentController=_currentPeerPaymentController - In the implementation block
@property (retain) MSConversation * activeConversation;                                                  //@synthesize activeConversation=_activeConversation - In the implementation block
@property (nonatomic,readonly) NSString * senderPhoneOrEmail; 
@property (nonatomic,readonly) NSString * recipientPhoneOrEmail; 
@property (nonatomic,copy,readonly) NSString * recipientDisplayName; 
@property (nonatomic,readonly) BOOL recipientFoundInContacts; 
@property (readonly) PKPeerPaymentRecipient * recipient;                                                 //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) NPKPeerPaymentConversationContext * conversationContext;                    //@synthesize conversationContext=_conversationContext - In the implementation block
+(id)sharedInstance;
-(id)init;
-(PKPeerPaymentRecipient *)recipient;
-(void)setConversationContext:(NPKPeerPaymentConversationContext *)arg1 ;
-(NPKPeerPaymentConversationContext *)conversationContext;
-(NSString *)recipientPhoneOrEmail;
-(NSString *)recipientDisplayName;
-(NSString *)senderPhoneOrEmail;
-(id)_sharedPeerPaymentWebService;
-(MSConversation *)activeConversation;
-(void)setActiveConversation:(MSConversation *)arg1 ;
-(void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2 ;
-(id)_newPeerPaymentController;
-(void)_internalQueue_performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPeerPaymentController *)currentPeerPaymentController;
-(void)setCurrentPeerPaymentController:(PKPeerPaymentController *)arg1 ;
-(id)_displayableErrorWithError:(id)arg1 ;
-(id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3 ;
-(NSString *)currentRecipientAddressLookup;
-(void)setCurrentRecipientAddressLookup:(NSString *)arg1 ;
-(void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2 ;
-(id)_negativeBalanceErrorWithUnderlyingError:(id)arg1 ;
-(id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1 ;
-(id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1 ;
-(id)_unknownPaymentErrorWithUnderlyingError:(id)arg1 ;
-(BOOL)recipientFoundInContacts;
-(void)lookupRecipientInformationIfNecessary;
-(void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2 ;
@end

