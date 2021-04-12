/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(HDDataCollectorState *)state;
-(void)setState:(HDDataCollectorState *)arg1 ;
-(id<HDDataCollector>)collector;
-(void)setCollector:(id<HDDataCollector>)arg1 ;
@end

