/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_source, OS_dispatch_queue, CMPocketStateDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSMutableArray;

@interface CMPocketStateManager : NSObject {

	NSObject*<OS_dispatch_source> fQueryTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	int fCachedState;
	Dispatcher* fDispatcher;
	double fMaxMonitorTime;
	NSMutableArray* fQueryBlocks;
	id<CMPocketStateDelegate> _delegate;

}

@property (assign,nonatomic) id<CMPocketStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isPocketStateAvailable;
-(id)init;
-(id<CMPocketStateDelegate>)delegate;
-(void)onPocketStateUpdated:(int)arg1 ;
-(void)queryStateOntoQueue:(id)arg1 andMonitorFor:(double)arg2 withTimeout:(double)arg3 andHandler:(/*^block*/id)arg4 ;
-(void)addToAggdScalarWithName:(id)arg1 andScalar:(unsigned long long)arg2 ;
-(void)_disableDispatcher;
-(long long)translateInternalState:(int)arg1 ;
-(id)externalStateToString:(long long)arg1 ;
-(void)queryStateOntoQueue:(id)arg1 withTimeout:(double)arg2 andHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<CMPocketStateDelegate>)arg1 ;
-(void)onNotification:(id)arg1 ;
-(void)dealloc;
@end

