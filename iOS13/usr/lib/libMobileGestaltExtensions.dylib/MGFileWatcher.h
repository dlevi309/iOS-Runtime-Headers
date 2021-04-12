/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
@class NSString, NSObject;

@interface MGFileWatcher : NSObject {

	NSString* _path;
	unsigned long long _inode;
	timespec _mtime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _src;
	NSObject*<OS_dispatch_source> _parentSrc;
	/*^block*/id _block;

}
-(void)dealloc;
-(void)cancel;
-(BOOL)updateWatcher;
-(id)initWithPath:(id)arg1 block:(/*^block*/id)arg2 ;
@end

