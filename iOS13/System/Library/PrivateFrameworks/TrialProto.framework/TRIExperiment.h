/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIProjectOwner, TRIPBTimestamp, NSMutableArray, TRIAssignment;

@interface TRIExperiment : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (nonatomic,copy) NSString * experimentName; 
@property (assign,nonatomic) BOOL hasExperimentName; 
@property (nonatomic,copy) NSString * experimentDescription; 
@property (assign,nonatomic) BOOL hasExperimentDescription; 
@property (assign,nonatomic) int namespaceId; 
@property (assign,nonatomic) BOOL hasNamespaceId; 
@property (nonatomic,retain) TRIProjectOwner * owner; 
@property (assign,nonatomic) BOOL hasOwner; 
@property (nonatomic,retain) TRIPBTimestamp * createDate; 
@property (assign,nonatomic) BOOL hasCreateDate; 
@property (nonatomic,retain) TRIPBTimestamp * lastModified; 
@property (assign,nonatomic) BOOL hasLastModified; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned compatibilityVersion; 
@property (assign,nonatomic) BOOL hasCompatibilityVersion; 
@property (assign,nonatomic) unsigned seed; 
@property (assign,nonatomic) BOOL hasSeed; 
@property (nonatomic,retain) NSMutableArray * deploymentArray; 
@property (nonatomic,readonly) unsigned long long deploymentArray_Count; 
@property (nonatomic,retain) NSMutableArray * treatmentArray; 
@property (nonatomic,readonly) unsigned long long treatmentArray_Count; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (nonatomic,retain) TRIPBTimestamp * startDate; 
@property (assign,nonatomic) BOOL hasStartDate; 
@property (nonatomic,retain) TRIPBTimestamp * endDate; 
@property (assign,nonatomic) BOOL hasEndDate; 
@property (nonatomic,copy) NSString * cloudKitId; 
@property (assign,nonatomic) BOOL hasCloudKitId; 
@property (assign,nonatomic) int deploymentType; 
@property (assign,nonatomic) BOOL hasDeploymentType; 
@property (nonatomic,retain) TRIPBTimestamp * cloudKitExpirationDate; 
@property (assign,nonatomic) BOOL hasCloudKitExpirationDate; 
@property (nonatomic,retain) TRIAssignment * assignment; 
@property (assign,nonatomic) BOOL hasAssignment; 
+(id)descriptor;
@end

