/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIKeyboardArbitrationClient
@required
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1;
-(void)queue_keyboardIAVChanged:(double)arg1 onComplete:(/*^block*/id)arg2;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4;
-(void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_sceneBecameFocused:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_getDebugInfoWithCompletion:(/*^block*/id)arg1;
-(void)queue_setKeyboardDisabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_setLastEventSource:(long long)arg1 withCompletion:(/*^block*/id)arg2;

@end

