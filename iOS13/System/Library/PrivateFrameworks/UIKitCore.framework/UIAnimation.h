/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIAnimation : NSObject {

	id _target;
	SEL _action;
	id _delegate;
	/*^block*/id _completion;
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned useNSTimer : 1;
	}  _animationFlags;
	double _startTime;
	double _duration;
	int _state;

}
-(int)type;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)target;
-(int)state;
-(id)initWithTarget:(id)arg1 ;
-(SEL)action;
-(void)setCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)completion;
-(void)setDuration:(double)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(float)fractionForTime:(double)arg1 ;
-(void)markStop;
-(void)markStart:(double)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(void)stopAnimation;
-(void)setUsesNSTimer:(BOOL)arg1 ;
-(BOOL)usesNSTimer;
-(void)setAnimationCurve:(int)arg1 ;
@end

