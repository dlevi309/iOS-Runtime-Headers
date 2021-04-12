/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@interface SBWakeEvent : NSObject {

	unsigned long long _eventAbsTimestamp;
	unsigned long long _eventRecvContTimestamp;

}

@property (assign,nonatomic) unsigned long long eventAbsTimestamp;                   //@synthesize eventAbsTimestamp=_eventAbsTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long eventRecvContTimestamp;              //@synthesize eventRecvContTimestamp=_eventRecvContTimestamp - In the implementation block
-(id)initWithTimestamp:(unsigned long long)arg1 ;
-(void)setEventAbsTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)eventRecvContTimestamp;
-(unsigned long long)eventAbsTimestamp;
-(void)setEventRecvContTimestamp:(unsigned long long)arg1 ;
@end

