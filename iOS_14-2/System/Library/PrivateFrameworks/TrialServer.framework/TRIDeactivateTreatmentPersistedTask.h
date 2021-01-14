/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBTimestamp;

@interface TRIDeactivateTreatmentPersistedTask : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (assign,nonatomic) BOOL failOnUnrecognizedExperiment; 
@property (assign,nonatomic) BOOL hasFailOnUnrecognizedExperiment; 
@property (nonatomic,retain) TRIPBTimestamp * startTimestamp; 
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL hasRetryCount; 
+(id)descriptor;
@end

