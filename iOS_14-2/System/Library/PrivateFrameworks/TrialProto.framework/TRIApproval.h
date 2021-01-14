/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBEnumArray;

@interface TRIApproval : TRIPBMessage

@property (assign,nonatomic) unsigned radarId; 
@property (assign,nonatomic) BOOL hasRadarId; 
@property (nonatomic,retain) TRIPBEnumArray * approvedDeploymentTypeArray; 
@property (nonatomic,readonly) unsigned long long approvedDeploymentTypeArray_Count; 
+(id)descriptor;
@end

