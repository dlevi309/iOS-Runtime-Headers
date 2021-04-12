/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@class UIAlertController, UIAlertControllerVisualStyle, UIView, _UIAlertControllerInterfaceActionGroupView, UIVisualEffectView, UILabel, _UIKeyboardLayoutAlignmentView, NSMutableArray, NSArray, NSLayoutConstraint, UIAlertAction, _UIAlertControllerActionViewMetrics, _UIFlexibleConstantConstraintSet, NSString;

@interface _UIAlertControllerView : UIView <UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UISpringLoadedInteractionSupporting, UIGestureRecognizerDelegatePrivate> {

	UIAlertController* _alertController;
	UIAlertControllerVisualStyle* _visualStyle;
	struct {
		unsigned hasAppliedTitleAndMessageLabelVibrantContainerViewConstraints : 1;
		unsigned hasAppliedTitleConstraints : 1;
		unsigned hasAppliedMessageConstraints : 1;
		unsigned hasAppliedDetailConstraints : 1;
		unsigned presentedAsPopover : 1;
		unsigned hasDimmingView : 1;
		unsigned cancelActionIsDiscrete : 1;
		unsigned shouldHaveBackdropView : 1;
		unsigned alignsToKeyboard : 1;
		unsigned hasCachedLargestActionDimension : 1;
		unsigned needsActionsChangedHandling : 1;
		unsigned needsUpdateForPropertyChange : 1;
	}  _alertControllerViewFlags;
	UIView* _contentView;
	UIView* _contentViewTopItemsView;
	_UIAlertControllerInterfaceActionGroupView* _mainInterfaceActionsGroupView;
	_UIAlertControllerInterfaceActionGroupView* _discreteCancelActionGroupView;
	UIVisualEffectView* _titleAndMessageLabelVibrantContainerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UILabel* _detailMessageLabel;
	UIView* _separatedHeaderContentViewControllerContainerView;
	UIView* _headerContentViewControllerContainerView;
	UIView* _contentViewControllerContainerView;
	UIView* _textFieldViewControllerContainerView;
	_UIKeyboardLayoutAlignmentView* _keyboardLayoutAlignmentView;
	UIView* _keyboardLayoutAlignmentAvailableSpaceView;
	UIView* _dimmingView;
	NSMutableArray* _actionViews;
	CGPoint _actionSelectionInitialLocation;
	long long _layoutRequiresPositionUpdateCount;
	NSArray* _dimmingViewConstraints;
	NSArray* _dimmingViewForegroundViewTopConstraints;
	NSArray* _dimmingViewForegroundViewBottomConstraints;
	NSArray* _dimmingViewConstraintsForAlertStyle;
	NSArray* _dimmingViewConstraintsForActionSheetStyle;
	NSArray* _noDimmingViewConstraints;
	NSLayoutConstraint* _headerContentViewControllerPreferredWidthConstraint;
	NSLayoutConstraint* _headerContentViewControllerPreferredHeightConstraint;
	CGSize _largestActionDimension;
	UIAlertAction* _effectivePreferredAction;
	long long _batchActionChangesInProgressCount;
	BOOL _springLoaded;
	BOOL _actionsReversed;
	BOOL _presentationContextPrefersCancelActionShown;
	BOOL _actionScrubbingEnabled;
	_UIAlertControllerActionViewMetrics* _actionViewMetrics;
	double _offset;
	NSLayoutConstraint* _foregroundViewWidthConstraint;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _contentViewMaxHeightConstraint;
	NSLayoutConstraint* _headerContentViewControllerContainerViewTopAlignmentConstraint;
	NSArray* _titleAndMessageLabelVibrantContainerViewVerticalConstraints;
	_UIFlexibleConstantConstraintSet* _titleLabelTopAlignmentConstraints;
	_UIFlexibleConstantConstraintSet* _messageLabelTopAlignmentConstraints;
	NSLayoutConstraint* _detailMessageLabelTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerViewLeftConstraint;
	NSLayoutConstraint* _contentViewControllerViewRightConstraint;
	NSLayoutConstraint* _contentViewControllerViewTopConstraint;
	NSLayoutConstraint* _contentViewControllerViewBottomConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewLeftConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewRightConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewTopConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewBottomConstraint;
	NSLayoutConstraint* _contentScrollViewBottomConstraint;
	NSLayoutConstraint* _contentScrollViewMaximumWidthConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewWidthConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewHeightConstraint;
	NSLayoutConstraint* _separatedHeaderContentViewControllerContainerViewBottomConstraint;
	NSLayoutConstraint* _separatedHeaderContentViewControllerContainerViewWidthConstraint;
	_UIFlexibleConstantConstraintSet* _textFieldViewControllerContainerViewTopAlignmentConstraints;
	NSLayoutConstraint* _textFieldViewControllerContainerViewWidthConstraint;
	NSLayoutConstraint* _textFieldViewControllerContainerViewHeightConstraint;
	NSLayoutConstraint* _centerXConstraint;
	NSLayoutConstraint* _centerYConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _mainActionButtonSequenceViewWidthConstraint;
	NSLayoutConstraint* _mainActionButtonSequenceViewHeightConstraint;
	NSLayoutConstraint* _mainActionButtonSequenceViewHorizontalAlignmentConstraint;
	NSLayoutConstraint* _discreteActionGroupViewHorizontalLayoutTrailingConstraint;
	NSLayoutConstraint* _actionGroupEqualsContentViewWidthConstraint;
	NSLayoutConstraint* _discreteCancelActionViewTopConstraint;
	NSLayoutConstraint* _discreteCancelActionViewLeadingConstraint;
	NSLayoutConstraint* _discreteCancelActionViewWidthConstraint;
	NSLayoutConstraint* _discreteCancelActionViewHeightConstraint;
	CGSize _layoutSize;

}

