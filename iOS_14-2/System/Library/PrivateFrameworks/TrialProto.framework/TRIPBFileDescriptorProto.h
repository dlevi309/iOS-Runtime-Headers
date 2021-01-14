/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray, TRIPBInt32Array, TRIPBFileOptions, TRIPBSourceCodeInfo;

@interface TRIPBFileDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,copy) NSString * package; 
@property (assign,nonatomic) BOOL hasPackage; 
@property (nonatomic,retain) NSMutableArray * dependencyArray; 
@property (nonatomic,readonly) unsigned long long dependencyArray_Count; 
@property (nonatomic,retain) TRIPBInt32Array * publicDependencyArray; 
@property (nonatomic,readonly) unsigned long long publicDependencyArray_Count; 
@property (nonatomic,retain) TRIPBInt32Array * weakDependencyArray; 
@property (nonatomic,readonly) unsigned long long weakDependencyArray_Count; 
@property (nonatomic,retain) NSMutableArray * messageTypeArray; 
@property (nonatomic,readonly) unsigned long long messageTypeArray_Count; 
@property (nonatomic,retain) NSMutableArray * enumTypeArray; 
@property (nonatomic,readonly) unsigned long long enumTypeArray_Count; 
@property (nonatomic,retain) NSMutableArray * serviceArray; 
@property (nonatomic,readonly) unsigned long long serviceArray_Count; 
@property (nonatomic,retain) NSMutableArray * extensionArray; 
@property (nonatomic,readonly) unsigned long long extensionArray_Count; 
@property (nonatomic,retain) TRIPBFileOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (nonatomic,retain) TRIPBSourceCodeInfo * sourceCodeInfo; 
@property (assign,nonatomic) BOOL hasSourceCodeInfo; 
@property (nonatomic,copy) NSString * syntax; 
@property (assign,nonatomic) BOOL hasSyntax; 
+(id)descriptor;
@end

