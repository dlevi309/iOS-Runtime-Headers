/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@interface DMFPrioritizedPolicy : NSObject {

	long long _priority;
	long long _policy;

}

@property (assign,nonatomic) long long priority;              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long policy;                //@synthesize policy=_policy - In the implementation block
+(id)prioritizedPoliciesForAppPolicy:(id)arg1 bundleIdentifiers:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifiers:(id)arg4 webPolicy:(id)arg5 webDomains:(id)arg6 ;
+(long long)arbitratePolicyForPrioritizedPolicies:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(long long)policy;
-(void)setPolicy:(long long)arg1 ;
-(id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqualToPrioritizedPolicy:(id)arg1 ;
@end

