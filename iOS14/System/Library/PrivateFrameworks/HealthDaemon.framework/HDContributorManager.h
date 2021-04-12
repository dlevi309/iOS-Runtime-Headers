/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile;

@interface HDContributorManager : NSObject {

	HDProfile* _profile;

}
-(id)initWithProfile:(id)arg1 ;
-(id)_primaryAppleAccount;
-(id)defaultContributorReference;
-(id)insertOrLookupContributorEntityWithReference:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)_insertOrLookupContributorEntityForPrimaryUserWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_imPreferredAccount;
-(id)contributorForReference:(id)arg1 error:(id*)arg2 ;
@end

