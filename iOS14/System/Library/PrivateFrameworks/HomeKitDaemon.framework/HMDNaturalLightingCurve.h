/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface HMDNaturalLightingCurve : HMFObject <HMFLogging, NSSecureCoding, NSCopying> {

	unsigned long long _version;
	NSArray* _transitionPoints;
	long long _minimumBrightness;
	long long _maximumBrightness;
	long long _minimumColorTemperature;
	long long _maximumColorTemperature;
	unsigned long long _colorTemperatureNotifyValueChangeThreshold;
	unsigned long long _colorTemperatureNotifyIntervalThresholdInMilliseconds;
	unsigned long long _colorTemperatureUpdateIntervalInMilliseconds;

}

@property (assign) unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds;              //@synthesize colorTemperatureNotifyIntervalThresholdInMilliseconds=_colorTemperatureNotifyIntervalThresholdInMilliseconds - In the implementation block
@property (assign) unsigned long long colorTemperatureUpdateIntervalInMilliseconds;                       //@synthesize colorTemperatureUpdateIntervalInMilliseconds=_colorTemperatureUpdateIntervalInMilliseconds - In the implementation block
@property (assign) unsigned long long colorTemperatureNotifyValueChangeThreshold;                         //@synthesize colorTemperatureNotifyValueChangeThreshold=_colorTemperatureNotifyValueChangeThreshold - In the implementation block
@property (readonly) unsigned long long version;                                                          //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSArray * transitionPoints;                                                     //@synthesize transitionPoints=_transitionPoints - In the implementation block
@property (readonly) long long minimumBrightness;                                                         //@synthesize minimumBrightness=_minimumBrightness - In the implementation block
@property (readonly) long long maximumBrightness;                                                         //@synthesize maximumBrightness=_maximumBrightness - In the implementation block
@property (readonly) long long minimumColorTemperature;                                                   //@synthesize minimumColorTemperature=_minimumColorTemperature - In the implementation block
@property (readonly) long long maximumColorTemperature;                                                   //@synthesize maximumColorTemperature=_maximumColorTemperature - In the implementation block
@property (readonly) unsigned long long checksum; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(long long)colorTemperatureMiredsFromKelvins:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)maximumBrightness;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)checksum;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)transitionPoints;
-(long long)minimumBrightness;
-(id)initWithVersion:(unsigned long long)arg1 transitionPoints:(id)arg2 minimumBrightness:(long long)arg3 maximumBrightness:(long long)arg4 minimumColorTemperature:(long long)arg5 maximumColorTemperature:(long long)arg6 ;
-(unsigned long long)colorTemperatureNotifyIntervalThresholdInMilliseconds;
-(void)setColorTemperatureNotifyIntervalThresholdInMilliseconds:(unsigned long long)arg1 ;
-(unsigned long long)colorTemperatureNotifyValueChangeThreshold;
-(void)setColorTemperatureNotifyValueChangeThreshold:(unsigned long long)arg1 ;
-(unsigned long long)colorTemperatureUpdateIntervalInMilliseconds;
-(void)setColorTemperatureUpdateIntervalInMilliseconds:(unsigned long long)arg1 ;
-(long long)minimumColorTemperature;
-(long long)maximumColorTemperature;
-(id)transitionPointsWithmillisecondsElapsedSinceStartOfDay:(unsigned long long)arg1 ;
-(id)initWithCurve:(id)arg1 minimumColorTemperature:(long long)arg2 maximumColorTemperature:(long long)arg3 ;
-(id)colorTemperatureForBrightness:(long long)arg1 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg2 ;
@end

