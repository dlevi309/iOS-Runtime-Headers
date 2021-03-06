/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIProjectOwner, TRIPBTimestamp, TRIPBUInt32Array, NSMutableArray, TRIApproval;

@interface TRIExperiment : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (nonatomic,copy) NSString * experimentName; 
@property (assign,nonatomic) BOOL hasExperimentName; 
@property (nonatomic,copy) NSString * experimentDescription; 
@property (assign,nonatomic) BOOL hasExperimentDescription; 
@property (nonatomic,copy) NSString * namespaceId; 
@property (assign,nonatomic) BOOL hasNamespaceId; 
@property (nonatomic,retain) TRIProjectOwner * owner; 
@property (assign,nonatomic) BOOL hasOwner; 
@property (nonatomic,retain) TRIPBTimestamp * createDate; 
@property (assign,nonatomic) BOOL hasCreateDate; 
@property (nonatomic,retain) TRIPBTimestamp * lastModified; 
@property (assign,nonatomic) BOOL hasLastModified; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (nonatomic,retain) TRIPBUInt32Array * compatibilityVersionArray; 
@property (nonatomic,readonly) unsigned long long compatibilityVersionArray_Count; 
@property (assign,nonatomic) unsigned seed; 
@property (assign,nonatomic) BOOL hasSeed; 
@property (nonatomic,retain) NSMutableArray * deploymentArray; 
@property (nonatomic,readonly) unsigned long long deploymentArray_Count; 
@property (nonatomic,retain) NSMutableArray * treatmentArray; 
@property (nonatomic,readonly) unsigned long long treatmentArray_Count; 
@property (assign,nonatomic) BOOL isClientExclusive; 
@property (assign,nonatomic) BOOL hasIsClientExclusive; 
@property (nonatomic,retain) TRIApproval * qaApproval; 
@property (assign,nonatomic) BOOL hasQaApproval; 
+(id)descriptor;
@end

