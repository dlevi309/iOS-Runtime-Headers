/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSInternalQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	void* _contextKey;

}
+(id)sharedInstance;
-(id)init;
-(id)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)assertQueueIsNotCurrent;
-(void)assertQueueIsCurrent;
-(BOOL)isQueueCurrent;
-(id)initWithName:(char*)arg1 contextKey:(void*)arg2 ;
@end

