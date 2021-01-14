/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HAPAccessoryServerDelegate <NSObject>
@required
-(void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
-(void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(BOOL)arg4;
-(void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
-(void)accessoryServer:(id)arg1 updatePairingProgress:(long long)arg2;
-(void)accessoryServer:(id)arg1 didFinishAuth:(id)arg2;
-(void)accessoryServer:(id)arg1 didUpdateName:(id)arg2;
-(void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2 accessoryInfo:(id)arg3 error:(id)arg4;
-(void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
-(void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
-(void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(/*^block*/id)arg2;
-(void)accessoryServer:(id)arg1 didUpdateHasPairings:(BOOL)arg2;
-(void)accessoryServerDidUpdateStateNumber:(id)arg1;
-(void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
-(void)accessoryServer:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 model:(id)arg4;
-(void)accessoryServer:(id)arg1 validateCert:(id)arg2 model:(id)arg3;
-(void)accessoryServer:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
-(void)accessoryServer:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
-(void)accessoryServerNeedsOwnershipToken:(id)arg1;
-(BOOL)shouldEnableReachabilityForAccessoryServer:(id)arg1;

@end

