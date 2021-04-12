/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertControllerVisualStyleActionSheet.h>

@class UIView, UIVisualEffectView, _UIPreviewPresentationEffectView;

@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet {

	BOOL _actionsReversed;
	UIView* _headerView;
	UIVisualEffectView* _revealEffectView;
	_UIPreviewPresentationEffectView* _sourceViewSnapshot;

}

@property (assign,nonatomic) BOOL actionsReversed;                                               //@synthesize actionsReversed=_actionsReversed - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * revealEffectView;                              //@synthesize revealEffectView=_revealEffectView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * sourceViewSnapshot;              //@synthesize sourceViewSnapshot=_sourceViewSnapshot - In the implementation block
+(void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5 ;
+(long long)interfaceActionPresentationStyle;
-(void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(double)minimumWidth;
-(void)setHeaderView:(UIView *)arg1 ;
-(BOOL)placementAvoidsKeyboard;
-(id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2 ;
-(BOOL)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(long long)permittedActionLayoutDirection;
-(CGRect)_sourceRectForAlertController:(id)arg1 inContainerView:(id)arg2 ;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(BOOL)shouldPreserveRespondersAcrossWindows;
-(BOOL)shouldOccludeDuringPresentation;
-(double)_actionDescriptiveTextFontSize;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)actionsReversed;
-(UIVisualEffectView *)revealEffectView;
-(BOOL)_shouldReverseActions;
-(id)tintColorForAlertController:(id)arg1 ;
-(UIView *)headerView;
-(void)setRevealEffectView:(UIVisualEffectView *)arg1 ;
-(void)setSourceViewSnapshot:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setActionsReversed:(BOOL)arg1 ;
-(_UIPreviewPresentationEffectView *)sourceViewSnapshot;
@end

