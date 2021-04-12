/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface RBAssertionTransientState : NSObject <NSCopying, BSDescriptionProviding> {

	NSMutableDictionary* _cpuUsageViolationPoliciesByRole;
	NSMutableSet* _tags;

}

@property (nonatomic,readonly) NSSet * tags;                        //@synthesize tags=_tags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)tags;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)addTag:(id)arg1 ;
-(unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1 ;
-(void)setMaxCPUUsageViolationPolicy:(unsigned long long)arg1 forRole:(unsigned char)arg2 ;
-(void)unionState:(id)arg1 ;
@end

