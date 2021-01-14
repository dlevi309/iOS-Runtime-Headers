/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSArray, NSProgress;

@interface HDCloudSyncManagerTask : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _completion;
	long long _status;
	NSArray* _mirroringTasks;
	NSProgress* _progress;
	HDCloudSyncManagerTask* _originalTask;

}

@property (readonly) long long status; 
@property (readonly) NSProgress * progress;                              //@synthesize progress=_progress - In the implementation block
@property (readonly) HDCloudSyncManagerTask * originalTask;              //@synthesize originalTask=_originalTask - In the implementation block
@property (copy,readonly) NSArray * mirroringTasks;                      //@synthesize mirroringTasks=_mirroringTasks - In the implementation block
-(void)finish;
-(NSProgress *)progress;
-(id)init;
-(void)main;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(long long)status;
-(NSArray *)mirroringTasks;
-(void)mirrorTask:(id)arg1 ;
-(BOOL)combineWithTask:(id)arg1 ;
-(void)_addMirroringTask:(id)arg1 ;
-(HDCloudSyncManagerTask *)originalTask;
@end

