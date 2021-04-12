/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface CBXpcConnection : NSObject {

	id<CBXpcConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableDictionary* _options;
	int _sessionType;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_xpc_object> _xpcConnection;
	BOOL _uiAppIsBackgrounded;

}
-(void)disconnect;
-(void)_checkIn;
-(void)setTargetQueue:(id)arg1 ;
-(void)_checkOut;
-(void)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)_applicationDidEnterBackgroundNotification;
-(void)_applicationWillEnterForegroundNotification;
-(void)_handleConnectionEvent:(id)arg1 ;
-(id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)_nameForMessage:(unsigned short)arg1 ;
-(void)_sendBarrier;
-(void)_handleFinalized;
-(void)_handleMsg:(id)arg1 ;
-(void)_handleReset;
-(void)_handleInvalid;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4 ;
@end

