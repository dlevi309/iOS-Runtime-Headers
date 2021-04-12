/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFColorProfile.h>

@class NSString;

@interface HFTemperatureColorProfile : NSObject <HFColorProfile> {

	float _minimumTemperature;
	float _maximumTemperature;

}

@property (nonatomic,readonly) float minimumTemperature;              //@synthesize minimumTemperature=_minimumTemperature - In the implementation block
@property (nonatomic,readonly) float maximumTemperature;              //@synthesize maximumTemperature=_maximumTemperature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)adjustedColorPrimitiveForPrimitive:(id)arg1 ;
-(float)adjustedTemperatureForTemperature:(float)arg1 ;
-(id)initWithMinimumTemperature:(float)arg1 maximumTemperature:(float)arg2 ;
-(float)minimumTemperature;
-(float)maximumTemperature;
@end

