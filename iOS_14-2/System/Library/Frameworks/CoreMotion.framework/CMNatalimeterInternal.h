/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMNatalimeterInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	BOOL fStartedUpdates;
	/*^block*/id fHandler;

}
-(id)init;
-(void)_teardown;
-(unsigned long long)_promptsNeeded;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopAbsoluteNatalimetryDataUpdates;
-(void)dealloc;
@end

