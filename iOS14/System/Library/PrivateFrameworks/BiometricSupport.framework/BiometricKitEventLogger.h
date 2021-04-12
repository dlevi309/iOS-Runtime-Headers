/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)flushEvents;
-(id)init;
-(void)logSmartKeyboardStatus;
-(void)appendEventValue:(unsigned)arg1 isMetadata:(BOOL)arg2 ;
-(void)appendEvent:(id)arg1 ;
-(void)logDeviceMetadata;
-(void)logEventOrCode:(unsigned long long)arg1 ;
@end

