/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIContextMenuActionsListViewDelegate;
@class UIMenu, UICollectionView, UIView, _UICutoutShadowView, UICollectionViewDiffableDataSource, _UIContextMenuSelectionGestureRecognizer, _UIContextMenuSelectionDelayGestureRecognizer, UIHoverGestureRecognizer, NSIndexPath, UISelectionFeedbackGenerator, NSString;

@interface _UIContextMenuActionsListView : UIView <UIGestureRecognizerDelegate> {

	BOOL _surfacesActionRadius;
	BOOL _showsShadow;
	BOOL _showsTitle;
	BOOL _reversesActionOrder;
	BOOL _scrubbingEnabled;
	id<_UIContextMenuActionsListViewDelegate> _delegate;
	UIMenu* _displayedMenu;
	UICollectionView* _currentCollectionView;
	UIView* _clippingView;
	_UICutoutShadowView* _shadowView;
	UICollectionViewDiffableDataSource* _collectionViewDataSource;
	_UIContextMenuSelectionGestureRecognizer* _selectionGestureRecognizer;
	_UIContextMenuSelectionDelayGestureRecognizer* _selectionDelayGestureRecognizer;
	UIHoverGestureRecognizer* _highlightHoverGestureRecognizer;
	NSIndexPath* _highlightedIndexPath;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	CGSize _visibleContentSize;

}

@property (nonatomic,retain) UIMenu * displayedMenu;                                                                       //@synthesize displayedMenu=_displayedMenu - In the implementation block
@property (nonatomic,retain) UICollectionView * currentCollectionView;                                                     //@synthesize currentCollectionView=_currentCollectionView - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                                                                        //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) _UICutoutShadowView * shadowView;                                                             //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * collectionViewDataSource;                                //@synthesize collectionViewDataSource=_collectionViewDataSource - In the implementation block
@property (nonatomic,retain) _UIContextMenuSelectionGestureRecognizer * selectionGestureRecognizer;                        //@synthesize selectionGestureRecognizer=_selectionGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIContextMenuSelectionDelayGestureRecognizer * selectionDelayGestureRecognizer;              //@synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHoverGestureRecognizer * highlightHoverGestureRecognizer;                                   //@synthesize highlightHoverGestureRecognizer=_highlightHoverGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSIndexPath * highlightedIndexPath;                                                             //@synthesize highlightedIndexPath=_highlightedIndexPath - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;                                             //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<_UIContextMenuActionsListViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL surfacesActionRadius;                                                                    //@synthesize surfacesActionRadius=_surfacesActionRadius - In the implementation block
@property (assign,nonatomic) BOOL showsShadow;                                                                             //@synthesize showsShadow=_showsShadow - In the implementation block
@property (assign,nonatomic) BOOL showsTitle;                                                                              //@synthesize showsTitle=_showsTitle - In the implementation block
@property (assign,nonatomic) BOOL reversesActionOrder;                                                                     //@synthesize reversesActionOrder=_reversesActionOrder - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                                        //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) CGSize visibleContentSize;                                                                    //@synthesize visibleContentSize=_visibleContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2 alongsideAnimations:(/*^block*/id)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<_UIContextMenuActionsListViewDelegate>)delegate;
-(void)_setHighlightedIndexPath:(id)arg1 animated:(BOOL)arg2 playFeedback:(BOOL)arg3 ;
-(void)_updateSelectionGestureAllowableMovement;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(_UIContextMenuSelectionGestureRecognizer *)selectionGestureRecognizer;
-(_UICutoutShadowView *)shadowView;
-(void)kickstartActionScrubbingWithGesture:(id)arg1 ;
-(void)_handleHoverGestureRecognizer:(id)arg1 ;
-(void)_configureCell:(id)arg1 forElement:(id)arg2 section:(id)arg3 ;
-(UIView *)clippingView;
-(void)setSelectionDelayGestureRecognizer:(_UIContextMenuSelectionDelayGestureRecognizer *)arg1 ;
-(void)setHighlightHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg1 ;
-(BOOL)showsTitle;
-(void)setDelegate:(id<_UIContextMenuActionsListViewDelegate>)arg1 ;
-(BOOL)showsShadow;
-(void)layoutSubviews;
-(UIHoverGestureRecognizer *)highlightHoverGestureRecognizer;
-(void)_sizeClippingAndCollectionViews;
-(void)setSelectionGestureRecognizer:(_UIContextMenuSelectionGestureRecognizer *)arg1 ;
-(CGSize)preferredContentSizeWithWidth:(double)arg1 ;
-(id)_dataSourceForCollectionView:(id)arg1 ;
-(BOOL)scrubbingEnabled;
-(UIMenu *)displayedMenu;
-(void)setShowsShadow:(BOOL)arg1 ;
-(void)setShowsTitle:(BOOL)arg1 ;
-(void)setShadowView:(_UICutoutShadowView *)arg1 ;
-(void)setCurrentCollectionView:(UICollectionView *)arg1 ;
-(void)_handleSelectionGesture:(id)arg1 ;
-(UICollectionViewDiffableDataSource *)collectionViewDataSource;
-(void)_performActionForElement:(id)arg1 ;
-(void)setSurfacesActionRadius:(BOOL)arg1 ;
-(void)setCollectionViewDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)setHighlightedIndexPath:(NSIndexPath *)arg1 ;
-(void)setDisplayedMenu:(UIMenu *)arg1 ;
-(UICollectionView *)currentCollectionView;
-(double)_clampedCornerRadius;
-(NSIndexPath *)highlightedIndexPath;
-(void)_testing_tapAnAction;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(BOOL)surfacesActionRadius;
-(void)setVisibleContentSize:(CGSize)arg1 ;
-(BOOL)reversesActionOrder;
-(void)scrollToFirstAction;
-(CGSize)visibleContentSize;
-(void)setReversesActionOrder:(BOOL)arg1 ;
-(void)setClippingView:(UIView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(_UIContextMenuSelectionDelayGestureRecognizer *)selectionDelayGestureRecognizer;
@end

