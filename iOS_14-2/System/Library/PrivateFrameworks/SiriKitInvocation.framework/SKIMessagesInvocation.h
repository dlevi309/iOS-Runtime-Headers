/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
*/


@interface SKIMessagesInvocation : NSObject
+(id)beginSiriRequestForApp:(id)arg1 ;
+(id)composeNewMessageRequestToContact:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 inApp:(id)arg4 ;
+(id)composeNewMessageRequestInApp:(id)arg1 ;
+(id)readMessagesRequestFromConversationIdentifier:(id)arg1 inApp:(id)arg2 ;
+(id)readMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 ;
+(id)composeReplyRequestToConversationIdentifier:(id)arg1 inApp:(id)arg2 ;
+(id)makeParameterMetadataForIntent:(id)arg1 ;
+(id)makeParameterMetadataForParameterNamed:(id)arg1 ;
+(id)announceMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 ;
@end

