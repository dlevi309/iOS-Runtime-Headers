/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NRDeviceCollectionHistoryObserverWrapper : NSObject {

	/*^block*/id _observer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id observer;                                       //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObserver:(id)arg1 ;
@end

