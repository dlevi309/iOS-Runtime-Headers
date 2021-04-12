/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class RBSProcessIdentity, RBInheritanceCollection, NSMutableDictionary, NSMutableSet, NSSet;

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying> {

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

@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                                  //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) unsigned char role;                                                  //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) BOOL preventSuspend; 
@property (nonatomic,readonly) BOOL GPUAllowed; 
@property (nonatomic,readonly) unsigned char terminationResistance;                                 //@synthesize terminationResistance=_terminationResistance - In the implementation block
@property (nonatomic,readonly) unsigned char jetsamBand;                                            //@synthesize jetsamBand=_jetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL isBeingDebugged; 
@property (nonatomic,readonly) BOOL preventIdleSleep; 
@property (nonatomic,readonly) BOOL jetsamLenientMode; 
@property (nonatomic,readonly) BOOL throttleBestEffortNetworking; 
@property (nonatomic,readonly) BOOL effectiveJetsamLenientMode; 
@property (nonatomic,readonly) BOOL forceRoleManage; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUPercentage; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUDuration; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUUsageViolationPolicy; 
@property (nonatomic,readonly) unsigned long long effectiveMinCPUPercentage; 
@property (nonatomic,readonly) unsigned long long effectiveMinCPUDuration; 
@property (nonatomic,readonly) unsigned long long legacyFinishTaskReason;                           //@synthesize legacyFinishTaskReason=_legacyFinishTaskReason - In the implementation block
@property (nonatomic,readonly) NSSet * preventIdleSleepIdentifiers;                                 //@synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers - In the implementation block
@property (nonatomic,readonly) RBInheritanceCollection * inheritances;                              //@synthesize inheritances=_inheritances - In the implementation block
@property (nonatomic,readonly) NSSet * preventLaunchReasons;                                        //@synthesize preventLaunchReasons=_preventLaunchReasons - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tags; 
@property (nonatomic,copy,readonly) NSSet * legacyAssertions; 
@property (nonatomic,copy,readonly) NSSet * primitiveAssertions; 
-(id)inheritancesForEnvironment:(id)arg1 ;
-(id)initWithIdentity:(id)arg1 ;
-(BOOL)preventIdleSleep;
-(id)maxCPUUsageLimitsForRole:(unsigned char)arg1 ;
-(NSSet *)preventIdleSleepIdentifiers;
-(NSSet *)tags;
-(NSSet *)preventLaunchReasons;
-(id)clientStateForProcess:(id)arg1 ;
-(id)init;
-(unsigned long long)effectiveMinCPUDuration;
-(unsigned char)jetsamBand;
-(BOOL)jetsamLenientMode;
-(RBSProcessIdentity *)identity;
-(NSSet *)legacyAssertions;
-(unsigned long long)legacyFinishTaskReason;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)effectiveMinCPUPercentage;
-(BOOL)isBeingDebugged;
-(unsigned long long)effectiveMaxCPUDuration;
-(BOOL)isEqualToProcessStateIgnoringIdentity:(id)arg1 ;
-(id)description;
-(unsigned char)terminationResistance;
-(BOOL)isEqualToProcessStateIgnoringInheritances:(id)arg1 ;
-(BOOL)forceRoleManage;
-(BOOL)preventSuspend;
-(RBInheritanceCollection *)inheritances;
-(unsigned long long)hash;
-(BOOL)effectiveJetsamLenientMode;
-(unsigned long long)effectiveMaxCPUUsageViolationPolicy;
-(BOOL)GPUAllowed;
-(unsigned char)role;
-(BOOL)throttleBestEffortNetworking;
-(NSSet *)primitiveAssertions;
-(id)minCPUUsageLimitsForRole:(unsigned char)arg1 ;
-(BOOL)isAppNapEqualToProcessState:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)effectiveMaxCPUPercentage;
-(BOOL)isEqual:(id)arg1 ;
@end

