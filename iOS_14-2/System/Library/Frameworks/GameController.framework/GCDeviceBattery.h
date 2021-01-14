/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCDeviceBattery : NSObject <NSSecureCoding> {

	float _batteryLevel;
	long long _batteryState;

}

@property (assign,nonatomic) float batteryLevel;                  //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) long long batteryState;              //@synthesize batteryState=_batteryState - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)batteryLevel;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)batteryState;
-(void)_setBatteryState:(long long)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(void)setBatteryState:(long long)arg1 ;
-(void)setBatteryLevel:(float)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLevel:(float)arg1 batteryState:(long long)arg2 ;
-(id)initWithLevel:(unsigned char)arg1 isCharging:(BOOL)arg2 ;
@end

