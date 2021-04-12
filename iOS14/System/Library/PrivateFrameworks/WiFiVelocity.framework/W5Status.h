/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5WiFiStatus, W5AWDLStatus, W5BluetoothStatus, W5NetworkStatus, W5PowerStatus;

@interface W5Status : NSObject <NSCopying, NSSecureCoding> {

	W5WiFiStatus* _wifi;
	W5AWDLStatus* _awdl;
	W5BluetoothStatus* _bluetooth;
	W5NetworkStatus* _network;
	W5PowerStatus* _power;

}

@property (nonatomic,copy) W5WiFiStatus * wifi;                        //@synthesize wifi=_wifi - In the implementation block
@property (nonatomic,copy) W5AWDLStatus * awdl;                        //@synthesize awdl=_awdl - In the implementation block
@property (nonatomic,copy) W5BluetoothStatus * bluetooth;              //@synthesize bluetooth=_bluetooth - In the implementation block
@property (nonatomic,copy) W5NetworkStatus * network;                  //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) W5PowerStatus * power;                      //@synthesize power=_power - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBluetooth:(W5BluetoothStatus *)arg1 ;
-(W5NetworkStatus *)network;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(W5WiFiStatus *)wifi;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(id)description;
-(W5AWDLStatus *)awdl;
-(W5PowerStatus *)power;
-(void)setWifi:(W5WiFiStatus *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPower:(W5PowerStatus *)arg1 ;
-(W5BluetoothStatus *)bluetooth;
-(void)setAwdl:(W5AWDLStatus *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNetwork:(W5NetworkStatus *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

