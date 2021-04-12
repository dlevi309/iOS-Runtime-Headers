/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFLinkQuality : NSObject <NSCopying> {

	float _scaledRssi;
	NSString* _ssid;
	long long _rssi;

}

@property (nonatomic,copy) NSString * ssid;                 //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long rssi;                //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) float scaledRssi;              //@synthesize scaledRssi=_scaledRssi - In the implementation block
-(id)initWithSSID:(id)arg1 rssi:(long long)arg2 scaledRSSI:(float)arg3 ;
-(void)setSsid:(NSString *)arg1 ;
-(void)setRssi:(long long)arg1 ;
-(id)init;
-(long long)rssi;
-(NSString *)ssid;
-(id)description;
-(void)setScaledRssi:(float)arg1 ;
-(float)scaledRssi;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

