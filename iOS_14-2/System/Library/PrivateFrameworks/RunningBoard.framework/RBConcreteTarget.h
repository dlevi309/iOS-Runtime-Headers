/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBProcess, RBSProcessIdentity, NSString;

@interface RBConcreteTarget : NSObject <NSCopying>

@property (nonatomic,readonly) RBProcess * process; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity; 
@property (nonatomic,copy,readonly) NSString * environment; 
@property (getter=isSystem,nonatomic,readonly) BOOL system; 
+(id)targetWithProcess:(id)arg1 environment:(id)arg2 ;
+(id)targetWithIdentity:(id)arg1 environment:(id)arg2 ;
+(id)systemTarget;
-(RBProcess *)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(RBSProcessIdentity *)identity;
-(id)description;
-(NSString *)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

