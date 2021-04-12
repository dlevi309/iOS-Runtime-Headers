/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMFPairingIdentity;


@protocol HMDAccessoryUserManagement <NSObject>
@property (readonly) BOOL supportsUserManagement; 
@property (copy,readonly) HMFPairingIdentity * pairingIdentity; 
@required
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(HMFPairingIdentity *)pairingIdentity;
-(BOOL)supportsUserManagement;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1;

@end

