/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUInteractiveDismissalControllerDelegate, PUInterruptibleViewControllerTransition;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIViewController, UIView, PUTilingView, PUTileController;

@interface PUInteractiveDismissalController : NSObject {

	struct {
		BOOL respondsToCanBeginDismissalAtLocationFromProvider;
		BOOL respondsToTilingView;
		BOOL respondsToDesignatedTileController;
	}  _delegateFlags;
	BOOL _isHandlingDismissalInteraction;
	BOOL __needsUpdateGestureRecognizers;
	id<PUInteractiveDismissalControllerDelegate> _delegate;
	UIViewController* __viewController;
	UIView* __viewHostingGestureRecognizers;
	id<PUInterruptibleViewControllerTransition> __interruptibleViewControllerTransition;

}

@property (assign,setter=_setViewController:,nonatomic,__weak) UIViewController * _viewController;                                                                              //@synthesize _viewController=__viewController - In the implementation block
@property (setter=_setViewHostingGestureRecognizers:,nonatomic,retain) UIView * _viewHostingGestureRecognizers;                                                                 //@synthesize _viewHostingGestureRecognizers=__viewHostingGestureRecognizers - In the implementation block
@property (setter=_setInterruptibleViewControllerTransition:,nonatomic,retain) id<PUInterruptibleViewControllerTransition> _interruptibleViewControllerTransition;              //@synthesize _interruptibleViewControllerTransition=__interruptibleViewControllerTransition - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;                                                                     //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (nonatomic,readonly) PUTilingView * tilingView; 
@property (nonatomic,readonly) PUTileController * designatedTileController; 
@property (nonatomic,readonly) id<PUTilingViewControllerTransition> tilingViewControllerTransition; 
@property (assign,nonatomic,__weak) id<PUInteractiveDismissalControllerDelegate> delegate;                                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isHandlingDismissalInteraction;                                                                                                             //@synthesize isHandlingDismissalInteraction=_isHandlingDismissalInteraction - In the implementation block
-(id<PUInteractiveDismissalControllerDelegate>)delegate;
-(void)_updateIfNeeded;
-(void)beginDismissal;
-(void)invalidateDelegateData;
-(PUTileController *)designatedTileController;
-(id<PUTilingViewControllerTransition>)tilingViewControllerTransition;
-(BOOL)canBeginDismissalAtLocationFromProvider:(id)arg1 ;
-(long long)_preferredDismissalTransitionType;
-(void)endDismissal:(BOOL)arg1 ;
-(void)updateDismissalWithInteractionProgress:(double)arg1 interactionWillFinish:(BOOL)arg2 ;
-(void)_invalidateViewController;
-(void)_updateViewControllerIfNeeded;
-(void)_invalidateViewHostingGestureRecognizers;
-(void)_updateViewHostingGestureRecognizersIfNeeded;
-(void)_invalidateInterruptibleViewControllerTransition;
-(void)_updateInterruptibleViewControllerTransitionIfNeeded;
-(BOOL)isHandlingDismissalInteraction;
-(UIView *)_viewHostingGestureRecognizers;
-(void)_setViewHostingGestureRecognizers:(id)arg1 ;
-(id<PUInterruptibleViewControllerTransition>)_interruptibleViewControllerTransition;
-(void)_setInterruptibleViewControllerTransition:(id)arg1 ;
-(PUTilingView *)tilingView;
-(void)_setViewController:(id)arg1 ;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(void)setDelegate:(id<PUInteractiveDismissalControllerDelegate>)arg1 ;
-(UIViewController *)_viewController;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(void)_invalidateGestureRecognizers;
-(void)_updateGestureRecognizersIfNeeded;
-(BOOL)_needsUpdateGestureRecognizers;
@end

