/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface RBAssertionTransientState : NSObject <NSCopying> {

	NSMutableDictionary* _cpuUsageViolationPoliciesByRole;
	NSMutableSet* _tags;

}

@property (nonatomic,readonly) NSSet * tags;              //@synthesize tags=_tags - In the implementation block
-(void)addTag:(id)arg1 ;
-(void)unionState:(id)arg1 ;
-(NSSet *)tags;
-(void)setMaxCPUUsageViolationPolicy:(unsigned long long)arg1 forRole:(unsigned char)arg2 ;
-(id)description;
-(unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

