/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

