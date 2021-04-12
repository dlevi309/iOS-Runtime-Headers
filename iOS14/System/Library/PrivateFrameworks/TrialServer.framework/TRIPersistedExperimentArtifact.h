/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSData, TRIPBTimestamp, NSMutableArray, TRIPBUInt32Array;

@interface TRIPersistedExperimentArtifact : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (assign,nonatomic) int deploymentId; 
@property (assign,nonatomic) BOOL hasDeploymentId; 
@property (assign,nonatomic) int cloudKitContainer; 
@property (assign,nonatomic) BOOL hasCloudKitContainer; 
@property (nonatomic,copy) NSString * teamId; 
@property (assign,nonatomic) BOOL hasTeamId; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) int projectId; 
@property (assign,nonatomic) BOOL hasProjectId; 
@property (nonatomic,copy) NSData * encodedExperimentDefinition; 
@property (assign,nonatomic) BOOL hasEncodedExperimentDefinition; 
@property (nonatomic,copy) NSString * encodedExperimentDefinitionSignature; 
@property (assign,nonatomic) BOOL hasEncodedExperimentDefinitionSignature; 
@property (nonatomic,copy) NSData * publicCertificate; 
@property (assign,nonatomic) BOOL hasPublicCertificate; 
@property (assign,nonatomic) BOOL internalBuildOnly; 
@property (assign,nonatomic) BOOL hasInternalBuildOnly; 
@property (nonatomic,retain) TRIPBTimestamp * modifiedDate; 
@property (assign,nonatomic) BOOL hasModifiedDate; 
@property (nonatomic,retain) NSMutableArray * namespacesArray; 
@property (nonatomic,readonly) unsigned long long namespacesArray_Count; 
@property (nonatomic,retain) TRIPBUInt32Array * namespaceCompatibilityVersionsArray; 
@property (nonatomic,readonly) unsigned long long namespaceCompatibilityVersionsArray_Count; 
+(id)descriptor;
@end

