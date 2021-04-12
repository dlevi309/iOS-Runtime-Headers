/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENRegion, NSArray, NSString, NSURL, ENRegionServerAgencyLocalizedConfiguration;

@interface ENRegionServerAgencyConfiguration : NSObject <NSSecureCoding, NSCopying> {

	ENRegion* _region;
	NSArray* _agencyColor;
	NSArray* _agencyHeaderTextColor;
	NSString* _agencyImageURL;
	unsigned long long _agencyHeaderStyle;
	NSURL* _agencyWebsiteURL;
	ENRegionServerAgencyLocalizedConfiguration* _localizedConfiguration;
	NSString* _legalConsentVersion;
	NSURL* _revokedClassificationURL;
	NSURL* _verificationCodeLearnMoreURL;

}

@property (nonatomic,copy,readonly) ENRegion * region;                                                       //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSArray * agencyColor;                                                            //@synthesize agencyColor=_agencyColor - In the implementation block
@property (nonatomic,copy) NSArray * agencyHeaderTextColor;                                                  //@synthesize agencyHeaderTextColor=_agencyHeaderTextColor - In the implementation block
@property (nonatomic,copy) NSString * agencyImageURL;                                                        //@synthesize agencyImageURL=_agencyImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * agencyDisplayName; 
@property (assign,nonatomic) unsigned long long agencyHeaderStyle;                                           //@synthesize agencyHeaderStyle=_agencyHeaderStyle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * agencyWebsiteURL;                                                //@synthesize agencyWebsiteURL=_agencyWebsiteURL - In the implementation block
@property (nonatomic,copy) ENRegionServerAgencyLocalizedConfiguration * localizedConfiguration;              //@synthesize localizedConfiguration=_localizedConfiguration - In the implementation block
@property (nonatomic,copy) NSString * legalConsentVersion;                                                   //@synthesize legalConsentVersion=_legalConsentVersion - In the implementation block
@property (nonatomic,copy,readonly) NSURL * revokedClassificationURL;                                        //@synthesize revokedClassificationURL=_revokedClassificationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * verificationCodeLearnMoreURL;                                    //@synthesize verificationCodeLearnMoreURL=_verificationCodeLearnMoreURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(ENRegion *)region;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRegion:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)agencyDisplayName;
-(NSArray *)agencyColor;
-(NSString *)agencyImageURL;
-(unsigned long long)agencyHeaderStyle;
-(NSArray *)agencyHeaderTextColor;
-(NSString *)legalConsentVersion;
-(NSURL *)agencyWebsiteURL;
-(NSURL *)verificationCodeLearnMoreURL;
-(ENRegionServerAgencyLocalizedConfiguration *)localizedConfiguration;
-(id)initWithServerResponseDictionary:(id)arg1 locale:(id)arg2 ;
-(void)setAgencyColor:(NSArray *)arg1 ;
-(void)setAgencyHeaderTextColor:(NSArray *)arg1 ;
-(void)setAgencyImageURL:(NSString *)arg1 ;
-(void)setAgencyHeaderStyle:(unsigned long long)arg1 ;
-(void)setLocalizedConfiguration:(ENRegionServerAgencyLocalizedConfiguration *)arg1 ;
-(void)setLegalConsentVersion:(NSString *)arg1 ;
-(NSURL *)revokedClassificationURL;
@end

