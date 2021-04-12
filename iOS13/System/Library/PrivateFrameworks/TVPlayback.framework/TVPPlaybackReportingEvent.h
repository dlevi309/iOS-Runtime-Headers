/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString;

@interface TVPPlaybackReportingEvent : NSObject {

	NSString* _name;
	double _timestamp;
	id _value;
	long long _type;
	double _duration;
	long long _durationMS;
	TVPPlaybackReportingEvent* _startEvent;

}

@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) id value;                                                   //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long durationMS;                                       //@synthesize durationMS=_durationMS - In the implementation block
@property (assign,nonatomic,__weak) TVPPlaybackReportingEvent * startEvent;              //@synthesize startEvent=_startEvent - In the implementation block
-(id)description;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)timestamp;
-(double)duration;
-(void)setTimestamp:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(TVPPlaybackReportingEvent *)startEvent;
-(long long)durationMS;
-(void)setDurationMS:(long long)arg1 ;
-(void)setStartEvent:(TVPPlaybackReportingEvent *)arg1 ;
@end

