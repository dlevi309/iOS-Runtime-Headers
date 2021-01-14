/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiLogCapture.framework/WiFiLogCapture
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface WiFiLogDumpTaker : NSObject {

	NSObject*<OS_dispatch_queue> event_queue;
	NSObject*<OS_xpc_object> xpc_connection;
	BOOL _didLastCaptureFallback;

}

@property (nonatomic,readonly) BOOL didLastCaptureFallback;              //@synthesize didLastCaptureFallback=_didLastCaptureFallback - In the implementation block
-(id)init;
-(void)handleConnection:(id)arg1 ;
-(id)XPCConnection:(const char*)arg1 ;
-(void)takeWiFiCoreCaptureDumpWithReason:(const char*)arg1 callback:(/*^block*/id)arg2 ;
-(void)takeWiFiDiagnosticsDumpWithPath:(const char*)arg1 reason:(const char*)arg2 callback:(/*^block*/id)arg3 ;
-(void)takeWiFiDiagnosticsDumpWithPath:(const char*)arg1 reason:(const char*)arg2 shouldTryFallback:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(void)takeWiFiDiagnosticsDumpWithPathAndReason:(/*^block*/id)arg1 :(const char*)arg2 :(const char*)arg3 ;
-(BOOL)didLastCaptureFallback;
@end

