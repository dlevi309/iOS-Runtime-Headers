/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEventRecvContTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)eventAbsTimestamp;
-(unsigned long long)eventRecvContTimestamp;
@end

