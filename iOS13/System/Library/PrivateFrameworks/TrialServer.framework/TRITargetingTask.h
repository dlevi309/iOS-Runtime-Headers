/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSMutableArray, NSString;

@interface TRITargetingTask : TRIExperimentBaseTask {

	NSMutableArray* _targetingMetrics;
	int _experimentType;
	NSString* _treatmentId;

}

@property (retain) NSString * treatmentId;              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (assign) int experimentType;                  //@synthesize experimentType=_experimentType - In the implementation block
+(id)taskWithExperimentId:(id)arg1 ;
-(id)dependencies;
-(id)metrics;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(int)experimentType;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(void)targetingError:(id*)arg1 experimentId:(id)arg2 errorType:(id)arg3 details:(id)arg4 ;
-(id)systemCovariates;
-(void)targetingError:(id*)arg1 experimentId:(id)arg2 errorType:(id)arg3 ;
-(BOOL)getTreatment:(id*)arg1 forExperiment:(id)arg2 error:(id*)arg3 ;
-(void)setExperimentType:(int)arg1 ;
-(int)runTask;
@end

