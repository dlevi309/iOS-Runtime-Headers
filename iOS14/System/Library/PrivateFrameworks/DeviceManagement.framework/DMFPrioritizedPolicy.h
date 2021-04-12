/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@interface DMFPrioritizedPolicy : NSObject {

	long long _priority;
	long long _policy;

}

@property (assign,nonatomic) long long priority;              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long policy;                //@synthesize policy=_policy - In the implementation block
+(long long)arbitratePolicyForPrioritizedPolicies:(id)arg1 ;
+(id)prioritizedPoliciesForAppPolicy:(id)arg1 bundleIdentifiers:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifiers:(id)arg4 webPolicy:(id)arg5 webDomains:(id)arg6 ;
-(long long)compare:(id)arg1 ;
-(void)setPolicy:(long long)arg1 ;
-(long long)policy;
-(unsigned long long)hash;
-(id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqualToPrioritizedPolicy:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

