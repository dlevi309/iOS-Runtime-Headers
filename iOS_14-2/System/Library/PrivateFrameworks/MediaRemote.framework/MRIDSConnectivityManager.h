/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, IDSDevice, MRDeviceInfo, NSMutableDictionary, NSObject, NSString;

@interface MRIDSConnectivityManager : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	IDSDevice* _device;
	MRDeviceInfo* _deviceInfo;
	NSMutableDictionary* _messageHandlers;
	NSMutableDictionary* _destinationMessageHandlers;
	BOOL _initialStateLoaded;
	NSObject*<OS_dispatch_queue> _idsQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,retain) IDSDevice * device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(BOOL)isConnected;
-(MRDeviceInfo *)deviceInfo;
-(id)init;
-(void)resetConnection;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(IDSDevice *)device;
-(id)name;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)setMessageHandler:(/*^block*/id)arg1 forType:(long long)arg2 destination:(id)arg3 ;
-(void)removeMessageHandlerForType:(long long)arg1 destination:(id)arg2 ;
-(BOOL)sendMessasge:(id)arg1 type:(long long)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5 ;
-(void)setDevice:(IDSDevice *)arg1 ;
-(id)deviceDebugName;
-(void)handleResetConnectionRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_maybeDeviceConnectionStatusChanged;
-(void)setMessageHandler:(/*^block*/id)arg1 forType:(long long)arg2 ;
-(void)removeMessageHandlerForType:(long long)arg1 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
@end

