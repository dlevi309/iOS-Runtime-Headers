/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIExperimentBaseTask.h>

@protocol TRITaskAttributing;
@class NSString;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask {

	NSString* _treatmentId;
	id<TRITaskAttributing> _taskAttributing;

}

@property (nonatomic,readonly) NSString * treatmentId;                              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) id<TRITaskAttributing> taskAttributing;              //@synthesize taskAttributing=_taskAttributing - In the implementation block
-(id)metrics;
-(id)dimensions;
-(NSString *)treatmentId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 ;
-(id<TRITaskAttributing>)taskAttributing;
@end

