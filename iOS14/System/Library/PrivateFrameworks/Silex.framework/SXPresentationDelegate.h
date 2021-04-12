/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class SXComponentAnimationController, SXComponentBehaviorController, SXPresentationAttributes;


@protocol SXPresentationDelegate <NSObject>
@property (readonly,nonatomic) id<SXComponentController> componentController; 
@property (readonly,nonatomic) SXComponentAnimationController * animationController; 
@property (readonly,nonatomic) SXComponentBehaviorController * behaviorController; 
@property (readonly,nonatomic) SXPresentationAttributes * presentationAttributes; 
@required
-(SXPresentationAttributes *)presentationAttributes;
-(SXComponentAnimationController *)animationController;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(BOOL)allowInteractivityFocusForComponent:(id)arg1;
-(BOOL)allowInteractivityFocusForComponent:(id)arg1;
-(void)willDismissFullscreenCanvasForComponent:(id)arg1;
-(void)willDismissFullscreenCanvasForComponent:(id)arg1;
-(void)willReturnToFullscreenForComponent:(id)arg1;
-(void)willReturnToFullscreenForComponent:(id)arg1;
-(BOOL)addInteractivityFocusForComponent:(id)arg1;
-(BOOL)addInteractivityFocusForComponent:(id)arg1;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2;
-(void)updateBehaviorForComponentView:(id)arg1;
-(void)updateBehaviorForComponentView:(id)arg1;
-(SXComponentBehaviorController *)behaviorController;
-(BOOL)isScrolling;
-(void)removeInteractivityFocusForComponent:(id)arg1;
-(void)removeInteractivityFocusForComponent:(id)arg1;
-(void)dismissFullscreenCanvasForComponent:(id)arg1;
-(void)dismissFullscreenCanvasForComponent:(id)arg1;
-(id<SXComponentController>)componentController;
-(id)presentingContentViewController;

@end

