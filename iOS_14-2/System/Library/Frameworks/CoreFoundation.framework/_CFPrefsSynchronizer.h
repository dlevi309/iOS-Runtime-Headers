/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsSynchronizer : NSObject {

	NSObject*<OS_dispatch_source> _synchTimer;
	NSObject*<OS_dispatch_queue> _synchQueue;
	CFSetRef _dirtySources;
	opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
	BOOL _active;

}
-(id)init;
@end

