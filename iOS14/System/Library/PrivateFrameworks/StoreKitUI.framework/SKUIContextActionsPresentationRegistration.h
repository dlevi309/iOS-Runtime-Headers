/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPreviewInteractionDelegate.h>

@class UIViewController, UIPreviewInteraction, NSTimer, SKUIContextActionsViewController, UIViewPropertyAnimator, UILongPressGestureRecognizer, NSString;

@interface SKUIContextActionsPresentationRegistration : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {

	BOOL _previewInteractionDidEnd;
	/*^block*/id _handler;
	UIViewController* _viewController;
	UIPreviewInteraction* _previewInteraction;
	NSTimer* _previewInteractionTimeout;
	SKUIContextActionsViewController* _orbContextActionsViewController;
	UIViewPropertyAnimator* _previewPhasePropertyAnimator;
	UIViewPropertyAnimator* _commitPhasePropertyAnimator;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,copy) id handler;                                                                        //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIPreviewInteraction * previewInteraction;                                       //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (assign,nonatomic) BOOL previewInteractionDidEnd;                                                   //@synthesize previewInteractionDidEnd=_previewInteractionDidEnd - In the implementation block
@property (nonatomic,retain) NSTimer * previewInteractionTimeout;                                             //@synthesize previewInteractionTimeout=_previewInteractionTimeout - In the implementation block
@property (nonatomic,retain) SKUIContextActionsViewController * orbContextActionsViewController;              //@synthesize orbContextActionsViewController=_orbContextActionsViewController - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * previewPhasePropertyAnimator;                           //@synthesize previewPhasePropertyAnimator=_previewPhasePropertyAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * commitPhasePropertyAnimator;                            //@synthesize commitPhasePropertyAnimator=_commitPhasePropertyAnimator - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                       //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(UIViewController *)viewController;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(id)handler;
-(void)dealloc;
-(void)setOrbContextActionsViewController:(SKUIContextActionsViewController *)arg1 ;
-(void)cleanupPreviewInteraction:(id)arg1 ;
-(void)setPreviewPhasePropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setCommitPhasePropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(BOOL)previewInteractionDidEnd;
-(void)setPreviewInteractionTimeout:(NSTimer *)arg1 ;
-(void)setPreviewInteractionDidEnd:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)previewPhasePropertyAnimator;
-(SKUIContextActionsViewController *)orbContextActionsViewController;
-(UIViewPropertyAnimator *)commitPhasePropertyAnimator;
-(NSTimer *)previewInteractionTimeout;
-(void)_presentFromGestureRecognizer:(id)arg1 ;
-(void)longPressGestureRecognizerTriggered:(id)arg1 ;
-(id)initWithViewController:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

