/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@interface CLKSensitiveUIMonitor : NSObject
+(id)sharedMonitor;
-(void)removeSensitiveUIObserver:(id)arg1 ;
-(void)addSensitiveUIObserver:(id)arg1 ;
-(BOOL)_isVendorRelease;
-(BOOL)shouldHideForSensitivity:(long long)arg1 ;
-(BOOL)considersUISensitivitySensitive:(long long)arg1 ;
-(BOOL)hideSensitiveUISwitchEnabled;
@end

