/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, NSString, _HKEntitlements;

@interface HDClientAuthorizationOracle : NSObject {

	HDProfile* _profile;
	NSString* _sourceBundleIdentifier;
	_HKEntitlements* _entitlements;
	BOOL _clientHasPrivateEntitlement;

}
-(id)init;
-(id)readAuthorizationStatusesForTypes:(id)arg1 error:(id*)arg2 ;
-(id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldBypassAuthorization;
-(id)_unrestrictedAuthorizationForTypes:(id)arg1 ;
-(id)initWithSourceBundleIdentifier:(id)arg1 entitlements:(id)arg2 profile:(id)arg3 ;
-(id)filteredObjectsForReadAuthorization:(id)arg1 anchor:(id)arg2 error:(id*)arg3 ;
-(BOOL)performReadAuthorizationTransactionWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)additionalAuthorizationPredicateForObjectType:(id)arg1 error:(id*)arg2 ;
@end

