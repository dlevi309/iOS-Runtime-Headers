/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDataCollector;
@class HDDataCollectorState;

@interface HDDataCollectorRecord : NSObject {

	id<HDDataCollector> _collector;
	HDDataCollectorState* _state;

}

@property (assign,nonatomic,__weak) id<HDDataCollector> collector;              //@synthesize collector=_collector - In the implementation block
@property (nonatomic,retain) HDDataCollectorState * state;                      //@synthesize state=_state - In the implementation block
-(id<HDDataCollector>)collector;
-(id)description;
-(void)setState:(HDDataCollectorState *)arg1 ;
-(HDDataCollectorState *)state;
-(void)setCollector:(id<HDDataCollector>)arg1 ;
@end

