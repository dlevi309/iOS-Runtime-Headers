/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_tcp_listener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableArray, NSObject;

@interface NSNetServicesInternal : NSObject {

	NSMutableArray* _monitors;
	NSObject*<OS_tcp_listener> _listener;
	CFRunLoopRef _scheduledRunLoop;
	CFStringRef _scheduledMode;

}

@property (retain) NSMutableArray * monitors;              //@synthesize monitors=_monitors - In the implementation block
-(void)dealloc;
-(id)listener;
-(void)setListener:(id)arg1 ;
-(void)copyScheduledRunLoop:(_CFRunLoop*)arg1 andMode:(const _CFString*)arg2 ;
-(void)setScheduledRunLoop:(CFRunLoopRef)arg1 andMode:(CFStringRef)arg2 ;
-(NSMutableArray *)monitors;
-(void)setMonitors:(NSMutableArray *)arg1 ;
@end

