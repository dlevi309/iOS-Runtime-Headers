/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIInterfaceActionVisualStyle, NSArray, NSLayoutConstraint, _UIInterfaceActionSeparatableSequenceView;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {

	long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
	BOOL _visualCornerForcedOverride;
	UIInterfaceActionVisualStyle* _visualStyle;
	NSArray* _arrangedActionRepresentationViews;
	long long _actionLayoutAxis;
	unsigned long long _visualCornerPosition;
	NSLayoutConstraint* _minimumHeightConstraint;
	_UIInterfaceActionSeparatableSequenceView* _separatedContentSequenceView;

}

@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                                          //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionSeparatableSequenceView * separatedContentSequenceView;              //@synthesize separatedContentSequenceView=_separatedContentSequenceView - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * arrangedActionRepresentationViews;                                             //@synthesize arrangedActionRepresentationViews=_arrangedActionRepresentationViews - In the implementation block
@property (assign,nonatomic) long long actionLayoutAxis;                                                              //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                                                 //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
@property (assign,nonatomic) BOOL visualCornerForcedOverride;                                                         //@synthesize visualCornerForcedOverride=_visualCornerForcedOverride - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)layoutSubviews;
-(unsigned long long)visualCornerPosition;
-(void)setActionLayoutAxis:(long long)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(NSArray *)arrangedActionRepresentationViews;
-(void)_applyVisualStyle;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(void)setArrangedActionRepresentationViews:(NSArray *)arg1 ;
-(long long)actionLayoutAxis;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(double)_contentFitCanScrollThreshold;
-(void)_loadDefaultSizingConstraints;
-(void)reloadDisplayedContentVisualStyle;
-(void)setVisualCornerForcedOverride:(BOOL)arg1 ;
-(void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
-(void)_disableSeparatedContentSequenceViewToFit;
-(void)_enableSeparatedContentSequenceViewToFit;
-(void)_notifyDidScroll;
-(void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
-(void)_updateMinimumHeightConstraint;
-(double)_minimumNumberOfRowsRequiredVisible;
-(BOOL)_isHorizontalLayout;
-(CGSize)_sizeByApplyingLayoutMarginsAsOutsetToSize:(CGSize)arg1 ;
-(void)_applyVisualStyleToSeparatedContentSequenceView;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)visualCornerForcedOverride;
-(_UIInterfaceActionSeparatableSequenceView *)separatedContentSequenceView;
@end

