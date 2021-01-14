/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMKappaInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	BOOL fStartedUpdates;
	/*^block*/id fHandler;

}
-(id)init;
-(void)_teardown;
-(void)_startKappaUpdatesForItem:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_stopKappaUpdates;
-(void)dealloc;
@end

