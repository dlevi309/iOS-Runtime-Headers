/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,retain) NSMutableArray * privacyRadarArray; 
@property (nonatomic,readonly) unsigned long long privacyRadarArray_Count; 
@property (nonatomic,retain) NSMutableArray * securityRadarArray; 
@property (nonatomic,readonly) unsigned long long securityRadarArray_Count; 
@property (assign,nonatomic) BOOL privacyRadarRequired; 
@property (assign,nonatomic) BOOL hasPrivacyRadarRequired; 
@property (assign,nonatomic) BOOL securityRadarRequired; 
@property (assign,nonatomic) BOOL hasSecurityRadarRequired; 
+(id)descriptor;
@end

