/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ENRegionUserConsent : NSObject <NSSecureCoding, NSCopying> {

	long long _consent;
	NSString* _consentText;
	double _consentTimestamp;
	NSString* _consentVersion;
	long long _differentialPrivacyConsent;
	double _differentialPrivacyConsentTimestamp;

}

@property (assign,nonatomic) double consentTimestamp;                                 //@synthesize consentTimestamp=_consentTimestamp - In the implementation block
@property (assign,nonatomic) double differentialPrivacyConsentTimestamp;              //@synthesize differentialPrivacyConsentTimestamp=_differentialPrivacyConsentTimestamp - In the implementation block
@property (assign,nonatomic) long long consent;                                       //@synthesize consent=_consent - In the implementation block
@property (nonatomic,retain) NSString * consentText;                                  //@synthesize consentText=_consentText - In the implementation block
@property (nonatomic,retain) NSString * consentVersion;                               //@synthesize consentVersion=_consentVersion - In the implementation block
@property (assign,nonatomic) long long differentialPrivacyConsent;                    //@synthesize differentialPrivacyConsent=_differentialPrivacyConsent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)consent;
-(NSString *)consentVersion;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)consentTimestamp;
-(long long)differentialPrivacyConsent;
-(double)differentialPrivacyConsentTimestamp;
-(NSString *)consentText;
-(id)initWithConsentVersion:(id)arg1 ;
-(void)setConsent:(long long)arg1 ;
-(void)setConsentTimestamp:(double)arg1 ;
-(void)setDifferentialPrivacyConsent:(long long)arg1 ;
-(void)setDifferentialPrivacyConsentTimestamp:(double)arg1 ;
-(void)setConsentText:(NSString *)arg1 ;
-(void)setConsentVersion:(NSString *)arg1 ;
-(id)updatedConsent:(id)arg1 ;
@end

