/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContextMenuInteractionDelegate.h>
#import <UIKit/UIViewControllerPreviewing_Internal.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIView, _UIContextMenuInteraction, UIViewController, NSString, UIGestureRecognizer;

@interface _UIViewControllerClickPreviewingContext : NSObject <_UIContextMenuInteractionDelegate, UIViewControllerPreviewing_Internal> {

	id<UIViewControllerPreviewingDelegate> delegate;
	UIView* _sourceView;
	UIView* customViewForInteractiveHighlight;
	_UIContextMenuInteraction* _menuInteraction;
	UIViewController* _presentingViewController;
	UIViewController* _previewViewController;
	CGRect sourceRect;

}

@property (nonatomic,retain) _UIContextMenuInteraction * menuInteraction;                                            //@synthesize menuInteraction=_menuInteraction - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                     //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;                                               //@synthesize previewViewController=_previewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (nonatomic,readonly) UIView * sourceView;                                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect; 
@property (nonatomic,retain) UIView * customViewForInteractiveHighlight; 
-(void)dealloc;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(UIViewController *)presentingViewController;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)unregister;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(void)setMenuInteraction:(_UIContextMenuInteraction *)arg1 ;
-(_UIContextMenuInteraction *)menuInteraction;
-(id)_guessAutomaticPreviewForLocation:(CGPoint)arg1 ;
-(id)_uiActionsForPreviewActions:(id)arg1 ;
-(id)_targetedPreviewForHighlightView:(id)arg1 container:(id)arg2 center:(CGPoint)arg3 ;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIView *)customViewForInteractiveHighlight;
-(void)setCustomViewForInteractiveHighlight:(UIView *)arg1 ;
-(id)initWithSourceView:(id)arg1 viewController:(id)arg2 ;
-(void)contextMenuInteractionWillDisplay:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
@end

