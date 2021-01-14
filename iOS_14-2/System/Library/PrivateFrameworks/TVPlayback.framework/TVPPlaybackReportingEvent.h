/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString;

@interface TVPPlaybackReportingEvent : NSObject {

	BOOL _isUIInteraction;
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
@property (assign,nonatomic) BOOL isUIInteraction;                                       //@synthesize isUIInteraction=_isUIInteraction - In the implementation block
-(void)setDuration:(double)arg1 ;
-(double)timestamp;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(void)setValue:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(TVPPlaybackReportingEvent *)startEvent;
-(double)duration;
-(void)setStartEvent:(TVPPlaybackReportingEvent *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)value;
-(long long)durationMS;
-(void)setDurationMS:(long long)arg1 ;
-(BOOL)isUIInteraction;
-(void)setIsUIInteraction:(BOOL)arg1 ;
@end

