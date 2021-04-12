/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class WKFullscreenAnimationController, NSString;

@interface WKFullScreenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	RetainPtr<WKFullscreenAnimationController>* _animator;
	RetainPtr<id<UIViewControllerContextTransitioning> >* _context;
	CGPoint _anchor;

}

@property (nonatomic,readonly) WKFullscreenAnimationController * animator; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKFullscreenAnimationController *)animator;
-(void)cancelInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(BOOL)wantsInteractiveStart;
-(id)initWithAnimator:(id)arg1 anchor:(CGPoint)arg2 ;
-(void)updateInteractiveTransition:(double)arg1 withTranslation:(CGSize)arg2 ;
-(void)updateInteractiveTransition:(double)arg1 withScale:(double)arg2 andTranslation:(CGSize)arg3 ;
@end

