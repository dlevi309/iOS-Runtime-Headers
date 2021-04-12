/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class BluetoothManager, NSMutableDictionary, NSString;

@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	BluetoothManager* _manager;
	/*^block*/id _availabilityCompletion;
	NSMutableDictionary* _observeBlocksPerDeviceType;

}

@property (nonatomic,readonly) BluetoothManager * manager;                                    //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) id availabilityCompletion;                                         //@synthesize availabilityCompletion=_availabilityCompletion - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * observeBlocksPerDeviceType;              //@synthesize observeBlocksPerDeviceType=_observeBlocksPerDeviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerForNotifications;
-(BluetoothManager *)manager;
-(void)dealloc;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)availabilityCompletion;
-(void)setAvailabilityCompletion:(id)arg1 ;
-(id)initWithBluetoothManager:(id)arg1 ;
-(void)waitForAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPairedDevicesMatchingType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)observePairedDevicesMatchingType:(unsigned long long)arg1 update:(/*^block*/id)arg2 ;
-(void)devicesChanged:(id)arg1 ;
-(void)availabilityChanged:(id)arg1 ;
-(NSMutableDictionary *)observeBlocksPerDeviceType;
@end

