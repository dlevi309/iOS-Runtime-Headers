/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@class NSMutableArray, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {

	NSMutableArray* _metrics;
	NSMutableArray* _dimensions;
	TRIExperimentDeployment* _experiment;

}

@property (nonatomic,readonly) TRIExperimentDeployment * experiment;              //@synthesize experiment=_experiment - In the implementation block
-(id)metrics;
-(id)tags;
-(id)dimensions;
-(TRIExperimentDeployment *)experiment;
-(id)description;
-(unsigned long long)hash;
-(void)addMetric:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(id)initWithExperiment:(id)arg1 ;
-(int)projectIdForExperimentWithPaths:(id)arg1 ;
-(id)containerForFirstNamespaceInExperimentWithContext:(id)arg1 ;
-(void)addDimension:(id)arg1 ;
@end

