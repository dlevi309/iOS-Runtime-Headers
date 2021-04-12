/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSString;

@interface HKNaturalScaleDistanceMeasurementFormatter : NSObject <HKNumberFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(BOOL)returnsUnitWithValueForDisplay;
-(long long)_precisionWithDisplayType:(id)arg1 unit:(id)arg2 andNumber:(double)arg3 ;
-(void)adjustedFormatInformationForUnit:(id)arg1 number:(id)arg2 displayType:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

