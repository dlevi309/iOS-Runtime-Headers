/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
*/


@protocol OS_xpc_object;
@class NSObject;

@interface RemoteDeviceManager : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(id)init;
-(void)dealloc;
-(void)disconnectDevice:(id)arg1 ;
-(void)sendMessage:(const char*)arg1 args:(id)arg2 ;
@end

