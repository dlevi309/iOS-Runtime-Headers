/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate;

@interface ATXNotificationEvent : NSObject {

	BOOL _ending;
	BOOL _hiding;
	BOOL _topOfPile;
	BOOL _fromOffScreen;
	long long _eventType;
	NSDate* _ts;
	unsigned long long _pos;

}

@property (assign,nonatomic) long long eventType;                 //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSDate * ts;                         //@synthesize ts=_ts - In the implementation block
@property (assign,nonatomic) unsigned long long pos;              //@synthesize pos=_pos - In the implementation block
@property (assign,nonatomic) BOOL topOfPile;                      //@synthesize topOfPile=_topOfPile - In the implementation block
@property (assign,nonatomic) BOOL fromOffScreen;                  //@synthesize fromOffScreen=_fromOffScreen - In the implementation block
+(id)hidingEventSet;
+(id)endingEventSet;
+(id)positiveEventSet;
+(id)clearEventSet;
-(long long)eventType;
-(void)setEventType:(long long)arg1 ;
-(unsigned long long)pos;
-(void)setPos:(unsigned long long)arg1 ;
-(void)setTopOfPile:(BOOL)arg1 ;
-(BOOL)topOfPile;
-(id)pbmsg;
-(id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3 ;
-(id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3 fromOffScreen:(BOOL)arg4 ;
-(id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3 fromOffScreen:(BOOL)arg4 topOfPile:(BOOL)arg5 ;
-(BOOL)isEndingEvent;
-(BOOL)isHidingEvent;
-(NSDate *)ts;
-(void)setTs:(NSDate *)arg1 ;
-(BOOL)fromOffScreen;
-(void)setFromOffScreen:(BOOL)arg1 ;
@end

