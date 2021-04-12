/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
*/


@protocol SBUIFlashlightObserver <NSObject>
@optional
-(void)flashlightOverheatedDidChange:(BOOL)arg1;

@required
-(void)flashlightLevelDidChange:(unsigned long long)arg1;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1;

@end

