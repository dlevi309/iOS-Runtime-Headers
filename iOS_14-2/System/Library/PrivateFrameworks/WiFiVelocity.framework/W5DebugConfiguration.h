/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _wifi;
	long long _megaWiFiProfile;
	long long _noLoggingWiFiProfile;
	long long _eapol;
	long long _bluetooth;

}

@property (assign,nonatomic) long long wifi;                              //@synthesize wifi=_wifi - In the implementation block
@property (assign,nonatomic) long long megaWiFiProfile;                   //@synthesize megaWiFiProfile=_megaWiFiProfile - In the implementation block
@property (assign,nonatomic) long long noLoggingWiFiProfile;              //@synthesize noLoggingWiFiProfile=_noLoggingWiFiProfile - In the implementation block
@property (assign,nonatomic) long long eapol;                             //@synthesize eapol=_eapol - In the implementation block
@property (assign,nonatomic) long long bluetooth;                         //@synthesize bluetooth=_bluetooth - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBluetooth:(long long)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)wifi;
-(long long)eapol;
-(id)description;
-(void)setWifi:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)bluetooth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)megaWiFiProfile;
-(long long)noLoggingWiFiProfile;
-(BOOL)isEqualToDebugConfiguration:(id)arg1 ;
-(void)setMegaWiFiProfile:(long long)arg1 ;
-(void)setNoLoggingWiFiProfile:(long long)arg1 ;
-(void)setEapol:(long long)arg1 ;
@end

