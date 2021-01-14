/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@protocol ENGroupContextObserverMiddleware <ENGroupContextMiddleware>
@optional
-(void)groupContext:(id)arg1 didCreateGroup:(id)arg2;
-(void)groupContext:(id)arg1 didCacheGroup:(id)arg2;
-(void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;
-(void)groupContext:(id)arg1 didReceiveDecryptionFailureForGroup:(id)arg2;
-(void)groupContextDidReceiveRegistrationIdentityUpdate:(id)arg1;

@end

