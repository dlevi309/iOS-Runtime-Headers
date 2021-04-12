/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@interface RBEventQueueEvent : NSObject {

	id _context;
	double _eventTime;
	/*^block*/id _action;

}

@property (nonatomic,retain) id context;                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double eventTime;              //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) id action;                       //@synthesize action=_action - In the implementation block
-(long long)compare:(id)arg1 ;
-(id)action;
-(id)context;
-(void)setAction:(id)arg1 ;
-(id)description;
-(double)eventTime;
-(void)setEventTime:(double)arg1 ;
-(void)setContext:(id)arg1 ;
@end

