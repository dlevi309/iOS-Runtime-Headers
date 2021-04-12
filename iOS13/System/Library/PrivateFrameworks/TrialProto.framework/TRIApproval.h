/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIRadar;

@interface TRIApproval : TRIPBMessage

@property (assign,nonatomic) int approvalType; 
@property (assign,nonatomic) BOOL hasApprovalType; 
@property (nonatomic,retain) TRIRadar * radar; 
@property (assign,nonatomic) BOOL hasRadar; 
+(id)descriptor;
@end

