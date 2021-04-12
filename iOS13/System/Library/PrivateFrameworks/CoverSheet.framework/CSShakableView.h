/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class SBFTouchPassThroughView, NSArray, NSString;

@interface CSShakableView : SBFTouchPassThroughView <CAAnimationDelegate> {

	/*^block*/id _shakeCompletionBlock;
	SBFTouchPassThroughView* _containerView;
	NSArray* _prototypeSpringAnimations;
	double _shakeDistance;

}

@property (nonatomic,readonly) SBFTouchPassThroughView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * prototypeSpringAnimations;                    //@synthesize prototypeSpringAnimations=_prototypeSpringAnimations - In the implementation block
@property (assign,nonatomic) double shakeDistance;                                   //@synthesize shakeDistance=_shakeDistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(SBFTouchPassThroughView *)containerView;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)beginShakingWithCompletion:(/*^block*/id)arg1 ;
-(void)setShakeDistance:(double)arg1 ;
-(id)_defaultSpringAnimations;
-(void)setPrototypeSpringAnimations:(NSArray *)arg1 ;
-(void)_invokeCompletionBlockIfNecessary;
-(NSArray *)prototypeSpringAnimations;
-(double)shakeDistance;
@end

