/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/


@protocol _UIKeyboardArbitration
@required
-(void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(BOOL)arg3 withSuppression:(int)arg4 onConnected:(/*^block*/id)arg5;
-(void)setWantsFencing:(BOOL)arg1;
-(void)setWindowContextID:(unsigned)arg1 sceneIdentifier:(id)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4;
-(void)notifyIAVHeight:(double)arg1;
-(void)signalKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(void)signalKeyboardChangeComplete;
-(void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg1;
-(void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(void)focusApplicationWithProcessIdentifier:(int)arg1 sceneDeferringToken:(id)arg2 onCompletion:(/*^block*/id)arg3;
-(void)signalEventSourceChanged:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;
-(void)retrieveDebugInformation:(/*^block*/id)arg1;
-(void)retrieveMoreDebugInformationWithCompletion:(/*^block*/id)arg1;
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

