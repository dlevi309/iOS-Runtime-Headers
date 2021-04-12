/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDPromise.h>

@protocol ASDTaskScheduler;
@interface ASDLazyPromise : ASDPromise {

	/*^block*/id _executor;
	id<ASDTaskScheduler> _scheduler;

}
-(id)initOnScheduler:(id)arg1 withExecutor:(/*^block*/id)arg2 ;
-(id)joinWithPromise:(id)arg1 ;
-(void)thenPerform:(/*^block*/id)arg1 orCatchError:(/*^block*/id)arg2 onScheduler:(id)arg3 ;
@end

