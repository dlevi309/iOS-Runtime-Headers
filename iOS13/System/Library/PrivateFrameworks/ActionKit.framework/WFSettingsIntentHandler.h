/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFSetAirplaneModeIntentHandling.h>
#import <libobjc.A.dylib/WFSetWiFiIntentHandling.h>
#import <libobjc.A.dylib/WFSetBluetoothIntentHandling.h>
#import <libobjc.A.dylib/WFSetCellularDataIntentHandling.h>
#import <libobjc.A.dylib/WFSetLowPowerModeIntentHandling.h>
#import <libobjc.A.dylib/WFSetBrightnessIntentHandling.h>
#import <libobjc.A.dylib/WFSetFlashlightIntentHandling.h>
#import <libobjc.A.dylib/WFSetAppearanceIntentHandling.h>

@class NSString;

@interface WFSettingsIntentHandler : NSObject <WFSetAirplaneModeIntentHandling, WFSetWiFiIntentHandling, WFSetBluetoothIntentHandling, WFSetCellularDataIntentHandling, WFSetLowPowerModeIntentHandling, WFSetBrightnessIntentHandling, WFSetFlashlightIntentHandling, WFSetAppearanceIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSetAirplaneMode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveOperationForSetAirplaneMode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStateForSetAirplaneMode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSetWiFi:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveOperationForSetWiFi:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStateForSetWiFi:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSetBluetooth:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveOperationForSetBluetooth:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStateForSetBluetooth:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSetCellularData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveOperationForSetCellularData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStateForSetCellularData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSetLowPowerMode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveOperationForSetLowPowerMode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStateForSetLowPowerMode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSetBrightness:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveValueForSetBrightness:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSetFlashlight:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveOperationForSetFlashlight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStateForSetFlashlight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveValueForSetFlashlight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSetAppearance:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveStyleForSetAppearance:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)createSettingsClientForIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performSettingIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

