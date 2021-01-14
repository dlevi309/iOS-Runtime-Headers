/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
*/

#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>
#import <libobjc.A.dylib/SBUIFlashlightObserver.h>

@class NSString;

@interface CCUIFlashlightBackgroundViewController : CCUISliderModuleBackgroundViewController <SBUIFlashlightObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flashlightLevelDidChange:(unsigned long long)arg1 ;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateGlyphForFlashlightLevel:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

