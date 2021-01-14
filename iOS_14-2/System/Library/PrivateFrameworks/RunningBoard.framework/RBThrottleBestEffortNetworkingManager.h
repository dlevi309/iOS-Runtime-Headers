/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBThrottleBestEffortNetworkingManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue;
@class NSObject, RBProcessIndex, RBProcessMap, NSString;

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing> {

	NSObject*<OS_dispatch_queue> _queue;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	BOOL _throttleBestEffortNetworking;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)captureState;
-(id)init;
-(BOOL)isThrottleBestEffortNetworkingEnabled;
-(NSString *)debugDescription;
-(NSString *)stateCaptureTitle;
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(void)removeProcess:(id)arg1 ;
@end

