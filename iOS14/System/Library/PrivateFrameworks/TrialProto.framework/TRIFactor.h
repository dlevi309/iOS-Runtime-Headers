/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIFactor : TRIPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (assign,nonatomic) BOOL hasId_p; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int namespaceId; 
@property (assign,nonatomic) BOOL hasNamespaceId; 
@property (nonatomic,copy) NSString * namespaceName; 
@property (assign,nonatomic) BOOL hasNamespaceName; 
+(id)descriptor;
-(id)typeString;
-(BOOL)isInNamespaceName:(id)arg1 ;
-(id)namespaceString;
-(BOOL)hasNamespace;
@end

