/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIViewAnimationFrame : NSObject {

	id _value;
	double _startTime;
	double _duration;

}

@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(long long)compareStartTimes:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)description;
-(double)duration;
-(double)startTime;
-(id)value;
@end

