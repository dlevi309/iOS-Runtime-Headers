/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
*/

#import <libobjc.A.dylib/BCBatteryDeviceObservable.h>

@class NSArray, NSString;

@interface BCBatteryDeviceController : NSObject <BCBatteryDeviceObservable>

@property (nonatomic,copy,readonly) NSArray * connectedDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedPowerSourceController;
-(id)init;
-(NSArray *)connectedDevices;
-(void)addBatteryDeviceObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeBatteryDeviceObserver:(id)arg1 ;
-(void)connectedDevicesWithResult:(/*^block*/id)arg1 ;
@end

