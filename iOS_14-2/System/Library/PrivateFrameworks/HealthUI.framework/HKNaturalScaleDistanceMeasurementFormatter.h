/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSString;

@interface HKNaturalScaleDistanceMeasurementFormatter : NSObject <HKNumberFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(long long)_precisionWithDisplayType:(id)arg1 unit:(id)arg2 andNumber:(double)arg3 ;
-(void)adjustedFormatInformationForUnit:(id)arg1 number:(id)arg2 displayType:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

