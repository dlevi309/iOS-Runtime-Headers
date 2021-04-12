/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPredicate : TRIPBMessage

@property (assign,nonatomic) int systemVariable; 
@property (assign,nonatomic) BOOL hasSystemVariable; 
@property (assign,nonatomic) int operation; 
@property (assign,nonatomic) BOOL hasOperation; 
@property (nonatomic,retain) NSMutableArray * operandArray; 
@property (nonatomic,readonly) unsigned long long operandArray_Count; 
+(id)descriptor;
@end

