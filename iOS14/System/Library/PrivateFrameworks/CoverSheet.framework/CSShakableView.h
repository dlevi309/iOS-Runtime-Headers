/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)prototypeSpringAnimations;
-(void)layoutSubviews;
-(SBFTouchPassThroughView *)containerView;
-(void)beginShakingWithCompletion:(/*^block*/id)arg1 ;
-(void)setShakeDistance:(double)arg1 ;
-(void)setPrototypeSpringAnimations:(NSArray *)arg1 ;
-(double)shakeDistance;
-(void)_invokeCompletionBlockIfNecessary;
-(id)_defaultSpringAnimations;
-(void)dealloc;
@end

