/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBProcess, RBSProcessIdentity, NSString;

@interface RBConcreteTarget : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic,readonly) RBProcess * process; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity; 
@property (nonatomic,copy,readonly) NSString * environment; 
@property (getter=isSystem,nonatomic,readonly) BOOL system; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemTarget;
+(id)targetWithIdentity:(id)arg1 environment:(id)arg2 ;
+(id)targetWithProcess:(id)arg1 environment:(id)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(NSString *)environment;
-(RBSProcessIdentity *)identity;
-(RBProcess *)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isSystem;
-(id)createRBSTarget;
@end

