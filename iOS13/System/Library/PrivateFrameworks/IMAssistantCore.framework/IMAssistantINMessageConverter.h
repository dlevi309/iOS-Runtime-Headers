/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@interface IMAssistantINMessageConverter : NSObject
+(id)expressiveSendIdFromMessageEffectType:(long long)arg1 ;
+(id)INMessageForOutgoingIMMessage:(id)arg1 toChat:(id)arg2 personProvider:(id)arg3 ;
+(id)messageEffectTypeToExpressiveSendIdDictionary;
+(id)INMessageForSPIMessage:(id)arg1 personProvider:(id)arg2 ;
+(id)INPersonsForSPIHandles:(id)arg1 personProvider:(id)arg2 ;
+(id)__INSpeakableStringForMessage:(id)arg1 ;
+(long long)messageEffectTypeFromExpressiveSendId:(id)arg1 ;
+(id)__INMessageLinkMetadataForLPLinkMetadata:(id)arg1 ;
+(id)spiHandleForIMHandle:(id)arg1 isMe:(BOOL)arg2 ;
+(id)__INSpeakableStringForChat:(id)arg1 ;
@end

