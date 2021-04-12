/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSString, TRIRadar;

@interface TRIDeploymentRequest : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * requestedTimestamp; 
@property (assign,nonatomic) BOOL hasRequestedTimestamp; 
@property (nonatomic,copy) NSString * requestedBy; 
@property (assign,nonatomic) BOOL hasRequestedBy; 
@property (nonatomic,retain) TRIRadar * qaRadar; 
@property (assign,nonatomic) BOOL hasQaRadar; 
@property (nonatomic,retain) TRIRadar * programOfficeRadar; 
@property (assign,nonatomic) BOOL hasProgramOfficeRadar; 
+(id)descriptor;
@end

