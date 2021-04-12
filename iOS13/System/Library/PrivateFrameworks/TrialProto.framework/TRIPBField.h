/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRIPBField : TRIPBMessage

@property (assign,nonatomic) int kind; 
@property (assign,nonatomic) int cardinality; 
@property (assign,nonatomic) int number; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * typeURL; 
@property (assign,nonatomic) int oneofIndex; 
@property (assign,nonatomic) BOOL packed; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,copy) NSString * jsonName; 
@property (nonatomic,copy) NSString * defaultValue; 
+(id)descriptor;
@end

