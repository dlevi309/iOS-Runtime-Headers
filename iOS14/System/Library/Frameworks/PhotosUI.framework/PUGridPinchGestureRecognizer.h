/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer {

	CGPoint _touch0InitialLocation;
	CGPoint _touch1InitialLocation;
	double _lastTransitionProgress;
	unsigned long long _transitionDirection;

}

@property (nonatomic,readonly) double transitionProgress; 
@property (nonatomic,readonly) CGSize centerOffset; 
@property (nonatomic,readonly) unsigned long long transitionDirection;              //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) BOOL transitionShouldFinish; 
-(double)transitionProgress;
-(CGSize)centerOffset;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)_resetTransitionState;
-(unsigned long long)transitionDirection;
-(BOOL)transitionShouldFinish;
@end

