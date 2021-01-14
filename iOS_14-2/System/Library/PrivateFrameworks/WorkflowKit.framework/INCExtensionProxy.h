/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol INCExtensionProxy
@property (nonatomic,copy) id backgroundAppHandler; 
@optional
-(void)prewarmAppWithIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startSendingUpdatesToObserver:(id)arg1;
-(void)stopSendingUpdates;
-(void)getOptionsForParameterNamed:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getOptionsForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)backgroundAppHandler;
-(void)setBackgroundAppHandler:(/*^block*/id)arg1;

@required
-(void)handleIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)confirmIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

