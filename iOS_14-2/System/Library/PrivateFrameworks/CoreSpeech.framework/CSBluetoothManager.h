/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject, NSHashTable, NSArray;

@interface CSBluetoothManager : NSObject {

	BOOL _isAttachingBluetoothSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	BTSessionImplRef _bluetoothSession;
	BTLocalDeviceImplRef _localDevice;
	NSArray* _pairedDeviceAddresses;
	NSArray* _connectedDeviceAddresses;
	NSObject*<OS_dispatch_group> _bluetoothSessionSetupGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BTSessionImplRef bluetoothSession;                                    //@synthesize bluetoothSession=_bluetoothSession - In the implementation block
@property (assign,nonatomic) BOOL isAttachingBluetoothSession;                                     //@synthesize isAttachingBluetoothSession=_isAttachingBluetoothSession - In the implementation block
@property (assign,nonatomic) BTLocalDeviceImplRef localDevice;                                     //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,retain) NSArray * pairedDeviceAddresses;                                      //@synthesize pairedDeviceAddresses=_pairedDeviceAddresses - In the implementation block
@property (nonatomic,retain) NSArray * connectedDeviceAddresses;                                   //@synthesize connectedDeviceAddresses=_connectedDeviceAddresses - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> bluetoothSessionSetupGroup;              //@synthesize bluetoothSessionSetupGroup=_bluetoothSessionSetupGroup - In the implementation block
+(id)sharedInstance;
-(BTLocalDeviceImplRef)localDevice;
-(void)_detachBluetoothSession;
-(void)_sessionTerminated:(BTSessionImplRef)arg1 ;
-(NSObject*<OS_dispatch_group>)bluetoothSessionSetupGroup;
-(NSHashTable *)observers;
-(void)setBluetoothSessionSetupGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)init;
-(void)_attachBluetoothSession;
-(void)_sessionAttached:(BTSessionImplRef)arg1 result:(int)arg2 ;
-(void)device:(BTDeviceImplRef)arg1 serviceMask:(unsigned)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned)arg4 result:(int)arg5 ;
-(void)setConnectedDeviceAddresses:(NSArray *)arg1 ;
-(void)getWirelessSplitterInfoWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)connectedDeviceAddresses;
-(id)_getWirelessSplitterInfoFromLocalDevice:(BTLocalDeviceImplRef)arg1 ;
-(NSArray *)pairedDeviceAddresses;
-(void)getBTLocalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BTSessionImplRef)bluetoothSession;
-(void)_setUpLocalDevice;
-(void)setLocalDevice:(BTLocalDeviceImplRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setBluetoothSession:(BTSessionImplRef)arg1 ;
-(BOOL)isAttachingBluetoothSession;
-(void)_tearDownLocalDevice;
-(void)setIsAttachingBluetoothSession:(BOOL)arg1 ;
-(void)_sessionDetached:(BTSessionImplRef)arg1 ;
-(void)setPairedDeviceAddresses:(NSArray *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)localDevice:(BTLocalDeviceImplRef)arg1 event:(int)arg2 result:(int)arg3 ;
@end

