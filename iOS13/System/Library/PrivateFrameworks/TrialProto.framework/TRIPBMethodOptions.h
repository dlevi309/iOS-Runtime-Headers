/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBMethodOptions : TRIPBMessage

@property (assign,nonatomic) BOOL deprecated; 
@property (assign,nonatomic) BOOL hasDeprecated; 
@property (assign,nonatomic) int idempotencyLevel; 
@property (assign,nonatomic) BOOL hasIdempotencyLevel; 
@property (nonatomic,retain) NSMutableArray * uninterpretedOptionArray; 
@property (nonatomic,readonly) unsigned long long uninterpretedOptionArray_Count; 
+(id)descriptor;
@end

