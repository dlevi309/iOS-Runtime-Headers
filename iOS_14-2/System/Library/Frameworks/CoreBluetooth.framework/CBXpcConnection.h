/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@protocol OS_dispatch_queue, OS_xpc_object, CBXpcConnectionDelegate;
@class NSObject, NSMutableDictionary;

@interface CBXpcConnection : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableDictionary* _options;
	int _sessionType;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_xpc_object> _xpcConnection;
	BOOL _uiAppIsBackgrounded;
	id<CBXpcConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CBXpcConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)_checkOut;
-(void)disconnect;
-(void)setTargetQueue:(id)arg1 ;
-(id<CBXpcConnectionDelegate>)delegate;
-(void)_checkIn;
-(void)_sendBarrier;
-(void)_handleInvalid;
-(void)_applicationDidEnterBackgroundNotification;
-(id)_nameForMessage:(unsigned short)arg1 ;
-(void)setDelegate:(id<CBXpcConnectionDelegate>)arg1 ;
-(void)_handleConnectionEvent:(id)arg1 ;
-(void)_handleReset;
-(id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4 ;
-(void)_handleFinalized;
-(void)_handleMsg:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification;
@end

