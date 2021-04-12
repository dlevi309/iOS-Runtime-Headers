/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRITreatmentBaseTask.h>

@class NSDate;

@interface TRIActivateTreatmentTask : TRITreatmentBaseTask {

	NSDate* _endTime;
	NSDate* _startTime;

}

@property (nonatomic,retain) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
+(id)taskWithExperimentId:(id)arg1 treatmentId:(id)arg2 ;
-(id)dependencies;
-(NSDate *)startTime;
-(id)endTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setup;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(BOOL)hasConflictWithOtherExperiments:(id)arg1 ;
-(BOOL)writeNamespaceDescriptorsInDirectory:(id)arg1 forExperiment:(id)arg2 ;
@end

