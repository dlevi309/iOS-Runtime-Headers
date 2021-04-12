/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class UIColor;

@interface PKInterpolateColorAnimation : NSObject {

	double _sourceRGBA[4];
	double _destRGBA[4];
	double _startTime;
	double _duration;
	UIColor* _endColorFallback;

}
-(id)colorAtTime:(double)arg1 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 startTime:(double)arg3 duration:(double)arg4 ;
-(BOOL)isDoneAtTime:(double)arg1 ;
@end

