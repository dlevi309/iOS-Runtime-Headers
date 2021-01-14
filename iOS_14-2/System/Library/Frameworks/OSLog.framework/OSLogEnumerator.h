/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol OS_dispatch_semaphore;
@class OSLogEventStream, OSLogEntry, NSObject;

@interface OSLogEnumerator : NSEnumerator {

	OSLogEventStream* _stream;
	OSLogEntry* _next;
	BOOL _done;
	NSObject*<OS_dispatch_semaphore> _pushDone;
	NSObject*<OS_dispatch_semaphore> _handlerDone;

}
-(id)nextObject;
-(void)_handleInvalidation;
-(void)dealloc;
-(id)initWithEventStream:(id)arg1 options:(unsigned long long)arg2 position:(id)arg3 ;
-(void)_handleEventProxy:(id)arg1 ;
@end

