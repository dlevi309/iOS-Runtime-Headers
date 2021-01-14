/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENRegion, ENRegionUserConsent;

@interface ENRegionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _everStartedOnboarding;
	unsigned long long _enVersion;
	ENRegion* _region;
	ENRegionUserConsent* _userConsent;
	long long _travelerModeEnabled;
	double _creationDateTimeInterval;
	double _lastConfigurationUpdateTimeInterval;
	unsigned long long _enRampMode;
	long long _differentialPrivacyConsent;
	double _differentialPrivacyConsentTimestamp;
	long long _consent;
	double _consentTimestamp;

}

@property (assign,nonatomic) unsigned long long enVersion;                              //@synthesize enVersion=_enVersion - In the implementation block
@property (nonatomic,retain) ENRegion * region;                                         //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) double creationDateTimeInterval;                           //@synthesize creationDateTimeInterval=_creationDateTimeInterval - In the implementation block
@property (assign,nonatomic) double lastConfigurationUpdateTimeInterval;                //@synthesize lastConfigurationUpdateTimeInterval=_lastConfigurationUpdateTimeInterval - In the implementation block
@property (nonatomic,retain) ENRegionUserConsent * userConsent;                         //@synthesize userConsent=_userConsent - In the implementation block
@property (assign,nonatomic) BOOL everStartedOnboarding;                                //@synthesize everStartedOnboarding=_everStartedOnboarding - In the implementation block
@property (assign,nonatomic) long long travelerModeEnabled;                             //@synthesize travelerModeEnabled=_travelerModeEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long enRampMode;                             //@synthesize enRampMode=_enRampMode - In the implementation block
@property (nonatomic,readonly) long long differentialPrivacyConsent;                    //@synthesize differentialPrivacyConsent=_differentialPrivacyConsent - In the implementation block
@property (nonatomic,readonly) double differentialPrivacyConsentTimestamp;              //@synthesize differentialPrivacyConsentTimestamp=_differentialPrivacyConsentTimestamp - In the implementation block
@property (nonatomic,readonly) long long consent;                                       //@synthesize consent=_consent - In the implementation block
@property (nonatomic,readonly) double consentTimestamp;                                 //@synthesize consentTimestamp=_consentTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(ENRegion *)region;
-(void)setRegion:(ENRegion *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)consent;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)enVersion;
-(double)consentTimestamp;
-(long long)differentialPrivacyConsent;
-(double)differentialPrivacyConsentTimestamp;
-(ENRegionUserConsent *)userConsent;
-(double)creationDateTimeInterval;
-(double)lastConfigurationUpdateTimeInterval;
-(BOOL)everStartedOnboarding;
-(long long)travelerModeEnabled;
-(unsigned long long)enRampMode;
-(id)initWithVersion:(unsigned long long)arg1 region:(id)arg2 ;
-(void)setEverStartedOnboarding:(BOOL)arg1 ;
-(void)setTravelerModeEnabled:(long long)arg1 ;
-(void)setUserConsent:(ENRegionUserConsent *)arg1 ;
-(void)setCreationDateTimeInterval:(double)arg1 ;
-(void)setLastConfigurationUpdateTimeInterval:(double)arg1 ;
-(void)setEnRampMode:(unsigned long long)arg1 ;
-(void)setEnVersion:(unsigned long long)arg1 ;
-(id)updatedWithConfiguration:(id)arg1 ;
@end

