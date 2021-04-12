/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantMessageHandler.h>
#import <libobjc.A.dylib/INSendMessageIntentHandling.h>

@protocol IMAssistantMessageSendHandlerDelegate;
@class NSString, CNGeminiManager;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling> {

	NSString* _conversationIdentifierResolvedDuringRecipientResolution;
	id<IMAssistantMessageSendHandlerDelegate> _messageSendHandlerDelegate;
	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) id<IMAssistantMessageSendHandlerDelegate> messageSendHandlerDelegate;              //@synthesize messageSendHandlerDelegate=_messageSendHandlerDelegate - In the implementation block
@property (nonatomic,retain) CNGeminiManager * geminiManager;                                                   //@synthesize geminiManager=_geminiManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNGeminiManager *)geminiManager;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(void)handleSendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmSendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveRecipientsForSendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveContentForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)canSendLocationMessageWithLocationManager:(id)arg1 withError:(long long*)arg2 ;
-(id)sendMessageWithText:(id)arg1 currentLocation:(BOOL)arg2 expressiveSendStyleID:(id)arg3 idsIdentifier:(id)arg4 executionContext:(long long)arg5 toChat:(id)arg6 ;
-(BOOL)updateSenderIdentityForChat:(id)arg1 recipients:(id)arg2 ;
-(id)subscriptionContextForSenderIdentity:(id)arg1 ;
-(void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)resolveMessageContentWithString:(id)arg1 ;
-(BOOL)isMemberOfChat:(id)arg1 ;
-(id<IMAssistantMessageSendHandlerDelegate>)messageSendHandlerDelegate;
-(id)resolvedRecipientsFromChat:(id)arg1 ;
-(BOOL)recipientHandleResolutionResultsAllowedByScreentime:(id)arg1 ;
-(id)recipientsResolutionFailureResultWithResult:(id)arg1 forRecipient:(id)arg2 amongRecipients:(id)arg3 ;
-(id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)arg1 withMatchingHandlesByRecipient:(id)arg2 fromChats:(id)arg3 ;
-(id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)arg1 ;
-(id)contactResolutionResultForContacts:(id)arg1 matchingRecipient:(id)arg2 ;
-(id)handleResolutionResultForHandles:(id)arg1 resolvedContactForAlternatives:(id)arg2 recipient:(id)arg3 ;
-(BOOL)shouldContinueToExamineRelevantChatsWithMatches:(id)arg1 nextChat:(id)arg2 ;
-(id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)arg1 ;
-(id)contactsWithDuplicateNamesAmongContacts:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 intentIdentifier:(id)arg3 ;
-(void)setMessageSendHandlerDelegate:(id<IMAssistantMessageSendHandlerDelegate>)arg1 ;
@end

