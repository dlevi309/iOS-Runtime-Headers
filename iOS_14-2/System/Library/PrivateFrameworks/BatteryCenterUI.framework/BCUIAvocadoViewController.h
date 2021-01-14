/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
*/

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, NSArray, NSString;

@interface BCUIAvocadoViewController : UIViewController {

	BOOL _batteryDeviceViewsValid;
	NSMutableArray* _batteryDeviceViews;
	NSArray* _batteryDevices;
	NSString* _debugIdentifier;

}

@property (getter=_batteryDeviceViews,nonatomic,copy,readonly) NSMutableArray * batteryDeviceViews; 
@property (getter=_maximumNumberOfBatteryDeviceViews,nonatomic,readonly) unsigned long long maximumNumberOfBatteryDeviceViews; 
@property (getter=_includeEmptyDevices,nonatomic,readonly) BOOL includeEmptyDevices; 
@property (nonatomic,copy) NSArray * batteryDevices;                                                                                        //@synthesize batteryDevices=_batteryDevices - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                                                                      //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
+(void)initialize;
+(id)avocadoViewControllerForSize:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(NSString *)debugIdentifier;
-(BOOL)_canShowWhileLocked;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(NSArray *)batteryDevices;
-(id)_batteryDeviceViews;
-(void)_configureBatteryDeviceView:(id)arg1 withBatteryDevice:(id)arg2 transitionCoordinator:(id)arg3 ;
-(unsigned long long)_maximumNumberOfBatteryDeviceViews;
-(BOOL)_includeEmptyDevices;
-(id)_newBatteryDeviceView;
-(id)_synthesizedDebugIdentifier;
-(void)invalidateBatteryDeviceState;
-(void)_validateBatteryDeviceViewsIfNecessary;
-(void)setBatteryDevices:(NSArray *)arg1 ;
@end

