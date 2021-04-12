/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NEHotspotEAPSettings, NEHotspotHS20Settings;

@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _joinOnce;
	BOOL _hidden;
	BOOL _useSSIDPrefix;
	NSString* _SSID;
	NSString* _SSIDPrefix;
	NSNumber* _lifeTimeInDays;
	long long _securityType;
	NSString* _passphrase;
	NEHotspotEAPSettings* _eapSettings;
	NEHotspotHS20Settings* _hs20Settings;

}

@property (assign) long long securityType;                                //@synthesize securityType=_securityType - In the implementation block
@property (copy) NSString * passphrase;                                   //@synthesize passphrase=_passphrase - In the implementation block
@property (copy) NEHotspotEAPSettings * eapSettings;                      //@synthesize eapSettings=_eapSettings - In the implementation block
@property (copy) NEHotspotHS20Settings * hs20Settings;                    //@synthesize hs20Settings=_hs20Settings - In the implementation block
@property (assign) BOOL useSSIDPrefix;                                    //@synthesize useSSIDPrefix=_useSSIDPrefix - In the implementation block
@property (setter=SID,readonly) NSString * SSID;                          //@synthesize SSID=_SSID - In the implementation block
@property (setter=SIDPrefix,readonly) NSString * SSIDPrefix;              //@synthesize SSIDPrefix=_SSIDPrefix - In the implementation block
@property (assign) BOOL joinOnce;                                         //@synthesize joinOnce=_joinOnce - In the implementation block
@property (copy) NSNumber * lifeTimeInDays;                               //@synthesize lifeTimeInDays=_lifeTimeInDays - In the implementation block
@property (assign) BOOL hidden;                                           //@synthesize hidden=_hidden - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)SSID;
-(long long)validate;
-(BOOL)hidden;
-(id)init;
-(long long)securityType;
-(void)setHidden:(BOOL)arg1 ;
-(void)setSecurityType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)joinOnce;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)SSIDPrefix;
-(NSNumber *)lifeTimeInDays;
-(NSString *)passphrase;
-(NEHotspotEAPSettings *)eapSettings;
-(NEHotspotHS20Settings *)hs20Settings;
-(BOOL)useSSIDPrefix;
-(id)initWithSSIDPrefix:(id)arg1 ;
-(id)initWithSSID:(id)arg1 ;
-(id)initWithSSIDPrefix:(id)arg1 passphrase:(id)arg2 isWEP:(BOOL)arg3 ;
-(id)initWithSSID:(id)arg1 passphrase:(id)arg2 isWEP:(BOOL)arg3 ;
-(void)setUseSSIDPrefix:(BOOL)arg1 ;
-(id)initWithSSID:(id)arg1 eapSettings:(id)arg2 ;
-(id)initWithHS20Settings:(id)arg1 eapSettings:(id)arg2 ;
-(void)setLifeTimeInDays:(NSNumber *)arg1 ;
-(void)setJoinOnce:(BOOL)arg1 ;
-(void)buildClientTrustChainReference:(SecIdentityRef)arg1 ;
-(BOOL)validateSecIdentityReference:(BOOL)arg1 ;
-(BOOL)validateClientTrustChainReference;
-(BOOL)validateTrustedServerCertificateReferences;
-(BOOL)isWEPPassphraseValid;
-(BOOL)validateEAPSettings;
-(void)setPassphrase:(NSString *)arg1 ;
-(void)setEapSettings:(NEHotspotEAPSettings *)arg1 ;
-(void)setHs20Settings:(NEHotspotHS20Settings *)arg1 ;
@end

