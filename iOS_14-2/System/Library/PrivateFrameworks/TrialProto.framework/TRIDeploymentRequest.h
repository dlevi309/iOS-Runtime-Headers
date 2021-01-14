/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSString, TRIApproval, TRIPBEnumArray;

@interface TRIDeploymentRequest : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * requestedTimestamp; 
@property (assign,nonatomic) BOOL hasRequestedTimestamp; 
@property (nonatomic,copy) NSString * requestedBy; 
@property (assign,nonatomic) BOOL hasRequestedBy; 
@property (nonatomic,retain) TRIApproval * programOfficeApproval; 
@property (assign,nonatomic) BOOL hasProgramOfficeApproval; 
@property (nonatomic,retain) TRIPBEnumArray * deploymentTypeArray; 
@property (nonatomic,readonly) unsigned long long deploymentTypeArray_Count; 
+(id)descriptor;
@end

