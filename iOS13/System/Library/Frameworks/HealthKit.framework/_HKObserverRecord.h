/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKObserverRecord : NSObject {

	id _observer;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (assign,nonatomic,__weak) id observer;                                    //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithObserver:(id)arg1 clientQueue:(id)arg2 ;
@end

