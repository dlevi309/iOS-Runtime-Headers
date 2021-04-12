/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1 ;
-(void)flashlightLevelDidChange:(unsigned long long)arg1 ;
-(void)_updateGlyphForFlashlightLevel:(unsigned long long)arg1 ;
@end

