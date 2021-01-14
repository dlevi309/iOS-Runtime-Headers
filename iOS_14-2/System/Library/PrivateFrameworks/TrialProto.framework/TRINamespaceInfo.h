/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRINamespaceInfo : TRIPBMessage

@property (nonatomic,copy) NSString * namespaceId; 
@property (assign,nonatomic) BOOL hasNamespaceId; 
@property (assign,nonatomic) int projectOwner; 
@property (assign,nonatomic) BOOL hasProjectOwner; 
@property (assign,nonatomic) int deploymentEnvironment; 
@property (assign,nonatomic) BOOL hasDeploymentEnvironment; 
@property (assign,nonatomic) BOOL isServerCoordinated; 
@property (assign,nonatomic) BOOL hasIsServerCoordinated; 
@property (nonatomic,retain) NSMutableArray * compatibilityVersionArray; 
@property (nonatomic,readonly) unsigned long long compatibilityVersionArray_Count; 
+(id)descriptor;
@end

