/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIAssignment, TRIPBTimestamp, NSString, TRIApproval, TRIRollback, NSMutableDictionary, TRIDeploymentRequest;

@interface TRIDeployment : TRIPBMessage

@property (nonatomic,retain) TRIAssignment * assignment; 
@property (assign,nonatomic) BOOL hasAssignment; 
@property (nonatomic,retain) TRIPBTimestamp * startDate; 
@property (assign,nonatomic) BOOL hasStartDate; 
@property (nonatomic,retain) TRIPBTimestamp * endDate; 
@property (assign,nonatomic) BOOL hasEndDate; 
@property (nonatomic,copy) NSString * cloudKitId; 
@property (assign,nonatomic) BOOL hasCloudKitId; 
@property (nonatomic,retain) TRIPBTimestamp * deploymentTimestamp; 
@property (assign,nonatomic) BOOL hasDeploymentTimestamp; 
@property (nonatomic,retain) TRIPBTimestamp * cloudKitExpirationDate; 
@property (assign,nonatomic) BOOL hasCloudKitExpirationDate; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int deploymentType; 
@property (assign,nonatomic) BOOL hasDeploymentType; 
@property (nonatomic,copy) NSString * deployedBy; 
@property (assign,nonatomic) BOOL hasDeployedBy; 
@property (nonatomic,retain) TRIApproval * approval; 
@property (assign,nonatomic) BOOL hasApproval; 
@property (nonatomic,retain) TRIRollback * rollback; 
@property (assign,nonatomic) BOOL hasRollback; 
@property (nonatomic,retain) NSMutableDictionary * treatmentCloudKitId; 
@property (nonatomic,readonly) unsigned long long treatmentCloudKitId_Count; 
@property (assign,nonatomic) int previousDeploymentType; 
@property (assign,nonatomic) BOOL hasPreviousDeploymentType; 
@property (nonatomic,retain) TRIDeploymentRequest * deploymentRequest; 
@property (assign,nonatomic) BOOL hasDeploymentRequest; 
+(id)descriptor;
@end

