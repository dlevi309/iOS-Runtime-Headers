/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
*/


@protocol OS_dispatch_queue;
#import <APTransport/APTransport-Structs.h>
@class NSObject;

@interface APDBrowserBluetoothHelper : NSObject {

	void* _eventHandlerContext;
	/*function pointer*/void* _eventHandlerFunc;
	OpaqueAPDBluetoothHelperRef _helperRef;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	BOOL _isInvalidated;
	BOOL _bluetoothPowerChangedListeningStarted;
	BOOL _isBluetoothPoweredOn;

}

@property (assign,nonatomic) void* eventHandlerContext;                               //@synthesize eventHandlerContext=_eventHandlerContext - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* eventHandlerFunc;              //@synthesize eventHandlerFunc=_eventHandlerFunc - In the implementation block
@property (assign,nonatomic) OpaqueAPDBluetoothHelperRef helperRef;                   //@synthesize helperRef=_helperRef - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventQueue;               //@synthesize eventQueue=_eventQueue - In the implementation block
@property (assign,nonatomic) BOOL isInvalidated;                                      //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (assign,nonatomic) BOOL bluetoothPowerChangedListeningStarted;              //@synthesize bluetoothPowerChangedListeningStarted=_bluetoothPowerChangedListeningStarted - In the implementation block
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(int)setPowered:(BOOL)arg1 ;
-(BOOL)isInvalidated;
-(id)init;
-(void)setEventHandlerContext:(void*)arg1 ;
-(void)setIsInvalidated:(BOOL)arg1 ;
-(void)setEventHandlerFunc:(/*function pointer*/void*)arg1 ;
-(void*)eventHandlerContext;
-(int)dispatchEvent:(unsigned)arg1 withEventInfo:(id)arg2 ;
-(int)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(/*function pointer*/void*)eventHandlerFunc;
-(int)ensureBluetoothPowerChangedListenerStopped;
-(void)setHelperRef:(OpaqueAPDBluetoothHelperRef)arg1 ;
-(int)ensureBluetoothPowerEventMonitorStarted;
-(id)getEventString:(unsigned)arg1 ;
-(OpaqueAPDBluetoothHelperRef)helperRef;
-(BOOL)bluetoothPowerChangedListeningStarted;
-(int)getBluetoothPowerOn:(BOOL*)arg1 ;
-(void)setBluetoothPowerChangedListeningStarted:(BOOL)arg1 ;
-(int)setEventHandler:(/*function pointer*/void*)arg1 context:(void*)arg2 helperRef:(OpaqueAPDBluetoothHelperRef)arg3 ;
-(int)startListeningToEvent:(unsigned)arg1 ;
-(int)stopListeningToEvent:(unsigned)arg1 ;
-(void)handleBluetoothChangedNotificationInternal:(id)arg1 ;
-(int)queryBluetoothPower:(BOOL*)arg1 ;
-(int)setBluetoothPower:(BOOL)arg1 ;
@end

