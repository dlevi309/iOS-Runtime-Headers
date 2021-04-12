/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRIProjectOwner : TRIPBMessage

@property (assign,nonatomic) int projectId; 
@property (assign,nonatomic) BOOL hasProjectId; 
@property (nonatomic,copy) NSString * driEmail; 
@property (assign,nonatomic) BOOL hasDriEmail; 
@property (nonatomic,copy) NSString * releaseManagerEmail; 
@property (assign,nonatomic) BOOL hasReleaseManagerEmail; 
@property (assign,nonatomic) unsigned adirGroupId; 
@property (assign,nonatomic) BOOL hasAdirGroupId; 
@property (nonatomic,copy) NSString * qaContact; 
@property (assign,nonatomic) BOOL hasQaContact; 
@property (nonatomic,copy) NSString * radarComponent; 
@property (assign,nonatomic) BOOL hasRadarComponent; 
@property (nonatomic,retain) NSMutableArray * privacyApprovalArray; 
@property (nonatomic,readonly) unsigned long long privacyApprovalArray_Count; 
@property (nonatomic,retain) NSMutableArray * securityApprovalArray; 
@property (nonatomic,readonly) unsigned long long securityApprovalArray_Count; 
@property (assign,nonatomic) BOOL privacyApprovalRequired; 
@property (assign,nonatomic) BOOL hasPrivacyApprovalRequired; 
@property (assign,nonatomic) BOOL securityApprovalRequired; 
@property (assign,nonatomic) BOOL hasSecurityApprovalRequired; 
+(id)descriptor;
@end

