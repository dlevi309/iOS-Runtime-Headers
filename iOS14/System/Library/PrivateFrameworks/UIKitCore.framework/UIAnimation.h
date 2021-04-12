/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletion:(/*^block*/id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)delegate;
-(id)initWithTarget:(id)arg1 ;
-(void)markStart:(double)arg1 ;
-(SEL)action;
-(/*^block*/id)completion;
-(void)setUsesNSTimer:(BOOL)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)markStop;
-(float)progressForFraction:(float)arg1 ;
-(void)stopAnimation;
-(void)setProgress:(float)arg1 ;
-(BOOL)usesNSTimer;
-(int)type;
-(float)fractionForTime:(double)arg1 ;
-(int)state;
-(id)target;
-(void)setAnimationCurve:(int)arg1 ;
@end

