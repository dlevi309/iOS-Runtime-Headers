/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(id)filterEvent:(id)arg1 ;
@end

