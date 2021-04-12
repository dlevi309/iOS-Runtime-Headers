/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class BluetoothManager, NSString;

@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	BluetoothManager* _manager;
	/*^block*/id _availabilityCompletion;

}

@property (nonatomic,readonly) BluetoothManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) id availabilityCompletion;                   //@synthesize availabilityCompletion=_availabilityCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BluetoothManager *)manager;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)availabilityCompletion;
-(void)setAvailabilityCompletion:(id)arg1 ;
-(id)initWithBluetoothManager:(id)arg1 ;
-(void)waitForAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)availabilityChanged:(id)arg1 ;
-(void)registerForAvailabilityNotifications;
-(void)unregisterForAvailabilityNotifications;
@end

