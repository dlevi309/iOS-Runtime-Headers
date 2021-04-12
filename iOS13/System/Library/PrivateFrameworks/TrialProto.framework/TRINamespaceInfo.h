/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBUInt32Array, TRIPBUInt32ObjectDictionary;

@interface TRINamespaceInfo : TRIPBMessage

@property (assign,nonatomic) int namespaceId; 
@property (assign,nonatomic) BOOL hasNamespaceId; 
@property (assign,nonatomic) int projectOwner; 
@property (assign,nonatomic) BOOL hasProjectOwner; 
@property (nonatomic,retain) TRIPBUInt32Array * compatibilityVersionArray; 
@property (nonatomic,readonly) unsigned long long compatibilityVersionArray_Count; 
@property (nonatomic,retain) TRIPBUInt32ObjectDictionary * defaultFactorLevels; 
@property (nonatomic,readonly) unsigned long long defaultFactorLevels_Count; 
+(id)descriptor;
@end

