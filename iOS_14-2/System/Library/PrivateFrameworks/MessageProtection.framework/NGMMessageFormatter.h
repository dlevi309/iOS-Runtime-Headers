/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@interface NGMMessageFormatter : NSObject
+(id)formatOutgoingInnerMessageWithPayload:(id)arg1 attributes:(id)arg2 destinationIdentity:(id)arg3 sendingIdentity:(id)arg4 error:(id*)arg5 ;
+(id)formatOutgoingMessageWithEncryptedPayload:(id)arg1 ephemeral:(id)arg2 signature:(id)arg3 keyValidator:(id)arg4 ;
@end

