/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <WorkflowKit/WFAccessResource.h>

@class WFBluetoothSettingsClient, NSArray;

@interface WFListeningModeDeviceAccessResource : WFAccessResource {

	os_unfair_lock_s _supportedDevicesLock;
	WFBluetoothSettingsClient* _bluetoothClient;
	NSArray* _supportedDevices;
	/*^block*/id _availabilityCompletion;

}

@property (nonatomic,readonly) WFBluetoothSettingsClient * bluetoothClient;              //@synthesize bluetoothClient=_bluetoothClient - In the implementation block
@property (nonatomic,readonly) NSArray * supportedDevices;                               //@synthesize supportedDevices=_supportedDevices - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s supportedDevicesLock;                    //@synthesize supportedDevicesLock=_supportedDevicesLock - In the implementation block
@property (nonatomic,copy) id availabilityCompletion;                                    //@synthesize availabilityCompletion=_availabilityCompletion - In the implementation block
+(BOOL)isSingleton;
-(NSArray *)supportedDevices;
-(id)initWithDefinition:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)workflowLevelStatus;
-(id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)unavailableAccessResourceError;
-(id)localizedAccessResourceErrorString;
-(void)makeSettingsClientIfNecessary;
-(BOOL)supportedDevicesAreFetched;
-(WFBluetoothSettingsClient *)bluetoothClient;
-(os_unfair_lock_s)supportedDevicesLock;
-(id)availabilityCompletion;
-(void)setAvailabilityCompletion:(id)arg1 ;
@end

