/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface EKReadWriteLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithName:(const char*)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
@end

