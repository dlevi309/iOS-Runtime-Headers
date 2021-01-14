/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)progress;
-(void)handle:(id)arg1 ;
-(unsigned long long)gestureType;
-(BOOL)shouldCompleteGesture;
@end

