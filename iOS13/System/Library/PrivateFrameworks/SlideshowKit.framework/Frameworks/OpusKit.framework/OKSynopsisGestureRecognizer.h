/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface OKSynopsisGestureRecognizer : UIPinchGestureRecognizer {

	double _lastScale;
	unsigned long long _currentType;
	id _target;
	SEL _action;
	unsigned long long _gestureType;

}

@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) unsigned long long gestureType;              //@synthesize gestureType=_gestureType - In the implementation block
-(double)progress;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)gestureType;
-(BOOL)shouldCompleteGesture;
-(void)handle:(id)arg1 ;
@end

