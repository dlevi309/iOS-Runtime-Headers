/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)_applyVisualStyleToSeparatedContentSequenceView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(unsigned long long)visualCornerPosition;
-(void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
-(BOOL)_isHorizontalLayout;
-(void)_loadDefaultSizingConstraints;
-(_UIInterfaceActionSeparatableSequenceView *)separatedContentSequenceView;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setActionLayoutAxis:(long long)arg1 ;
-(void)_notifyDidScroll;
-(BOOL)visualCornerForcedOverride;
-(void)setArrangedActionRepresentationViews:(NSArray *)arg1 ;
-(void)_disableSeparatedContentSequenceViewToFit;
-(NSArray *)arrangedActionRepresentationViews;
-(double)_minimumNumberOfRowsRequiredVisible;
-(void)reloadDisplayedContentVisualStyle;
-(void)_updateMinimumHeightConstraint;
-(void)_applyVisualStyle;
-(long long)actionLayoutAxis;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)_sizeByApplyingLayoutMarginsAsOutsetToSize:(CGSize)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(void)_enableSeparatedContentSequenceViewToFit;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(double)_contentFitCanScrollThreshold;
-(void)setVisualCornerForcedOverride:(BOOL)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
@end

