/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
*/


@protocol OS_xpc_object;
@class NSObject;

@interface RemoteDeviceManager : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(id)init;
-(void)disconnectDevice:(id)arg1 ;
-(void)dealloc;
-(void)sendMessage:(const char*)arg1 args:(id)arg2 ;
@end

