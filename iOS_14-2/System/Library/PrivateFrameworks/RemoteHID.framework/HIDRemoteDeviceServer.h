/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteHID.framework/RemoteHID
*/


@protocol OS_dispatch_queue;
#import <RemoteHID/RemoteHID-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface HIDRemoteDeviceServer : NSObject {

	NSMutableArray* _prevDeviceLog;
	unsigned long long _stateHandler;
	NSMutableDictionary* _devices;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSMutableDictionary * devices;                   //@synthesize devices=_devices - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(NSMutableDictionary *)devices;
-(void)activate;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(id)copyState;
-(void)disconnectAll;
-(BOOL)connectEndpoint:(id)arg1 ;
-(void)disconnectEndpoint:(id)arg1 ;
-(void)endpointMessageHandler:(id)arg1 data:(char*)arg2 size:(unsigned long long)arg3 ;
-(BOOL)createRemoteDevice:(id)arg1 deviceID:(unsigned long long)arg2 property:(id)arg3 ;
-(int)remoteDeviceSetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4 ;
-(int)remoteDeviceGetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4 ;
-(unsigned long long)syncRemoteTimestamp:(unsigned long long)arg1 forEndpoint:(id)arg2 ;
-(BOOL)remoteDeviceTimestampedReportHandler:(id)arg1 device:(id)arg2 packet:(SCD_Struct_HI5*)arg3 ;
-(BOOL)remoteDeviceReportHandler:(id)arg1 packet:(SCD_Struct_HI6*)arg2 ;
-(void)endpointPacketHandler:(id)arg1 packet:(SCD_Struct_HI4*)arg2 ;
-(void)remoteDeviceConnectHandler:(id)arg1 packet:(SCD_Struct_HI7*)arg2 ;
-(void)removeRemoteDevice:(id)arg1 deviceID:(unsigned long long)arg2 ;
-(BOOL)remoteDeviceReportHandler:(id)arg1 header:(SCD_Struct_HI4*)arg2 ;
-(BOOL)remoteDeviceSetReportHandler:(id)arg1 packet:(SCD_Struct_HI6*)arg2 ;
-(BOOL)remoteDeviceGetReportHandler:(id)arg1 packet:(SCD_Struct_HI6*)arg2 ;
-(os_state_data_s*)stateHandler:(os_state_hints_s*)arg1 ;
@end

