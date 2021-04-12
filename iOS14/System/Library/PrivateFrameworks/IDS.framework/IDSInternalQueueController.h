/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSInternalQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	void* _contextKey;

}
+(id)sharedInstance;
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(void)assertQueueIsCurrent;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertQueueIsNotCurrent;
-(id)queue;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(BOOL)isQueueCurrent;
-(id)initWithName:(char*)arg1 contextKey:(void*)arg2 ;
@end

