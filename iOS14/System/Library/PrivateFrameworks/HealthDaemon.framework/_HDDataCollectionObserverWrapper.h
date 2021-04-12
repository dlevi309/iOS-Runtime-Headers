/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)collectionInterval;
-(id)observer;
-(id)description;
-(void)setCollectionInterval:(double)arg1 ;
-(void)setState:(HDDataCollectionObserverState *)arg1 ;
-(HDDataCollectionObserverState *)state;
-(id)initWithObserver:(id)arg1 state:(id)arg2 collectionInterval:(double)arg3 ;
@end

