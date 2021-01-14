/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedNetworkBehavior;

@interface TRIScheduleFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (assign,nonatomic) BOOL rollbacksOnly; 
@property (assign,nonatomic) BOOL hasRollbacksOnly; 
@property (nonatomic,retain) TRIPersistedNetworkBehavior * networkBehavior; 
@property (assign,nonatomic) BOOL hasNetworkBehavior; 
+(id)descriptor;
@end

