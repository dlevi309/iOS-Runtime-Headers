/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
*/

#import <BatteryCenterUI/BatteryCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@class BCBatteryDeviceController, NSString, BCUIAvocadoViewController;

@interface BCUIBatteryAvocadoViewController : UIViewController <BCBatteryDeviceObserving> {

	BCBatteryDeviceController* _batteryDeviceController;
	long long _avocadoSize;
	NSString* _debugIdentifier;
	BCUIAvocadoViewController* _avocadoViewController;

}

@property (setter=_setAvocadoViewController:,getter=_avocadoViewController,nonatomic,retain) BCUIAvocadoViewController * avocadoViewController;              //@synthesize avocadoViewController=_avocadoViewController - In the implementation block
@property (assign,nonatomic) long long avocadoSize;                                                                                                          //@synthesize avocadoSize=_avocadoSize - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                                                                                       //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)imageForIconInfo:(BCUIIconImageInfo)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)debugIdentifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(id)_avocadoViewController;
-(void)setAvocadoSize:(long long)arg1 ;
-(id)_synthesizedDebugIdentifier;
-(void)_configureAvocadoViewControllerIfNecessary;
-(long long)avocadoSize;
-(void)_setAvocadoViewController:(id)arg1 ;
@end

