/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKContextMenuGenerator : NSObject
+(id)menuActionToSendEmailToAddress:(id)arg1 ;
+(id)menuActionToDisplayRecipientForHandle:(id)arg1 ;
+(id)menuActionToRemoveHandle:(id)arg1 fromConversation:(id)arg2 ;
+(id)menuActionToSendPrivateMessageToHandleID:(id)arg1 ;
+(id)menuActionToOpenContactCardForContact:(id)arg1 ;
+(id)recipientSubmenuForHandle:(id)arg1 ;
+(id)_menuActionToShareMyScreenWithHandle:(id)arg1 ;
+(id)_menuActionToInviteHandleToShareTheirScreen:(id)arg1 ;
+(BOOL)supportsRelayPhoneCallsCalls;
+(id)relayPhoneCallActionTextForPhoneNumber:(id)arg1 ;
+(id)menuActionToShowIDAsLargeType:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)_menuActionToInitiateFaceTimeVideoForConversation:(id)arg1 andContactsManager:(id)arg2 ;
+(id)_menuActionToInitiateFaceTimeAudioForConversation:(id)arg1 andContactsManager:(id)arg2 ;
+(id)_menuActionToSendEmailForConversation:(id)arg1 andContactsManager:(id)arg2 ;
+(id)menuActionToCreateContactForID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)conversationSubmenuForHandle:(id)arg1 allowingRemovalFromConversation:(id)arg2 includeAddToContactsAction:(BOOL)arg3 ;
+(id)subMenuForScreenSharingOptionsWithHandle:(id)arg1 ;
+(id)menuActionToInitiateFaceTimeAudioWithHandle:(id)arg1 andContactsManager:(id)arg2 ;
+(id)menuActionToInitiateFaceTimeVideoWithHandle:(id)arg1 andContactsManager:(id)arg2 ;
+(id)menuActionsToInitiateRelayPhoneCallWithHandle:(id)arg1 ;
+(id)menuForNamedGroupConversation:(id)arg1 andContactsManager:(id)arg2 ;
@end

