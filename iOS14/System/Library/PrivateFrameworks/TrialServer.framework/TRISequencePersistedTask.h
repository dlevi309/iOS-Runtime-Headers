/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIAnyPersistedTask;

@interface TRISequencePersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIAnyPersistedTask * task; 
@property (assign,nonatomic) BOOL hasTask; 
@property (nonatomic,retain) TRIAnyPersistedTask * dependentTask; 
@property (assign,nonatomic) BOOL hasDependentTask; 
+(id)descriptor;
@end

