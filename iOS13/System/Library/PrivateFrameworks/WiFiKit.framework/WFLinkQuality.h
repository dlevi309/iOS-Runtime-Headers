/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(float)scaledRssi;
-(id)initWithSSID:(id)arg1 rssi:(long long)arg2 scaledRSSI:(float)arg3 ;
-(void)setScaledRssi:(float)arg1 ;
@end

