/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTScheduler.h>

@protocol NAScheduler, OS_dispatch_queue;
@class NSObject, NSString;

@interface _MTSerialQueueScheduler : NSObject <MTScheduler> {

	id<NAScheduler> _internalScheduler;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,readonly) id<NAScheduler> internalScheduler;                       //@synthesize internalScheduler=_internalScheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id<NAScheduler>)internalScheduler;
@end

