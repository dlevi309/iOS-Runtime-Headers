/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/


@protocol _UIKeyboardArbitration
@required
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(BOOL)arg3 withSuppression:(int)arg4 onConnected:(/*^block*/id)arg5;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;
-(void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2;
-(void)retrieveMoreDebugInformationWithCompletion:(/*^block*/id)arg1;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg1;
-(void)setWindowContextID:(unsigned)arg1 sceneIdentity:(id)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4;
-(void)signalEventSourceChanged:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)signalKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(void)signalKeyboardChangeComplete;
-(void)setDeactivating:(BOOL)arg1;
-(void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(void)focusApplicationWithProcessIdentifier:(int)arg1 sceneIdentity:(id)arg2 onCompletion:(/*^block*/id)arg3;
-(void)retrieveDebugInformation:(/*^block*/id)arg1;
-(void)notifyIAVHeight:(double)arg1;
-(void)setWantsFencing:(BOOL)arg1;
-(void)setSceneIdentity:(id)arg1;

@end

