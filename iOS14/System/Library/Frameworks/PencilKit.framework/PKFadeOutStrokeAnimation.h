/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class UIColor, PKStroke;

@interface PKFadeOutStrokeAnimation : NSObject {

	UIColor* _startColor;
	PKStroke* _stroke;
	double _startTime;
	double _duration;

}

@property (nonatomic,readonly) PKStroke * stroke;              //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,readonly) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
-(PKStroke *)stroke;
-(double)duration;
-(double)startTime;
-(id)newStrokeAtTime:(double)arg1 ;
-(BOOL)isDoneAtTime:(double)arg1 ;
-(id)initWithStroke:(id)arg1 startTime:(double)arg2 duration:(double)arg3 ;
@end

