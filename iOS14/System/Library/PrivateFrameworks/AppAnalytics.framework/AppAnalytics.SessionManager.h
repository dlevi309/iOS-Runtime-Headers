/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/

#import <libobjc.A.dylib/AAFlushable.h>

@interface AppAnalytics.SessionManager : _UKNOWN_SUPERCLASS_ <AAFlushable> {

	 tracker;
	 processorManager;
	 appSessionProvider;
	 accessQueue;
	 sessionGroupManager;
	 suspendCount;
	 dataStacks;
	 observers;
	 options;
	 flushProcessor;

}
-(void)flushWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

