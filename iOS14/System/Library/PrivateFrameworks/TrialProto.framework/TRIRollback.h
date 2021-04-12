/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