@property (__weak) UIAlertController * alertController; 
@property (readonly) UIView * _contentView;                                                                                     //@synthesize contentView=_contentView - In the implementation block
@property (readonly) UIView * _dimmingView;                                                                                     //@synthesize dimmingView=_dimmingView - In the implementation block
@property (setter=_setVisualStyle:,nonatomic,retain) UIAlertControllerVisualStyle * _visualStyle; 
@property (nonatomic,retain) _UIAlertControllerActionViewMetrics * actionViewMetrics;                                           //@synthesize actionViewMetrics=_actionViewMetrics - In the implementation block
@property (assign,setter=_setActionsReversed:,getter=_actionsReversed,nonatomic) BOOL actionsReversed;                          //@synthesize actionsReversed=_actionsReversed - In the implementation block
@property (assign,setter=_setLayoutSize:,getter=_layoutSize,nonatomic) CGSize layoutSize;                                       //@synthesize layoutSize=_layoutSize - In the implementation block
@property (assign,nonatomic) double effectAlpha; 
@property (assign) BOOL presentedAsPopover; 
@property (assign) BOOL hasDimmingView; 
@property (assign,nonatomic) BOOL presentationContextPrefersCancelActionShown;                                                  //@synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown - In the implementation block
@property (assign) BOOL cancelActionIsDiscrete; 
@property (assign) BOOL shouldHaveBackdropView; 
@property (assign) BOOL alignsToKeyboard; 
@property (assign,nonatomic) BOOL actionScrubbingEnabled;                                                                       //@synthesize actionScrubbingEnabled=_actionScrubbingEnabled - In the implementation block
@property (assign,nonatomic) double offset;                                                                                     //@synthesize offset=_offset - In the implementation block
@property (retain) NSLayoutConstraint * foregroundViewWidthConstraint;                                                          //@synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewTopConstraint;                                                               //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewBottomConstraint;                                                            //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewMaxHeightConstraint;                                                         //@synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * headerContentViewControllerContainerViewTopAlignmentConstraint;                         //@synthesize headerContentViewControllerContainerViewTopAlignmentConstraint=_headerContentViewControllerContainerViewTopAlignmentConstraint - In the implementation block
@property (retain) NSArray * titleAndMessageLabelVibrantContainerViewVerticalConstraints;                                       //@synthesize titleAndMessageLabelVibrantContainerViewVerticalConstraints=_titleAndMessageLabelVibrantContainerViewVerticalConstraints - In the implementation block
@property (retain) _UIFlexibleConstantConstraintSet * titleLabelTopAlignmentConstraints;                                        //@synthesize titleLabelTopAlignmentConstraints=_titleLabelTopAlignmentConstraints - In the implementation block
@property (retain) _UIFlexibleConstantConstraintSet * messageLabelTopAlignmentConstraints;                                      //@synthesize messageLabelTopAlignmentConstraints=_messageLabelTopAlignmentConstraints - In the implementation block
@property (retain) NSLayoutConstraint * detailMessageLabelTopAlignmentConstraint;                                               //@synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewLeftConstraint;                                                //@synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewRightConstraint;                                               //@synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewTopConstraint;                                                 //@synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewBottomConstraint;                                              //@synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewLeftConstraint;                                              //@synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewRightConstraint;                                             //@synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewTopConstraint;                                               //@synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewBottomConstraint;                                            //@synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentScrollViewBottomConstraint;                                                      //@synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentScrollViewMaximumWidthConstraint;                                                //@synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewTopAlignmentConstraint;                               //@synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewWidthConstraint;                                      //@synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewHeightConstraint;                                     //@synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * separatedHeaderContentViewControllerContainerViewBottomConstraint;                      //@synthesize separatedHeaderContentViewControllerContainerViewBottomConstraint=_separatedHeaderContentViewControllerContainerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * separatedHeaderContentViewControllerContainerViewWidthConstraint;                       //@synthesize separatedHeaderContentViewControllerContainerViewWidthConstraint=_separatedHeaderContentViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) _UIFlexibleConstantConstraintSet * textFieldViewControllerContainerViewTopAlignmentConstraints;              //@synthesize textFieldViewControllerContainerViewTopAlignmentConstraints=_textFieldViewControllerContainerViewTopAlignmentConstraints - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewWidthConstraint;                                    //@synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewHeightConstraint;                                   //@synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerXConstraint;                                                                      //@synthesize centerXConstraint=_centerXConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerYConstraint;                                                                      //@synthesize centerYConstraint=_centerYConstraint - In the implementation block
@property (retain) NSLayoutConstraint * widthConstraint;                                                                        //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;                                                                       //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * mainActionButtonSequenceViewWidthConstraint;                                            //@synthesize mainActionButtonSequenceViewWidthConstraint=_mainActionButtonSequenceViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * mainActionButtonSequenceViewHeightConstraint;                                           //@synthesize mainActionButtonSequenceViewHeightConstraint=_mainActionButtonSequenceViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * mainActionButtonSequenceViewHorizontalAlignmentConstraint;                              //@synthesize mainActionButtonSequenceViewHorizontalAlignmentConstraint=_mainActionButtonSequenceViewHorizontalAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteActionGroupViewHorizontalLayoutTrailingConstraint;                              //@synthesize discreteActionGroupViewHorizontalLayoutTrailingConstraint=_discreteActionGroupViewHorizontalLayoutTrailingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * actionGroupEqualsContentViewWidthConstraint;                                            //@synthesize actionGroupEqualsContentViewWidthConstraint=_actionGroupEqualsContentViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewTopConstraint;                                                  //@synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewLeadingConstraint;                                              //@synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewWidthConstraint;                                                //@synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewHeightConstraint;                                               //@synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded;                                                           //@synthesize springLoaded=_springLoaded - In the implementation block
+(void)initialize;
+(BOOL)requiresConstraintBasedLayout;
-(void)_UIAppearance_setAlignsToKeyboard:(BOOL)arg1 ;
-(void)_UIAppearance_setShouldHaveBackdropView:(BOOL)arg1 ;
-(void)_UIAppearance_setHasDimmingView:(BOOL)arg1 ;
-(void)_UIAppearance_setPresentedAsPopover:(BOOL)arg1 ;
-(void)_UIAppearance_setPresentationContextPrefersCancelActionShown:(BOOL)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)_setMessage:(id)arg1 ;
-(void)setTitleAndMessageLabelVibrantContainerViewVerticalConstraints:(NSArray *)arg1 ;
-(void)setTextFieldViewControllerContainerViewTopAlignmentConstraints:(_UIFlexibleConstantConstraintSet *)arg1 ;
-(void)setSeparatedHeaderContentViewControllerContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)preferredFocusedView;
-(void)setSeparatedHeaderContentViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_disableAllowGroupOpacitiyIfNecessaryAlongsideTransitionCoordinator:(id)arg1 ;
-(id)message;
-(CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(BOOL*)arg2 ;
-(void)_addSeparatedHeaderContentViewControllerToViewHierarchyIfNecessary;
-(void)setHeaderContentViewControllerContainerViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateTintColor;
-(NSLayoutConstraint *)separatedHeaderContentViewControllerContainerViewBottomConstraint;
-(CGSize)_mainActionButtonSequenceViewSizeForHorizontalLayout:(BOOL)arg1 itemSize:(CGSize)arg2 ;
-(void)setMainActionButtonSequenceViewHorizontalAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)headerContentViewControllerContainerViewTopAlignmentConstraint;
-(void)setDiscreteActionGroupViewHorizontalLayoutTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)separatedHeaderContentViewControllerContainerViewWidthConstraint;
-(void)setContentViewControllerContainerViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_applySeparatedContentViewControllerContainerViewContraints;
-(NSArray *)titleAndMessageLabelVibrantContainerViewVerticalConstraints;
-(_UIFlexibleConstantConstraintSet *)textFieldViewControllerContainerViewTopAlignmentConstraints;
-(void)_configureActionGroupViewToAllowHorizontalLayout:(BOOL)arg1 ;
-(id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2 ;
-(void)setTextFieldViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewWidthConstraint;
-(void)_removeSeparatedHeaderContentViewControllerFromHierarchy;
-(NSLayoutConstraint *)contentViewControllerContainerViewTopAlignmentConstraint;
-(void)_addHeaderContentViewControllerToViewHierarchyIfNecessary;
-(void)setTextFieldViewControllerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)actions;
-(void)_addContentViewControllerToViewHierarchyIfNecessary;
-(void)_removeHeaderContentViewControllerViewFromHierarchy;
-(void)_applyHeaderContentViewControllerContainerViewConstraints;
-(void)_applyContentViewControllerContainerViewConstraints;
-(void)_applyTitleAndMessageLabelVibrantContainerViewConstraints;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewWidthConstraint;
-(NSLayoutConstraint *)mainActionButtonSequenceViewHorizontalAlignmentConstraint;
-(NSLayoutConstraint *)discreteActionGroupViewHorizontalLayoutTrailingConstraint;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewHeightConstraint;
-(void)setContentViewControllerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_applyTextFieldViewControllerContainerViewConstraints;
-(BOOL)_shouldHaveCancelActionInMainActionButtonSequenceView;
-(void)setContentViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1 ;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg1 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg1 ;
-(void)_prepareSeparateContentViewControllerContainerView;
-(id)_interfaceActionRepresentationForAlertAlertAction:(id)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewHeightConstraint;
-(BOOL)_forceLayoutEngineSolutionInRationalEdges;
-(void)setTextFieldViewControllerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_prepareHeaderContentViewControllerContainerView;
-(void)setMainActionButtonSequenceViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIAlertControllerVisualStyle *)_visualStyle;
-(void)_sizeOfHeaderContentViewControllerChanged;
-(UIView *)_dimmingView;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_hasTitle;
-(void)_updateConstraintSpacingForExternalOffset;
-(NSLayoutConstraint *)discreteCancelActionViewLeadingConstraint;
-(void)setDiscreteCancelActionViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_prepareTextFieldViewControllerContainerView;
-(void)_reloadInterfaceActionViewRepresentations;
-(NSLayoutConstraint *)contentViewControllerViewBottomConstraint;
-(void)_prepareTitleAndMessageLabelVibrantContainer;
-(NSLayoutConstraint *)textFieldViewControllerViewLeftConstraint;
-(void)setPresentationContextPrefersCancelActionShown:(BOOL)arg1 ;
-(void)setDiscreteCancelActionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mainActionButtonSequenceViewHeightConstraint;
-(void)setActionGroupEqualsContentViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)_numberOfActionsForMainActionButtonSequenceView;
-(void)setMainActionButtonSequenceViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_reloadInterfaceActionsGroupViewPreferredAction;
-(void)setDetailMessageLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldViewControllerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_scrollInitialActionToVisibleForPresentation;
-(NSLayoutConstraint *)centerXConstraint;
-(void)setTextFieldViewControllerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)didMoveToSuperview;
-(NSLayoutConstraint *)discreteCancelActionViewHeightConstraint;
-(void)_setupHorizontalConstraintsForLabelView:(id)arg1 ;
-(NSLayoutConstraint *)detailMessageLabelTopAlignmentConstraint;
-(void)_prepareContentViewControllerContainerView;
-(NSLayoutConstraint *)contentViewControllerViewRightConstraint;
-(id)_unlocalizedOrderedPresentableAlertActions;
-(NSLayoutConstraint *)textFieldViewControllerViewTopConstraint;
-(void)setContentViewControllerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textFieldViewControllerViewRightConstraint;
-(UIView *)_contentView;
-(id)headerContentViewController;
-(void)setDiscreteCancelActionViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentScrollViewMaximumWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mainActionButtonSequenceViewWidthConstraint;
-(NSLayoutConstraint *)actionGroupEqualsContentViewWidthConstraint;
-(void)_ensureActionViewRepresentationsHaveMetrics;
-(BOOL)presentationContextPrefersCancelActionShown;
-(void)setContentViewControllerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_removeContentViewControllerViewFromHierarchy;
-(NSLayoutConstraint *)textFieldViewControllerViewBottomConstraint;
-(void)setDiscreteCancelActionViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateMainScrollableHeaderViewHasRealContent;
-(void)setContentViewControllerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldViewControllerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSLayoutConstraint *)discreteCancelActionViewWidthConstraint;
-(NSLayoutConstraint *)contentScrollViewMaximumWidthConstraint;
-(void)_performBatchActionChangesWithBlock:(/*^block*/id)arg1 ;
-(void)setMessageLabelTopAlignmentConstraints:(_UIFlexibleConstantConstraintSet *)arg1 ;
-(void)_applyKeyboardAlignmentViewsConstraints;
-(NSLayoutConstraint *)contentViewControllerViewLeftConstraint;
-(void)_applyISEngineLayoutValuesToBoundsOnly:(BOOL)arg1 ;
-(void)_prepareKeyboardLayoutAlignmentViews;
-(id)separatedHeaderContentViewController;
-(id)contentViewController;
-(id)_vibrancyEffectForTitleAndMessageLabel;
-(double)_spaceRequiredForActionSectionsSpacing;
-(NSLayoutConstraint *)contentViewControllerViewTopConstraint;
-(void)_layoutAndPositionInParentIfNeeded;
-(NSLayoutConstraint *)widthConstraint;
-(UIAlertController *)alertController;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_sizeOfTextFieldViewControllerChanged;
-(void)_sizeOfContentViewControllerChanged;
-(double)offset;
-(void)setContentViewMaxHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateForPropertyChangeIfNeeded;
-(BOOL)_titleAndMessageLabelUseVibrancy;
-(CGSize)_sizeForLayoutWidthDetermination;
-(BOOL)_horizontalLayoutCanUseFullWidth;
-(double)_layoutWidthForHorizontalLayout:(BOOL)arg1 ;
-(double)_availableWidthForHorizontalLayout:(BOOL)arg1 ;
-(void)_associateActionsWithActionViews;
-(double)_marginBetweenInterfaceActionGroups;
-(void)updateConstraints;
-(void)_prepareMainInterfaceActionsGroupView;
-(_UIFlexibleConstantConstraintSet *)messageLabelTopAlignmentConstraints;
-(BOOL)_hasMessage;
-(double)effectAlpha;
-(void)_prepareDiscreteCancelActionGroupView;
-(void)_updateCancelActionBeingDiscrete;
-(void)_updateActionsGroupPresentationStyles;
-(id)cancelAction;
-(NSLayoutConstraint *)discreteCancelActionViewTopConstraint;
-(void)setTitleLabelTopAlignmentConstraints:(_UIFlexibleConstantConstraintSet *)arg1 ;
-(void)setContentScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_indexesOfActionSectionSeparators;
-(void)_reevaluateSuperviewSizingConstraints;
-(CGSize)_layoutSize;
-(void)didMoveToWindow;
-(NSLayoutConstraint *)heightConstraint;
-(BOOL)hasDiscreteHorizontalCancelAction;
-(void)setForegroundViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIFlexibleConstantConstraintSet *)titleLabelTopAlignmentConstraints;
-(NSLayoutConstraint *)contentScrollViewBottomConstraint;
-(void)setCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_prepareViewsAndAddConstraints;
-(void)_prepareDimmingViewConstraints;
-(void)_actionLayoutDirectionChanged;
-(NSLayoutConstraint *)centerYConstraint;
-(void)_applyDetailMessageConstraints;
-(void)_recomputeAlertControllerWidth;
-(NSLayoutConstraint *)contentViewMaxHeightConstraint;
-(void)_prepareContentViewTopItemsView;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateActionViewVisualStyle:(id)arg1 ;
-(CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1 ;
-(BOOL)_canLayOutActionsHorizontally;
-(NSLayoutConstraint *)foregroundViewWidthConstraint;
-(void)_updateInsets;
-(BOOL)isSpringLoaded;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(void)_actionsChanged;
-(id)_attributedTitle;
-(void)setEffectAlpha:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)_setAttributedTitle:(id)arg1 ;
-(void)_prepareContentView;
-(void)_setLayoutSize:(CGSize)arg1 ;
-(void)safeAreaInsetsDidChange;
-(BOOL)_actionsReversed;
-(void)setCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_focusedAction;
-(UIEdgeInsets)_contentInsets;
-(BOOL)alignsToKeyboard;
-(void)_accessibilityColorsChanged;
-(void)_updateMessageLabelContents;
-(void)_updateMessageLabelFontSize;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)_updateStyleForIdiomChange:(BOOL)arg1 ;
-(BOOL)_hasTextFields;
-(BOOL)hasDimmingView;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(void)deselectAllActions;
-(id)_attributedDetailMessage;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_textFieldViewController;
-(void)setTintAdjustmentMode:(long long)arg1 ;
-(void)setShouldHaveBackdropView:(BOOL)arg1 ;
-(BOOL)_hasAttributedMessage;
-(void)setContentViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateTitleLabelContents;
-(void)_applyMessageConstraints;
-(BOOL)_hasDiscreteCancelAction;
-(void)setAlignsToKeyboard:(BOOL)arg1 ;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(id)_presentableAlertActions;
-(void)_setActionsReversed:(BOOL)arg1 ;
-(void)_updateTitleLabelFontSize;
-(CGSize)_minimumSizeForAllActions;
-(id)_newStyledBackgroundView;
-(BOOL)_hasDetailMessage;
-(id)_discreteCancelActionView;
-(id)_effectivePreferredAction;
-(long long)tintAdjustmentMode;
-(void)_prepareMesssageLabel;
-(void)_applyViewConstraints;
-(void)_updateLabelTextColor;
-(id)_preferredActionView;
-(void)_updateLabelFontSizes;
-(void)setActionViewMetrics:(_UIAlertControllerActionViewMetrics *)arg1 ;
-(double)_idealLayoutWidth;
-(BOOL)showsCancelAction;
-(_UIAlertControllerActionViewMetrics *)actionViewMetrics;
-(void)_prepareDetailMessageLabel;
-(void)_updateDetailLabelContents;
-(void)_updateDetailLabelFontSize;
-(double)_verticalLayoutWidth;
-(CGSize)_contentViewControllerSize;
-(void)_updateConstraintConstants;
-(void)setCancelActionIsDiscrete:(BOOL)arg1 ;
-(void)_updatePreferredAction;
-(void)setActionScrubbingEnabled:(BOOL)arg1 ;
-(void)_setAttributedMessage:(id)arg1 ;
-(void)_updateLabelProperties;
-(id)textFields;
-(void)_updateContentView;
-(BOOL)_hasAttributedTitle;
-(void)_textFieldsChanged;
-(void)setPresentedAsPopover:(BOOL)arg1 ;
-(void)setHasDimmingView:(BOOL)arg1 ;
-(void)_applyTitleConstraints;
-(BOOL)actionScrubbingEnabled;
-(id)_attributedMessage;
-(double)_labelHorizontalInsets;
-(BOOL)cancelActionIsDiscrete;
-(BOOL)presentedAsPopover;
-(void)_propertiesChanged;
-(BOOL)shouldHaveBackdropView;
-(void)_contentSizeChanged;
-(void)updateObservations:(id)arg1 ;
-(void)_prepareDimmingView;
-(void)_setVisualStyle:(id)arg1 ;
-(void)_prepareTitleLabel;
-(id)__cancelActionView;
-(BOOL)_buttonsAreTopMost;
-(void)_recomputeActionMetrics;
-(id)title;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(void)_updateActionViewHeight;
-(BOOL)_actionLayoutIsVertical;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

