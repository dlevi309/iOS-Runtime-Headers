/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol IDSGroupContextNotifyingObserverDelegate <NSObject>
@optional
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1;
-(void)didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(void)didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2;

@end

