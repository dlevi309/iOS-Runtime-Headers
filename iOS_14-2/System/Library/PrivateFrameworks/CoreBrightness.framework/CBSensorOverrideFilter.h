/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBFilter.h>

@interface CBSensorOverrideFilter : CBFilter {

	SCD_Struct_CB13 _chromaticity;
	double _illuminance;
	int _orientation;

}

@property (assign) int orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(int)orientation;
-(void)dealloc;
-(void)setOrientation:(int)arg1 ;
@end

