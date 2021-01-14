/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewing_Internal.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIView, UIViewController, _UIPreviewInteractionController, NSString, UIGestureRecognizer;

@interface _UIViewControllerPreviewingContext : NSObject <_UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal> {

	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _customViewForInteractiveHighlight;
	UIView* _sourceView;
	UIViewController* _viewController;
	_UIPreviewInteractionController* _previewInteractionController;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIView * sourceView;                                                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionController * previewInteractionController;                         //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewingDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * customViewForInteractiveHighlight;                                             //@synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
-(void)unregister;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIView *)customViewForInteractiveHighlight;
-(void)setPreviewInteractionController:(_UIPreviewInteractionController *)arg1 ;
-(void)setCustomViewForInteractiveHighlight:(UIView *)arg1 ;
-(CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(_UIPreviewInteractionController *)previewInteractionController;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2 ;
-(id)initWithSourceView:(id)arg1 viewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2 ;
-(UIViewController *)viewController;
-(CGRect)sourceRect;
@end

