/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBPowerAssertionManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue, RBPowerAssertionManagerDelegate;
@class NSString, RBProcessMap, RBSystemPowerAssertion, NSObject;

@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing> {

	RBProcessMap* _stateMap;
	RBProcessMap* _assertionMap;
	RBSystemPowerAssertion* _systemAssertion;
	unsigned long long _assertionCount;
	NSObject*<OS_dispatch_queue> _queue;
	id<RBPowerAssertionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RBPowerAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)init;
-(void)dealloc;
-(NSString *)debugDescription;
-(id<RBPowerAssertionManagerDelegate>)delegate;
-(void)setDelegate:(id<RBPowerAssertionManagerDelegate>)arg1 ;
-(id)captureState;
-(void)removeProcess:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(void)_queue_updateProcessAssertion:(id)arg1 withState:(id)arg2 ;
-(void)_queue_invalidateAssertion:(id)arg1 ;
-(void)_queue_didAcquireAssertion;
-(void)_queue_willInvalidateAssertion;
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)removeStateForProcessIdentity:(id)arg1 ;
-(void)applySystemState:(id)arg1 ;
-(BOOL)_unitTest_hasSystemPowerAssertion;
-(BOOL)_unitTest_hasPowerAssertionForProcess:(id)arg1 ;
-(id)_unitTest_nameOfPowerAssertionForSystem;
-(id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1 ;
-(NSString *)stateCaptureTitle;
@end

