/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteHID.framework/RemoteHID
*/

#import <RemoteHID/RemoteHID-Structs.h>
#import <RemoteHID/HIDRemoteDeviceServer.h>

@protocol OS_dispatch_queue;
@class NSObject, TSClockManager, TSUserFilteredClock, NSMutableDictionary;

@interface HIDRemoteDeviceAACPServer : HIDRemoteDeviceServer {

	BTSessionImplRef _session;
	BTAccessoryManagerImplRef _manager;
	NSObject*<OS_dispatch_queue> _queue;
	TSClockManager* _coreTimeSyncManager;
	TSUserFilteredClock* _timeSyncClock;
	NSMutableDictionary* _endpointTimeSyncEnabled;

}
-(id)initWithQueue:(id)arg1 ;
-(void)activate;
-(id)description;
-(void)cancel;
-(void)btSessionCreate;
-(void)removeBTDevice:(BTDeviceImplRef)arg1 ;
-(void)btServiceEventHandler:(BTDeviceImplRef)arg1 services:(unsigned)arg2 eventType:(int)arg3 event:(unsigned)arg4 result:(int)arg5 ;
-(void)btSessionInit:(BTSessionImplRef)arg1 ;
-(int)sendMessageBTDevice:(BTDeviceImplRef)arg1 data:(char*)arg2 size:(unsigned long long)arg3 ;
-(void)addBTDevice:(BTDeviceImplRef)arg1 ;
-(BOOL)createRemoteDevice:(id)arg1 deviceID:(unsigned long long)arg2 property:(id)arg3 ;
-(void)btSessionEventHandler:(BTSessionImplRef)arg1 event:(int)arg2 result:(int)arg3 ;
-(void)btDeviceMessageHandler:(BTDeviceImplRef)arg1 type:(int)arg2 data:(char*)arg3 size:(unsigned long long)arg4 ;
-(void)btAccessoryEventHandler:(BTDeviceImplRef)arg1 event:(int)arg2 state:(int)arg3 ;
-(int)remoteDeviceSetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4 ;
-(int)remoteDeviceGetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4 ;
-(unsigned long long)syncRemoteTimestamp:(unsigned long long)arg1 forEndpoint:(id)arg2 ;
@end

