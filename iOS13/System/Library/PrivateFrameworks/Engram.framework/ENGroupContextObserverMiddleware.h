/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/


@protocol ENGroupContextObserverMiddleware <ENGroupContextMiddleware>
@optional
-(void)groupContext:(id)arg1 didCreateGroup:(id)arg2;
-(void)groupContext:(id)arg1 didCacheGroup:(id)arg2;
-(void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;
-(void)groupContext:(id)arg1 didReceiveDecryptionFailureForGroup:(id)arg2;
-(void)groupContextDidReceiveRegistrationIdentityUpdate:(id)arg1;

@end

