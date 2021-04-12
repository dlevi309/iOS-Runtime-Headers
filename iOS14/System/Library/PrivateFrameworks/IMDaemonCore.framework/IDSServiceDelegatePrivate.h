/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IDSServiceDelegatePrivate <IDSServiceDelegate>
@optional
-(void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(BOOL)arg7 messageContext:(id)arg8;
-(void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(BOOL)arg7;
-(void)service:(id)arg1 token:(id)arg2 time:(double)arg3 error:(id)arg4;
-(void)service:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
-(void)service:(id)arg1 didFlushCacheForRemoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 alternateCallbackID:(id)arg4 willSendToDestinations:(id)arg5 skippedDestinations:(id)arg6 registrationPropertyToDestinations:(id)arg7;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;

@end

