/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _scanRecord;

}

@property (nonatomic,copy,readonly) NSDictionary * scanRecord;              //@synthesize scanRecord=_scanRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)countryCode;
-(id)channel;
-(id)ssid;
-(long long)rssi;
-(id)bssid;
-(long long)stationCount;
-(BOOL)isPersonalHotspot;
-(BOOL)isPasspoint;
-(long long)noise;
-(NSDictionary *)scanRecord;
-(long long)beaconInterval;
-(BOOL)isAppleSWAP;
-(BOOL)isIBSS;
-(BOOL)isEqualToScanResult:(id)arg1 ;
-(int)fastestSupportedPHYMode;
-(id)initWithScanRecord:(id)arg1 ;
-(BOOL)supportsSecurity:(long long)arg1 ;
-(id)ssidString;
-(BOOL)__supportsWEP;
-(BOOL)__supportsWPAPersonal;
-(BOOL)__supportsWPAEnterprise;
-(BOOL)__supportsWPA2Personal;
-(BOOL)__supportsWPA3Personal;
-(BOOL)__supportsWPA2Enterprise;
-(BOOL)__supportsWPA3Enterprise;
-(BOOL)supportsPHYMode:(int)arg1 ;
-(id)__correctEthernetAddressFormat:(id)arg1 ;
-(id)__appleProductNameForProductID:(unsigned char)arg1 ;
-(long long)strongestSupportedSecurity;
-(BOOL)isAirPortBaseStation:(id*)arg1 modelID:(char*)arg2 ;
-(BOOL)isLeakyAP;
-(long long)channelUtilization;
-(BOOL)fastBSSTransitionEnabled;
-(BOOL)fastBSSTransitionOverDS;
-(BOOL)fastBSSTransitionRequestResourceProtocol;
@end

