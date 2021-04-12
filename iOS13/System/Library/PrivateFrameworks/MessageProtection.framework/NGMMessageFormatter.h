/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@interface NGMMessageFormatter : NSObject
+(id)formatOutgoingInnerMessageWithPayload:(id)arg1 destinationIdentity:(id)arg2 sendingIdentity:(id)arg3 error:(id*)arg4 ;
+(id)formatOutgoingMessageWithEncryptedPayload:(id)arg1 ephemeral:(id)arg2 signature:(id)arg3 keyValidator:(id)arg4 ;
@end

