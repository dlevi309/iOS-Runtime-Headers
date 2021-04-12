/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPAccessoryConfiguration.h>

@class NSString, NSData;

@interface HAPAccessoryWiFiConfiguration : HAPAccessoryConfiguration {

	NSString* _ssid;
	NSData* _psk;
	NSString* _isoCountryCode;

}

@property (nonatomic,readonly) NSString * ssid;                        //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) NSData * psk;                           //@synthesize psk=_psk - In the implementation block
@property (nonatomic,readonly) NSString * isoCountryCode;              //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
+(id)accessoryConfigurationWithSsid:(id)arg1 psk:(id)arg2 country:(id)arg3 ;
-(NSData *)psk;
-(NSString *)ssid;
-(NSString *)isoCountryCode;
-(id)description;
-(id)initWithSSID:(id)arg1 psk:(id)arg2 country:(id)arg3 ;
@end

