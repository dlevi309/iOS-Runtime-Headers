/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSProcessIdentity, RBInheritanceCollection, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	RBSProcessIdentity* _identity;
	RBInheritanceCollection* _inheritances;
	NSMutableDictionary* _maxCPULimitsByRole;
	NSMutableDictionary* _minCPULimitsByRole;
	NSMutableDictionary* _jetsamLenientModeByRole;
	NSMutableSet* _preventIdleSleepIdentifiers;
	NSMutableSet* _tags;
	NSMutableSet* _legacyAssertions;
	NSMutableSet* _primitiveAssertions;
	unsigned long long _legacyFinishTaskReason;
	unsigned char _terminationResistance;
	unsigned char _jetsamBand;
	unsigned char _role;
	unsigned char _flags;
	NSSet* _preventLaunchReasons;

}

@property (nonatomic,retain) NSMutableDictionary * maxCPULimitsByRole;                              //@synthesize maxCPULimitsByRole=_maxCPULimitsByRole - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * minCPULimitsByRole;                              //@synthesize minCPULimitsByRole=_minCPULimitsByRole - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                                            //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSSet * legacyAssertions;                                                //@synthesize legacyAssertions=_legacyAssertions - In the implementation block
@property (nonatomic,copy) NSSet * primitiveAssertions;                                             //@synthesize primitiveAssertions=_primitiveAssertions - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                                  //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) unsigned char role;                                                  //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) BOOL GPUAllowed; 
@property (nonatomic,readonly) unsigned char terminationResistance;                                 //@synthesize terminationResistance=_terminationResistance - In the implementation block
@property (nonatomic,readonly) unsigned char jetsamBand;                                            //@synthesize jetsamBand=_jetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL isBeingDebugged; 
@property (nonatomic,readonly) BOOL preventIdleSleep; 
@property (nonatomic,readonly) BOOL preventLaunch; 
@property (nonatomic,readonly) BOOL jetsamLenientMode; 
@property (nonatomic,readonly) BOOL throttleBestEffortNetworking; 
@property (nonatomic,readonly) BOOL effectiveJetsamLenientMode; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUPercentage; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUDuration; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUUsageViolationPolicy; 
@property (nonatomic,readonly) unsigned long long effectiveMinCPUPercentage; 
@property (nonatomic,readonly) unsigned long long effectiveMinCPUDuration; 
@property (nonatomic,readonly) unsigned long long legacyFinishTaskReason;                           //@synthesize legacyFinishTaskReason=_legacyFinishTaskReason - In the implementation block
@property (nonatomic,readonly) NSSet * preventIdleSleepIdentifiers;                                 //@synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers - In the implementation block
@property (nonatomic,readonly) RBInheritanceCollection * inheritances;                              //@synthesize inheritances=_inheritances - In the implementation block
@property (nonatomic,readonly) NSSet * preventLaunchReasons;                                        //@synthesize preventLaunchReasons=_preventLaunchReasons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned char)role;
-(NSSet *)tags;
-(RBSProcessIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
-(void)setLegacyAssertions:(NSSet *)arg1 ;
-(void)setPrimitiveAssertions:(NSSet *)arg1 ;
-(NSSet *)legacyAssertions;
-(NSSet *)primitiveAssertions;
-(unsigned char)terminationResistance;
-(RBInheritanceCollection *)inheritances;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isBeingDebugged;
-(unsigned char)jetsamBand;
-(BOOL)jetsamLenientMode;
-(unsigned long long)legacyFinishTaskReason;
-(NSSet *)preventIdleSleepIdentifiers;
-(BOOL)preventIdleSleep;
-(BOOL)throttleBestEffortNetworking;
-(id)inheritancesForEnvironment:(id)arg1 ;
-(BOOL)_isEqualToProcessStateIgnoringIdentityAndInheritances:(id)arg1 ;
-(id)_initWithProcessState:(id)arg1 ;
-(BOOL)GPUAllowed;
-(BOOL)preventLaunch;
-(unsigned long long)effectiveMaxCPUUsageViolationPolicy;
-(unsigned long long)effectiveMaxCPUDuration;
-(unsigned long long)effectiveMaxCPUPercentage;
-(unsigned long long)effectiveMinCPUDuration;
-(unsigned long long)effectiveMinCPUPercentage;
-(BOOL)effectiveJetsamLenientMode;
-(id)maxCPUUsageLimitsForRole:(unsigned char)arg1 ;
-(id)minCPUUsageLimitsForRole:(unsigned char)arg1 ;
-(BOOL)isEqualToProcessStateIgnoringIdentity:(id)arg1 ;
-(BOOL)isEqualToProcessStateIgnoringInheritances:(id)arg1 ;
-(NSMutableDictionary *)maxCPULimitsByRole;
-(void)setMaxCPULimitsByRole:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)minCPULimitsByRole;
-(void)setMinCPULimitsByRole:(NSMutableDictionary *)arg1 ;
-(NSSet *)preventLaunchReasons;
@end

