/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSMutableArray, TRIPersistedTaskAttribution;

@interface TRIFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * earliestTimestamp; 
@property (assign,nonatomic) BOOL hasEarliestTimestamp; 
@property (nonatomic,retain) NSMutableArray * namespacesArray; 
@property (nonatomic,readonly) unsigned long long namespacesArray_Count; 
@property (assign,nonatomic) BOOL rollbacksOnly; 
@property (assign,nonatomic) BOOL hasRollbacksOnly; 
@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL hasRetryCount; 
+(id)descriptor;
@end

