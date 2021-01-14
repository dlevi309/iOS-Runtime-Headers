/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBEnumValueOptions;

@interface TRIPBEnumValueDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int number; 
@property (assign,nonatomic) BOOL hasNumber; 
@property (nonatomic,retain) TRIPBEnumValueOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
+(id)descriptor;
@end

