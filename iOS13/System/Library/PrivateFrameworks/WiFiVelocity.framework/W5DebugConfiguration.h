/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)wifi;
-(void)setWifi:(long long)arg1 ;
-(void)setBluetooth:(long long)arg1 ;
-(long long)bluetooth;
-(long long)megaWiFiProfile;
-(long long)noLoggingWiFiProfile;
-(long long)eapol;
-(BOOL)isEqualToDebugConfiguration:(id)arg1 ;
-(void)setMegaWiFiProfile:(long long)arg1 ;
-(void)setNoLoggingWiFiProfile:(long long)arg1 ;
-(void)setEapol:(long long)arg1 ;
@end

