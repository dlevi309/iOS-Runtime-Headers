/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDDataCollectionObserverState;

@interface _HDDataCollectionObserverWrapper : NSObject {

	id _observer;
	HDDataCollectionObserverState* _state;
	double _collectionInterval;

}

@property (nonatomic,__weak,readonly) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) HDDataCollectionObserverState * state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double collectionInterval;                        //@synthesize collectionInterval=_collectionInterval - In the implementation block
-(id)description;
-(id)observer;
-(HDDataCollectionObserverState *)state;
-(void)setState:(HDDataCollectionObserverState *)arg1 ;
-(void)setCollectionInterval:(double)arg1 ;
-(double)collectionInterval;
-(id)initWithObserver:(id)arg1 state:(id)arg2 collectionInterval:(double)arg3 ;
@end

