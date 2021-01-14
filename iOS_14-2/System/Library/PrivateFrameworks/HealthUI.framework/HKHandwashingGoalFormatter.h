/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class HKDisplayType, HKUnitPreferenceController, NSString;

@interface HKHandwashingGoalFormatter : NSObject <HKNumberFormatter> {

	HKDisplayType* _displayType;
	HKUnitPreferenceController* _unitPreferenceController;

}

@property (nonatomic,retain) HKDisplayType * displayType;                                        //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitPreferenceController;              //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(BOOL)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(HKUnitPreferenceController *)unitPreferenceController;
-(void)setUnitPreferenceController:(HKUnitPreferenceController *)arg1 ;
-(id)initWithDisplayType:(id)arg1 unitPreferenceController:(id)arg2 ;
@end

