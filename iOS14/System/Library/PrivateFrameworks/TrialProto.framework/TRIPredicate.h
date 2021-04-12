/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

