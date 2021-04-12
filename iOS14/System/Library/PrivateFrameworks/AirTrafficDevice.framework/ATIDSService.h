/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <ATFoundation/ATMessageLinkListener.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/ATSocketDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, IDSService, ATIDSConnectionInfo, NSMutableArray, NSString;

@interface ATIDSService : ATMessageLinkListener <IDSServiceDelegate, ATSocketDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	IDSService* _service;
	ATIDSConnectionInfo* _connectionInfo;
	NSMutableArray* _listeners;
	BOOL _running;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)openSocketPriorityFromATPendingChangePriority:(int)arg1 ;
-(void)addListener:(id)arg1 ;
-(id)pairedDevice;
-(void)_scheduleReconnect;
-(void)_connect;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)deviceForId:(id)arg1 ;
-(void)setPreferWifi:(BOOL)arg1 ;
-(void)_sendWakeup;
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long long)arg3 ;
-(BOOL)start;
-(id)initWithServiceName:(id)arg1 ;
-(void)stop;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)socketDidClose:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)requestConnectionToPairedDeviceWithPriority:(long long)arg1 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)_cancelPendingConnectionRequests;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(id)_messageTypeToString:(int)arg1 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(BOOL)hasPairedDevice;
-(void)_scheduleConnectWithPriority:(long long)arg1 ;
@end

