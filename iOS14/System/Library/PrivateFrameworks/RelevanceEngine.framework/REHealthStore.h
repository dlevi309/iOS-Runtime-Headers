/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class HKHealthStore, NSObject;

@interface REHealthStore : RESingleton {

	HKHealthStore* _healthStore;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_init;
-(void)accessHealthStore:(/*^block*/id)arg1 ;
-(id)_createStore;
-(BOOL)_isClockHostApp;
@end

