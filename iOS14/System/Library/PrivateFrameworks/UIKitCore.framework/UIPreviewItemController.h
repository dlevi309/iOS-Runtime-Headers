/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol UIPreviewItemDelegate;
@class MLULookupItem, UIPreviewInteractionController, UIView, UIImageView, CADisplayLink, NSDictionary, UIViewController, NSArray, UIGestureRecognizer, NSString;

@interface UIPreviewItemController : NSObject <UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver> {

	MLULookupItem* _lookupItem;
	UIPreviewInteractionController* _previewInteractionController;
	UIView* _previewIndicatorView;
	UIImageView* _previewIndicatorImageView;
	UIView* _previewIndicatorSnapshotView;
	CADisplayLink* _previewIndicatorDisplayLink;
	double _lastPreviewIndicatorAnimationTimestamp;
	double _previewIndicatorAnimationTargetAlpha;
	CGRect _previewIndicatorBoundingRect;
	BOOL _previewIndicatorUsesStandardAnimation;
	BOOL _contentManagedByClient;
	UIPreviewItemController* _strongSelf;
	BOOL _interactionInProgress;
	id<UIPreviewItemDelegate> _delegate;
	long long _type;
	NSDictionary* _previewData;
	UIViewController* _presentedViewController;
	UIViewController* _presentingViewController;
	UIView* _view;

}

@property (assign,nonatomic,__weak) id<UIPreviewItemDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * previewData;                                                //@synthesize previewData=_previewData - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationSecondaryGestureRecognizer; 
@property (nonatomic,readonly) UIViewController * presentedViewController;                                //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;                               //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) BOOL interactionInProgress;                                                //@synthesize interactionInProgress=_interactionInProgress - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                      //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4 ;
-(BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3 ;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3 ;
-(BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1 ;
-(id)init;
-(id<UIPreviewItemDelegate>)delegate;
-(void)stopInteraction;
-(void)startInteraction;
-(UIViewController *)presentingViewController;
-(BOOL)_isMobileSafariRestricted;
-(BOOL)_shouldCancelPreviewWithNegativeFeedback;
-(id)previewViewControllerForPosition:(CGPoint)arg1 inSourceView:(id)arg2 documentProperties:(id)arg3 ;
-(void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(BOOL)arg2 ;
-(void)updatePreviewIndicatorAnimation:(id)arg1 ;
-(void)setupPreviewIndicatorInSourceView:(id)arg1 ;
-(void)clearPreviewIndicator;
-(UIGestureRecognizer *)presentationSecondaryGestureRecognizer;
-(BOOL)interactionInProgress;
-(void)setDelegate:(id<UIPreviewItemDelegate>)arg1 ;
-(BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(UIView *)view;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(long long)type;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(NSArray *)gestureRecognizers;
-(id)initWithView:(id)arg1 ;
-(NSDictionary *)previewData;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)dealloc;
-(UIViewController *)presentedViewController;
@end

