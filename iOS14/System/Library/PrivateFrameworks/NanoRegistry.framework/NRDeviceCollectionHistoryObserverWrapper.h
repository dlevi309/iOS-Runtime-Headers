/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

