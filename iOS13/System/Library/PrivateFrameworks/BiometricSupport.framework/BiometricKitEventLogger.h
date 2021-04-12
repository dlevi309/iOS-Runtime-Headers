/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, BKEvent;

@interface BiometricKitEventLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	unsigned _eventList[200];
	int _eventListLength;
	BOOL _terminalFlushPending;
	BOOL _startEventFound;
	BKEvent* _lastSmartKeyboardEvent;

}
+(id)logger;
-(id)init;
-(void)flushEvents;
-(void)logEventOrCode:(unsigned long long)arg1 ;
-(void)appendEvent:(id)arg1 ;
-(void)logDeviceMetadata;
-(void)appendEventValue:(unsigned)arg1 isMetadata:(BOOL)arg2 ;
-(void)logSmartKeyboardStatus;
@end

