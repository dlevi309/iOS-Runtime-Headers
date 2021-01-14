/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate, NSNumber, HDFHIRCredential, HDClinicalGateway, NSString, HKClinicalAccount;

@interface HDClinicalAccount : NSObject <NSCopying> {

	BOOL _userEnabled;
	NSUUID* _identifier;
	long long _credentialState;
	NSDate* _creationDate;
	NSDate* _lastFetchDate;
	NSDate* _lastFullFetchDate;
	NSNumber* _lastExtractedRowID;
	NSNumber* _lastSubmittedRowID;
	NSNumber* _lastExtractedRulesVersion;
	HDFHIRCredential* _credential;
	HDClinicalGateway* _gateway;
	NSString* _patientHash;

}

@property (nonatomic,copy,readonly) HKClinicalAccount * hkAccount; 
@property (nonatomic,readonly) long long hkState; 
@property (nonatomic,copy,readonly) NSUUID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (getter=isUserEnabled,nonatomic,readonly) BOOL userEnabled;                  //@synthesize userEnabled=_userEnabled - In the implementation block
@property (nonatomic,readonly) long long credentialState;                              //@synthesize credentialState=_credentialState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFetchDate;                            //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFullFetchDate;                        //@synthesize lastFullFetchDate=_lastFullFetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastExtractedRowID;                     //@synthesize lastExtractedRowID=_lastExtractedRowID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastSubmittedRowID;                     //@synthesize lastSubmittedRowID=_lastSubmittedRowID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastExtractedRulesVersion;              //@synthesize lastExtractedRulesVersion=_lastExtractedRulesVersion - In the implementation block
@property (nonatomic,readonly) BOOL needsRelogin; 
@property (nonatomic,readonly) BOOL needsScopeUpgrade; 
@property (nonatomic,copy,readonly) HDFHIRCredential * credential;                     //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) HDClinicalGateway * gateway;                       //@synthesize gateway=_gateway - In the implementation block
@property (nonatomic,copy) NSString * patientHash;                                     //@synthesize patientHash=_patientHash - In the implementation block
+(void)unitTesting_setExhibitUpdatedIngestTriggerBehavior:(BOOL)arg1 ;
+(void)unitTesting_resetExhibitUpdatedIngestTriggerBehavior;
-(HDFHIRCredential *)credential;
-(id)init;
-(BOOL)isUserEnabled;
-(long long)credentialState;
-(HDClinicalGateway *)gateway;
-(BOOL)needsRelogin;
-(NSDate *)lastFullFetchDate;
-(BOOL)needsScopeUpgrade;
-(id)description;
-(NSDate *)creationDate;
-(NSDate *)lastFetchDate;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPatientHash:(NSString *)arg1 ;
-(NSString *)patientHash;
-(HKClinicalAccount *)hkAccount;
-(BOOL)shouldPerformBackgroundFetchWithFrequency:(long long)arg1 nowDate:(id)arg2 ;
-(BOOL)shouldPerformFetchWithNowDate:(id)arg1 ;
-(NSNumber *)lastExtractedRulesVersion;
-(NSNumber *)lastSubmittedRowID;
-(NSNumber *)lastExtractedRowID;
-(id)initWithIdentifier:(id)arg1 userEnabled:(BOOL)arg2 credentialState:(long long)arg3 creationDate:(id)arg4 lastFetchDate:(id)arg5 lastFullFetchDate:(id)arg6 lastExtractedRowID:(id)arg7 lastSubmittedRowID:(id)arg8 lastExtractedRulesVersion:(id)arg9 credential:(id)arg10 gateway:(id)arg11 ;
-(long long)hkState;
-(BOOL)exhibitUpdatedIngestTriggerBehavior;
-(BOOL)shouldPerformFullFetchWithNowDate:(id)arg1 ;
-(double)_secondsFetchIsBlocked;
-(double)_secondsFullFetchIsBlocked;
-(id)_minuteOverrideForUserDefaultsKey:(id)arg1 ;
-(BOOL)currentCredentialHasOutdatedScopes;
-(id)currentCredentialScopesWithError:(id*)arg1 ;
@end

