/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray, TRIPBEnumOptions;

@interface TRIPBEnumDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,retain) NSMutableArray * valueArray; 
@property (nonatomic,readonly) unsigned long long valueArray_Count; 
@property (nonatomic,retain) TRIPBEnumOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (nonatomic,retain) NSMutableArray * reservedRangeArray; 
@property (nonatomic,readonly) unsigned long long reservedRangeArray_Count; 
@property (nonatomic,retain) NSMutableArray * reservedNameArray; 
@property (nonatomic,readonly) unsigned long long reservedNameArray_Count; 
+(id)descriptor;
@end

