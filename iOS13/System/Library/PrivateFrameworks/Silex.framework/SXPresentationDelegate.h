/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class SXTangierController, SXComponentAnimationController, SXComponentBehaviorController, SXFullscreenVideoPlaybackManager, SXMediaPlaybackController, SXPresentationAttributes;


@protocol SXPresentationDelegate <NSObject>
@property (nonatomic,readonly) id<SXComponentController> componentController; 
@property (nonatomic,readonly) SXTangierController * tangierController; 
@property (nonatomic,readonly) SXComponentAnimationController * animationController; 
@property (nonatomic,readonly) SXComponentBehaviorController * behaviorController; 
@property (nonatomic,readonly) SXFullscreenVideoPlaybackManager * fullscreenVideoPlaybackManager; 
@property (nonatomic,readonly) SXMediaPlaybackController * mediaPlaybackController; 
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes; 
@property (nonatomic,readonly) id<SXAdDocumentStateManager> adDocumentStateManager; 
@property (nonatomic,readonly) id<SXTextSelectionManager> textSelectionManager; 
@required
-(BOOL)isScrolling;
-(SXComponentAnimationController *)animationController;
-(SXPresentationAttributes *)presentationAttributes;
-(BOOL)allowInteractivityFocusForComponent:(id)arg1;
-(BOOL)addInteractivityFocusForComponent:(id)arg1;
-(void)removeInteractivityFocusForComponent:(id)arg1;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 canvasController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(void)dismissFullscreenCanvasForComponent:(id)arg1;
-(id)presentingContentViewController;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2;
-(void)updateBehaviorForComponentView:(id)arg1;
-(id<SXComponentController>)componentController;
-(SXTangierController *)tangierController;
-(SXComponentBehaviorController *)behaviorController;
-(SXFullscreenVideoPlaybackManager *)fullscreenVideoPlaybackManager;
-(SXMediaPlaybackController *)mediaPlaybackController;
-(id<SXAdDocumentStateManager>)adDocumentStateManager;
-(id<SXTextSelectionManager>)textSelectionManager;

@end

