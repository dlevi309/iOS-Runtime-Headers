/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDAccessoryBrowserHapProtocol
@required
-(void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
-(void)configureAccessory:(id)arg1 trackState:(BOOL)arg2 connectionPriority:(BOOL)arg3;

@end

