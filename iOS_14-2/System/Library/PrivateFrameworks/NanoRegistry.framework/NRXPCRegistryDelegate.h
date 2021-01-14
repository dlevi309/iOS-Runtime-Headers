/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol NRXPCRegistryDelegate
@required
-(void)xpcGetDeviceCollectionWithBlock:(/*^block*/id)arg1;
-(void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(BOOL)arg2 withBlock:(/*^block*/id)arg3;
-(void)xpcRetrieveSecureProperties:(id)arg1 block:(/*^block*/id)arg2;
-(void)xpcGetChangeHistoryWithBlock:(/*^block*/id)arg1;
-(void)xpcSwitchIndex:(/*^block*/id)arg1;
-(void)xpcDeviceIDAtSwitchIndex:(unsigned)arg1 withBlock:(/*^block*/id)arg2;
-(void)xpcClientInfo:(/*^block*/id)arg1;
-(void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(/*^block*/id)arg3;
-(void)xpcSetMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3;

@end

