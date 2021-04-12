/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
*/


@protocol SBUIFlashlightObserver <NSObject>
@optional
-(void)flashlightOverheatedDidChange:(BOOL)arg1;

@required
-(void)flashlightAvailabilityDidChange:(BOOL)arg1;
-(void)flashlightLevelDidChange:(unsigned long long)arg1;

@end

