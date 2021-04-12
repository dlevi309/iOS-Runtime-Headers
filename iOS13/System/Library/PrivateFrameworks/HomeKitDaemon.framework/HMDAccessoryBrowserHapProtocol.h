/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDAccessoryBrowserHapProtocol
@required
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
-(void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
-(void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)configureAccessory:(id)arg1 trackState:(BOOL)arg2 connectionPriority:(BOOL)arg3;

@end

