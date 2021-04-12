/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBInt32Array, NSString;

@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage

@property (nonatomic,retain) TRIPBInt32Array * pathArray; 
@property (nonatomic,readonly) unsigned long long pathArray_Count; 
@property (nonatomic,copy) NSString * sourceFile; 
@property (assign,nonatomic) BOOL hasSourceFile; 
@property (assign,nonatomic) int begin; 
@property (assign,nonatomic) BOOL hasBegin; 
@property (assign,nonatomic) int end; 
@property (assign,nonatomic) BOOL hasEnd; 
+(id)descriptor;
@end

