/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;
#import <WorkflowKit/WorkflowKit-Structs.h>
@class JSVirtualMachine, NSThread, NSTimer;

@interface WFRemoteQuarantinePolicyEvaluator : NSObject {

	JSVirtualMachine* _javaScriptVirtualMachine;
	id<WFRemoteQuarantinePolicyEvaluatorDelegate> _delegate;
	NSThread* _javaScriptEvaluationThread;
	CFRunLoopRef _javaScriptEvaluationThreadRunLoop;
	NSTimer* _javaScriptVirtualMachineDestructionTimer;

}

@property (nonatomic,readonly) NSThread * javaScriptEvaluationThread;                                    //@synthesize javaScriptEvaluationThread=_javaScriptEvaluationThread - In the implementation block
@property (nonatomic,retain) JSVirtualMachine * javaScriptVirtualMachine;                                //@synthesize javaScriptVirtualMachine=_javaScriptVirtualMachine - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef javaScriptEvaluationThreadRunLoop;                           //@synthesize javaScriptEvaluationThreadRunLoop=_javaScriptEvaluationThreadRunLoop - In the implementation block
@property (nonatomic,readonly) NSTimer * javaScriptVirtualMachineDestructionTimer;                       //@synthesize javaScriptVirtualMachineDestructionTimer=_javaScriptVirtualMachineDestructionTimer - In the implementation block
@property (assign,nonatomic,__weak) id<WFRemoteQuarantinePolicyEvaluatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedEvaluator;
-(id)init;
-(id<WFRemoteQuarantinePolicyEvaluatorDelegate>)delegate;
-(void)setDelegate:(id<WFRemoteQuarantinePolicyEvaluatorDelegate>)arg1 ;
-(void)dealloc;
-(JSVirtualMachine *)javaScriptVirtualMachine;
-(void)evaluatePolicyForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_evaluatePolicyForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setJavaScriptVirtualMachine:(JSVirtualMachine *)arg1 ;
-(NSThread *)javaScriptEvaluationThread;
-(CFRunLoopRef)javaScriptEvaluationThreadRunLoop;
-(NSTimer *)javaScriptVirtualMachineDestructionTimer;
@end

