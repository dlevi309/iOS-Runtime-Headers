/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface EKReadWriteLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithName:(const char*)arg1 ;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
@end

