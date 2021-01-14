/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBTimestamp;

@interface TRIRotateSubjectIdPersistedTask : TRIPBMessage

@property (assign,nonatomic) BOOL forceUpdate; 
@property (assign,nonatomic) BOOL hasForceUpdate; 
@property (nonatomic,copy) NSString * deviceId; 
@property (assign,nonatomic) BOOL hasDeviceId; 
@property (nonatomic,retain) TRIPBTimestamp * nextRotationTimestamp; 
@property (assign,nonatomic) BOOL hasNextRotationTimestamp; 
+(id)descriptor;
@end

