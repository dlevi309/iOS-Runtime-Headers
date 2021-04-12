/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)captureState;
-(id)init;
-(void)removeStateForProcessIdentity:(id)arg1 ;
-(id<RBPowerAssertionManagerDelegate>)delegate;
-(id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)_unitTest_hasSystemPowerAssertion;
-(void)applySystemState:(id)arg1 ;
-(void)setDelegate:(id<RBPowerAssertionManagerDelegate>)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(id)_unitTest_nameOfPowerAssertionForSystem;
-(void)dealloc;
-(void)removeProcess:(id)arg1 ;
-(BOOL)_unitTest_hasPowerAssertionForProcess:(id)arg1 ;
@end

