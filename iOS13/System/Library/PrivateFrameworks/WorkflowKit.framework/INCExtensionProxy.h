/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol INCExtensionProxy
@property (nonatomic,copy) id backgroundAppHandler; 
@optional
-(void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setBackgroundAppHandler:(/*^block*/id)arg1;
-(void)getOptionsForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startSendingUpdatesToObserver:(id)arg1;
-(void)stopSendingUpdates;
-(id)backgroundAppHandler;

@required
-(void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)handleIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)confirmIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

