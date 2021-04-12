/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol IDSGroupContextNotifyingObserverDelegate <NSObject>
@optional
-(void)didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1;

@end

