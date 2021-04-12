/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HAPAccessoryServerBrowserDelegate <NSObject>
@required
-(void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didChangeReachability:(BOOL)arg2 forAccessoryServerWithIdentifier:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 getCacheForAccessoryWithIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)accessoryServerBrowser:(id)arg1 removeCacheForAccessoryWithIdentifier:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 saveCache:(id)arg2 serverIdentifier:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(BOOL)arg5;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4;
-(void)accessoryServerBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerForReprovisioning:(id)arg2;

@end

