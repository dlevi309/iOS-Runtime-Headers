/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedTaskAttribution;

@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (assign,nonatomic) BOOL isRepeatedInstance; 
@property (assign,nonatomic) BOOL hasIsRepeatedInstance; 
+(id)descriptor;
@end

