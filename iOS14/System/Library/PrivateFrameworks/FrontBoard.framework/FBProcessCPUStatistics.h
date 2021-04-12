/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class RBSProcessHandle;

@interface FBProcessCPUStatistics : NSObject {

	RBSProcessHandle* _handle;
	FBProcessTimes _times;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) double totalElapsedTime; 
@property (nonatomic,readonly) double totalElapsedUserTime; 
@property (nonatomic,readonly) double totalElapsedSystemTime; 
@property (nonatomic,readonly) double totalElapsedIdleTime; 
-(double)totalElapsedIdleTime;
-(double)totalElapsedUserTime;
-(void)_lock_getApplicationCPUTimesForUser:(out double*)arg1 system:(out double*)arg2 idle:(out double*)arg3 ;
-(double)totalElapsedTime;
-(void)_hostwideUserElapsedCPUTime:(out double*)arg1 systemElapsedCPUTime:(out double*)arg2 idleElapsedCPUTime:(out double*)arg3 ;
-(void)reset;
-(id)descriptionForCrashReport;
-(double)totalElapsedSystemTime;
-(id)initWithProcessHandle:(id)arg1 ;
@end

