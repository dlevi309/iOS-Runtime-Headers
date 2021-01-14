/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIAssignment, TRIPBTimestamp, NSString, TRIPBEnumArray, TRIApproval, TRIRollback, NSMutableDictionary, TRIDeploymentRequest;

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
@property (nonatomic,retain) TRIPBEnumArray * deploymentTypeArray; 
@property (nonatomic,readonly) unsigned long long deploymentTypeArray_Count; 
@property (nonatomic,copy) NSString * deployedBy; 
@property (assign,nonatomic) BOOL hasDeployedBy; 
@property (nonatomic,retain) TRIApproval * approval; 
@property (assign,nonatomic) BOOL hasApproval; 
@property (nonatomic,retain) TRIRollback * rollback; 
@property (assign,nonatomic) BOOL hasRollback; 
@property (nonatomic,retain) NSMutableDictionary * treatmentCloudKitId; 
@property (nonatomic,readonly) unsigned long long treatmentCloudKitId_Count; 
@property (nonatomic,retain) TRIPBEnumArray * previousDeploymentTypeArray; 
@property (nonatomic,readonly) unsigned long long previousDeploymentTypeArray_Count; 
@property (nonatomic,retain) TRIDeploymentRequest * deploymentRequest; 
@property (assign,nonatomic) BOOL hasDeploymentRequest; 
@property (assign,nonatomic) unsigned deploymentId; 
@property (assign,nonatomic) BOOL hasDeploymentId; 
@property (assign,nonatomic) unsigned externalId; 
@property (assign,nonatomic) BOOL hasExternalId; 
@property (nonatomic,copy) NSString * deploymentName; 
@property (assign,nonatomic) BOOL hasDeploymentName; 
+(id)descriptor;
@end

