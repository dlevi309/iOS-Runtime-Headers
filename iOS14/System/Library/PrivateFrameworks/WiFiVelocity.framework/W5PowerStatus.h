/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding> {

	int _batteryWarningLevel;
	unsigned _powerStateCaps;
	long long _powerSourceType;
	double _internalBatteryLevel;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (assign,nonatomic) long long powerSourceType;                //@synthesize powerSourceType=_powerSourceType - In the implementation block
@property (assign,nonatomic) int batteryWarningLevel;                  //@synthesize batteryWarningLevel=_batteryWarningLevel - In the implementation block
@property (assign,nonatomic) double internalBatteryLevel;              //@synthesize internalBatteryLevel=_internalBatteryLevel - In the implementation block
@property (assign,nonatomic) unsigned powerStateCaps;                  //@synthesize powerStateCaps=_powerStateCaps - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionary;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)batteryWarningLevel;
-(long long)powerSourceType;
-(unsigned)powerStateCaps;
-(double)internalBatteryLevel;
-(BOOL)isEqualToPowerStatus:(id)arg1 ;
-(void)setPowerSourceType:(long long)arg1 ;
-(void)setBatteryWarningLevel:(int)arg1 ;
-(void)setPowerStateCaps:(unsigned)arg1 ;
-(void)setInternalBatteryLevel:(double)arg1 ;
@end

