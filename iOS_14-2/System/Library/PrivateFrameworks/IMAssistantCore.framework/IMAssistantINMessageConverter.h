/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

