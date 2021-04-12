/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIPreviewPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, MTMaterialView, NSString;

@interface MediaControlsPresentationController : UIPreviewPresentationController <UIGestureRecognizerDelegate> {

	UIView* _presentingView;
	MTMaterialView* _materialView;
	CGPoint _sourcePoint;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) MTMaterialView * materialView;               //@synthesize materialView=_materialView - In the implementation block
@property (assign,nonatomic,__weak) UIView * presentingView;              //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,nonatomic) CGPoint sourcePoint;                         //@synthesize sourcePoint=_sourcePoint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                     //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)presentationTransitionWillBegin;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(UIView *)presentingView;
-(MTMaterialView *)materialView;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
-(void)setPresentingView:(UIView *)arg1 ;
-(void)setSourcePoint:(CGPoint)arg1 ;
-(void)_dismissTap:(id)arg1 ;
-(CGPoint)sourcePoint;
@end

