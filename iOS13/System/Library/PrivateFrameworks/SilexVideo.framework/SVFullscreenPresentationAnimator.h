/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVFullscreenTransitionCoordinator.h>

@protocol SVFullscreenTransitionContext;
@class UIViewPropertyAnimator, UIView, NSString;

@interface SVFullscreenPresentationAnimator : NSObject <SVFullscreenTransitionCoordinator> {

	UIViewPropertyAnimator* _animator;
	id<SVFullscreenTransitionContext> _context;
	UIView* _fromView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;                      //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) id<SVFullscreenTransitionContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * fromView;                                      //@synthesize fromView=_fromView - In the implementation block
@property (nonatomic,readonly) id completionBlock;                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(id<SVFullscreenTransitionContext>)context;
-(void)setContext:(id<SVFullscreenTransitionContext>)arg1 ;
-(void)completeTransition:(BOOL)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animateWithContext:(id)arg1 ;
@end

