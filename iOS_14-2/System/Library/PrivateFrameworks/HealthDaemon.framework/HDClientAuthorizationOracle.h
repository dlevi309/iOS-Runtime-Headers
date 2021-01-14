/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, NSString, _HKEntitlements;

@interface HDClientAuthorizationOracle : NSObject {

	HDProfile* _profile;
	NSString* _sourceBundleIdentifier;
	_HKEntitlements* _entitlements;
	BOOL _clientHasPrivateEntitlement;

}
-(id)additionalAuthorizationPredicateForObjectType:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)readAuthorizationStatusesForTypes:(id)arg1 error:(id*)arg2 ;
-(id)filteredObjectsForReadAuthorization:(id)arg1 anchor:(id)arg2 error:(id*)arg3 ;
-(BOOL)performReadAuthorizationTransactionWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)_unrestrictedAuthorizationForTypes:(id)arg1 ;
-(id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldBypassAuthorization;
-(id)initWithSourceBundleIdentifier:(id)arg1 entitlements:(id)arg2 profile:(id)arg3 ;
@end

