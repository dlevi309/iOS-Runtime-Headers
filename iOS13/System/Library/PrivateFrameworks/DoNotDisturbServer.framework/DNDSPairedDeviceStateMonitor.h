/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>

@protocol OS_dispatch_queue, DNDSPairedDeviceStateMonitorDelegate;
@class NSObject, IDSService, DNDSPairedDevice, NSString;

@interface DNDSPairedDeviceStateMonitor : NSObject <IDSServiceDelegate, DNDSSysdiagnoseDataProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	IDSService* _idsService;
	int _pairedDeviceDidChangeNotificationToken;
	DNDSPairedDevice* _pairedDevice;
	id<DNDSPairedDeviceStateMonitorDelegate> _delegate;

}

@property (copy) DNDSPairedDevice * pairedDevice;                                                   //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSPairedDeviceStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
-(void)dealloc;
-(id<DNDSPairedDeviceStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<DNDSPairedDeviceStateMonitorDelegate>)arg1 ;
-(void)resume;
-(void)setPairedDevice:(DNDSPairedDevice *)arg1 ;
-(DNDSPairedDevice *)pairedDevice;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(id)initWithIDSService:(id)arg1 ;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(NSString *)sysdiagnoseDataIdentifier;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(void)_queue_updatePairedState;
-(id)_getCurrentPairedDevice;
-(void)_pairedDeviceStateChanged:(id)arg1 ;
@end

