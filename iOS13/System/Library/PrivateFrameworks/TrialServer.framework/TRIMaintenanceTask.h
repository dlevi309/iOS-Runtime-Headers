/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>

@class NSMutableArray;

@interface TRIMaintenanceTask : TRIBaseTask {

	NSMutableArray* _expiredExperiments;

}
+(id)task;
-(int)run;
-(id)init_;
-(id)nextTasksForRunStatus:(int)arg1 ;
@end

