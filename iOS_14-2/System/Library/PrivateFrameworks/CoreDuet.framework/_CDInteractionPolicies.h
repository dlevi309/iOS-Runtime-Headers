/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDictionary, _CDInteractionPolicy, NSDate;

@interface _CDInteractionPolicies : NSObject {

	unsigned long long _maxNumberOfInteractions;
	unsigned long long _maxNumberOfInteractionsDeletedInBatch;
	double _maxLifespanInSeconds;
	NSDictionary* _specialPoliciesForBundleIds;
	NSDictionary* _specialPoliciesForMechanisms;
	_CDInteractionPolicy* _defaultPolicy;

}

@property (readonly) unsigned long long maxNumberOfInteractionsStored; 
@property (readonly) unsigned long long maxNumberOfInteractionsDeleted; 
@property (readonly) NSDate * dateOfOldestAllowedInteraction; 
+(id)modifyDate:(id)arg1 usingPolicy:(id)arg2 ;
+(id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2 ;
+(id)interactionPolicies;
-(NSDate *)dateOfOldestAllowedInteraction;
-(id)init;
-(void)setupDefaultHardcodedPolicies;
-(id)whitelistedFirstPartyBundleIds;
-(id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(BOOL)arg2 enforcePrivacy:(BOOL)arg3 ;
-(id)description;
-(void)readConfigurationPlist;
-(id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;
-(id)policyForMechanism:(long long)arg1 ;
-(unsigned long long)maxNumberOfInteractionsStored;
-(unsigned long long)maxNumberOfInteractionsDeleted;
-(id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1 ;
@end

