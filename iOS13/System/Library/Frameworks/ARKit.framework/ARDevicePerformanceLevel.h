/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ARDevicePerformanceLevel : NSObject <NSCopying> {

	unsigned long long _thermalLevel;
	unsigned long long _batteryLevel;

}

@property (nonatomic,readonly) unsigned long long thermalLevel;              //@synthesize thermalLevel=_thermalLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long batteryLevel;              //@synthesize batteryLevel=_batteryLevel - In the implementation block
+(unsigned long long)ARDevicethermalStateFromNSProcessInfoThermalState:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)batteryLevel;
-(unsigned long long)thermalLevel;
-(id)initWithNSProcessInfoThermalState:(long long)arg1 initWithBatteryLevel:(unsigned long long)arg2 ;
-(id)initWithThermalLevel:(unsigned long long)arg1 initWithBatteryLevel:(unsigned long long)arg2 ;
@end

