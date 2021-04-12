/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <WiFiPolicy/WFLoggerBase.h>

@protocol OS_dispatch_queue;
@class NSDateFormatter, NSObject;

@interface WFLoggerCircularBuffer : WFLoggerBase {

	char* _wiFiLoggingLogBufferRef;
	long long _wiFiLoggingLogBufferIndex;
	long long _wiFiLoggingLogBufferMaxSize;
	unsigned _dumpId;
	NSDateFormatter* _tsFormatter;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(void)dump;
-(id)init;
-(void)dealloc;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char*)arg3 valist:(char*)arg4 ;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(CFStringRef)arg3 ;
@end

