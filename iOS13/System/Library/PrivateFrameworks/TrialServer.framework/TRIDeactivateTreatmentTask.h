/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSDate;

@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask {

	BOOL _failOnUnrecognizedExperiment;
	NSDate* _startTime;

}

@property (nonatomic,retain) NSDate * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL failOnUnrecognizedExperiment;              //@synthesize failOnUnrecognizedExperiment=_failOnUnrecognizedExperiment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)taskWithExperimentId:(id)arg1 failOnUnrecognizedExperiment:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setStatus:(long long)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(void)setFailOnUnrecognizedExperiment:(BOOL)arg1 ;
-(BOOL)failOnUnrecognizedExperiment;
@end

