/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray, TRIPBMessageOptions;

@interface TRIPBDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,retain) NSMutableArray * fieldArray; 
@property (nonatomic,readonly) unsigned long long fieldArray_Count; 
@property (nonatomic,retain) NSMutableArray * extensionArray; 
@property (nonatomic,readonly) unsigned long long extensionArray_Count; 
@property (nonatomic,retain) NSMutableArray * nestedTypeArray; 
@property (nonatomic,readonly) unsigned long long nestedTypeArray_Count; 
@property (nonatomic,retain) NSMutableArray * enumTypeArray; 
@property (nonatomic,readonly) unsigned long long enumTypeArray_Count; 
@property (nonatomic,retain) NSMutableArray * extensionRangeArray; 
@property (nonatomic,readonly) unsigned long long extensionRangeArray_Count; 
@property (nonatomic,retain) NSMutableArray * oneofDeclArray; 
@property (nonatomic,readonly) unsigned long long oneofDeclArray_Count; 
@property (nonatomic,retain) TRIPBMessageOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (nonatomic,retain) NSMutableArray * reservedRangeArray; 
@property (nonatomic,readonly) unsigned long long reservedRangeArray_Count; 
@property (nonatomic,retain) NSMutableArray * reservedNameArray; 
@property (nonatomic,readonly) unsigned long long reservedNameArray_Count; 
+(id)descriptor;
@end

