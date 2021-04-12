/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)descriptor;
-(id)typeString;
@end

