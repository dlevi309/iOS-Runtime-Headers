/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, NSString;

@interface HDKeyValueDomain : NSObject {

	HDProfile* _profile;
	Class _entityClass;
	long long _category;
	NSString* _domainName;

}

@property (nonatomic,readonly) long long category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
+(id)hdmc_menstrualCyclesDefaultsDomainWithProfile:(id)arg1 ;
+(id)healthAppUserDefaultsDomainWithProfile:(id)arg1 ;
-(id)hdmc_isOnboardingCompletedWithError:(id*)arg1 ;
-(id)hdmc_onboardingFirstCompletedDateWithError:(id*)arg1 ;
-(BOOL)hdmc_setLastLoggedInCycleTrackingDate:(id)arg1 error:(id*)arg2 ;
-(id)hdmc_lastLoggedInCycleTrackingDateWithError:(id*)arg1 ;
-(long long)category;
-(NSString *)domainName;
-(id)stringForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)numberForKey:(id)arg1 error:(id*)arg2 ;
-(id)dateForKey:(id)arg1 error:(id*)arg2 ;
-(id)propertyListValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)dataForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 profile:(id)arg3 ;
-(id)allValuesWithError:(id*)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setValuesWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)quantityForKey:(id)arg1 unit:(id)arg2 error:(id*)arg3 ;
-(id)valuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)modificationDatesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
@end

