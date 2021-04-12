/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@protocol PBBridgeIDSReachabilityObserver;
@interface PBBridgeIDSReachabilityObserverWrapper : NSObject {

	id<PBBridgeIDSReachabilityObserver> _observer;

}

@property (assign,nonatomic,__weak) id<PBBridgeIDSReachabilityObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(void)setObserver:(id<PBBridgeIDSReachabilityObserver>)arg1 ;
-(id<PBBridgeIDSReachabilityObserver>)observer;
-(void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3 ;
@end

