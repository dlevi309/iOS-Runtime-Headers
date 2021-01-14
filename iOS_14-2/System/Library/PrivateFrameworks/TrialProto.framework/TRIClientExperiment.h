/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBTimestamp, TRIAssignment;

@interface TRIClientExperiment : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (assign,nonatomic) int projectId; 
@property (assign,nonatomic) BOOL hasProjectId; 
@property (nonatomic,retain) TRIPBTimestamp * startDate; 
@property (assign,nonatomic) BOOL hasStartDate; 
@property (nonatomic,retain) TRIPBTimestamp * endDate; 
@property (assign,nonatomic) BOOL hasEndDate; 
@property (nonatomic,retain) TRIAssignment * assignment; 
@property (assign,nonatomic) BOOL hasAssignment; 
@property (assign,nonatomic) unsigned seed; 
@property (assign,nonatomic) BOOL hasSeed; 
@property (assign,nonatomic) unsigned deploymentId; 
@property (assign,nonatomic) BOOL hasDeploymentId; 
@property (nonatomic,copy) NSString * projectName; 
@property (assign,nonatomic) BOOL hasProjectName; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned maxFailures; 
@property (assign,nonatomic) BOOL hasMaxFailures; 
@property (assign,nonatomic) long long delaySeconds; 
@property (assign,nonatomic) BOOL hasDelaySeconds; 
@property (nonatomic,copy) NSString * assignmentEndpoint; 
@property (assign,nonatomic) BOOL hasAssignmentEndpoint; 
+(id)descriptor;
@end

