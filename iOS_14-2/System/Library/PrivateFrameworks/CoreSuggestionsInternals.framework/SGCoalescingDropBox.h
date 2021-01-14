/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSObject;

@interface SGCoalescingDropBox : NSObject {

	const char* _name;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _makeEmptyBox;
	/*^block*/id _handler;
	id _box;
	opaque_pthread_mutex_t _handlerLock;
	opaque_pthread_mutex_t _boxLock;
	int _outstanding;
	opaque_pthread_cond_t _cond;
	NSObject*<OS_os_transaction> _transaction;

}
-(id)init;
-(void)updateBox:(/*^block*/id)arg1 delay:(double)arg2 ;
-(id)initWithName:(const char*)arg1 boxMaker:(/*^block*/id)arg2 handler:(/*^block*/id)arg3 qos:(unsigned)arg4 ;
-(void)wait;
-(void)updateBox:(/*^block*/id)arg1 ;
-(void)typeCheckingSink:(id)arg1 ;
-(void)dealloc;
@end

