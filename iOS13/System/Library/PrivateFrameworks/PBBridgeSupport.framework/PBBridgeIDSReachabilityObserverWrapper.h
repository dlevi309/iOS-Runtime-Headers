/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@protocol PBBridgeIDSReachabilityObserver;
@interface PBBridgeIDSReachabilityObserverWrapper : NSObject {

	id<PBBridgeIDSReachabilityObserver> _observer;

}

@property (assign,nonatomic,__weak) id<PBBridgeIDSReachabilityObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(id<PBBridgeIDSReachabilityObserver>)observer;
-(void)setObserver:(id<PBBridgeIDSReachabilityObserver>)arg1 ;
-(void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3 ;
@end

