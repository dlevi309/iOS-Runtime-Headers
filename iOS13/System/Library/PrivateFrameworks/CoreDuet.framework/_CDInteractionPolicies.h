/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)interactionPolicies;
+(id)modifyDate:(id)arg1 usingPolicy:(id)arg2 ;
+(id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1 ;
-(void)setupDefaultHardcodedPolicies;
-(id)policyForMechanism:(long long)arg1 ;
-(id)whitelistedFirstPartyBundleIds;
-(id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;
-(unsigned long long)maxNumberOfInteractionsStored;
-(unsigned long long)maxNumberOfInteractionsDeleted;
-(NSDate *)dateOfOldestAllowedInteraction;
-(id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(BOOL)arg2 enforcePrivacy:(BOOL)arg3 ;
-(void)readConfigurationPlist;
@end

