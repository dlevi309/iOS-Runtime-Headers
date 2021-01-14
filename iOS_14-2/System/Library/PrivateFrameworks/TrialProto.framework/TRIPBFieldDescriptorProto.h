/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBFieldOptions;

@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int number; 
@property (assign,nonatomic) BOOL hasNumber; 
@property (assign,nonatomic) int label; 
@property (assign,nonatomic) BOOL hasLabel; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (nonatomic,copy) NSString * typeName; 
@property (assign,nonatomic) BOOL hasTypeName; 
@property (nonatomic,copy) NSString * extendee; 
@property (assign,nonatomic) BOOL hasExtendee; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (assign,nonatomic) BOOL hasDefaultValue; 
@property (assign,nonatomic) int oneofIndex; 
@property (assign,nonatomic) BOOL hasOneofIndex; 
@property (nonatomic,copy) NSString * jsonName; 
@property (assign,nonatomic) BOOL hasJsonName; 
@property (nonatomic,retain) TRIPBFieldOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
+(id)descriptor;
@end

