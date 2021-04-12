/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBThrottleBestEffortNetworkingManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue;
@class NSObject, RBProcessIndex, RBProcessMap, RBSystemState, NSString;

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing> {

	NSObject*<OS_dispatch_queue> _queue;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	RBSystemState* _systemState;
	BOOL _throttleBestEffortNetworking;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)init;
-(NSString *)debugDescription;
-(id)captureState;
-(void)removeProcess:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)applySystemState:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)_updateThrottleBestEffortNetworking;
-(BOOL)isThrottleBestEffortNetworkingEnabled;
@end

