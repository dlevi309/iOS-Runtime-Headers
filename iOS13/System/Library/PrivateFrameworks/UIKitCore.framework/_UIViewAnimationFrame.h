/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(long long)compareStartTimes:(id)arg1 ;
@end

