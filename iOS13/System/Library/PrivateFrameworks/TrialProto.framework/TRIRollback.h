/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSString;

@interface TRIRollback : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * rollbackTimestamp; 
@property (assign,nonatomic) BOOL hasRollbackTimestamp; 
@property (nonatomic,copy) NSString * rolledBackBy; 
@property (assign,nonatomic) BOOL hasRolledBackBy; 
+(id)descriptor;
@end

