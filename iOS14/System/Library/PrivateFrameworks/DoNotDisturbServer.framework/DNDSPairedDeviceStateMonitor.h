/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(DNDSPairedDevice *)pairedDevice;
-(id<DNDSPairedDeviceStateMonitorDelegate>)delegate;
-(NSString *)sysdiagnoseDataIdentifier;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(void)setDelegate:(id<DNDSPairedDeviceStateMonitorDelegate>)arg1 ;
-(void)setPairedDevice:(DNDSPairedDevice *)arg1 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(id)initWithIDSService:(id)arg1 ;
-(void)resume;
-(void)dealloc;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(void)_queue_updatePairedState;
-(id)_getCurrentPairedDevice;
-(void)_pairedDeviceStateChanged:(id)arg1 ;
@end

