/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, NSArray, GKEditActionsView, GKStaticRenderContentView, CALayer, GKHairlineView, NSLayoutConstraint;

@interface GKCollectionViewCell : UICollectionViewCell {

	BOOL _shouldDisplaySwipeToEditAccessories;
	double _contentOriginX;
	BOOL _doesAbutLeftEdge;
	id _representedItem;
	UIView* _staticContentView;
	NSArray* _editActions;
	GKEditActionsView* _editActionsView;
	GKStaticRenderContentView* _contentRenderView;
	CALayer* _leftGradientMask;
	GKHairlineView* _topHairline;
	GKHairlineView* _bottomHairline;
	NSArray* _editActionsConstraints;
	NSArray* _hairlineConstraints;
	NSLayoutConstraint* _contentLeftConstraint;
	double _leadingMargin;
	double _trailingMargin;

}

@property (nonatomic,readonly) GKEditActionsView * editActionsView;                      //@synthesize editActionsView=_editActionsView - In the implementation block
@property (nonatomic,retain) UIView * staticContentView;                                 //@synthesize staticContentView=_staticContentView - In the implementation block
@property (nonatomic,retain) GKStaticRenderContentView * contentRenderView;              //@synthesize contentRenderView=_contentRenderView - In the implementation block
@property (nonatomic,retain) CALayer * leftGradientMask;                                 //@synthesize leftGradientMask=_leftGradientMask - In the implementation block
@property (assign,nonatomic) BOOL doesAbutLeftEdge;                                      //@synthesize doesAbutLeftEdge=_doesAbutLeftEdge - In the implementation block
@property (nonatomic,retain) GKHairlineView * topHairline;                               //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,retain) GKHairlineView * bottomHairline;                            //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (nonatomic,retain) NSArray * editActionsConstraints;                           //@synthesize editActionsConstraints=_editActionsConstraints - In the implementation block
@property (nonatomic,retain) NSArray * hairlineConstraints;                              //@synthesize hairlineConstraints=_hairlineConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentLeftConstraint;                 //@synthesize contentLeftConstraint=_contentLeftConstraint - In the implementation block
@property (assign,nonatomic) double leadingMargin;                                       //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                                      //@synthesize trailingMargin=_trailingMargin - In the implementation block
@property (nonatomic,retain) id representedItem;                                         //@synthesize representedItem=_representedItem - In the implementation block
@property (nonatomic,readonly) UIView * interactiveContentView; 
@property (nonatomic,readonly) CGRect alignmentRectForText; 
@property (nonatomic,retain) NSArray * editActions;                                      //@synthesize editActions=_editActions - In the implementation block
@property (assign,nonatomic) double editingContentOriginX; 
+(void)registerCellClassesWithCollectionView:(id)arg1 ;
-(id)popoverSourceView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setNeedsDisplay;
-(void)prepareForReuse;
-(void)finishEditing;
-(void)setTopHairline:(GKHairlineView *)arg1 ;
-(void)setBottomHairline:(GKHairlineView *)arg1 ;
-(void)layoutSubviews;
-(NSArray *)editActions;
-(void)updateConstraints;
-(double)leadingMargin;
-(void)_gkEnumerateSubviewsUsingBlock:(/*^block*/id)arg1 ;
-(void)prepareEditActionsConstraintsIfNeeded;
-(void)setShouldDisplaySwipeToEditAccessories:(BOOL)arg1 ;
-(void)setLeftGradientMask:(CALayer *)arg1 ;
-(CALayer *)leftGradientMask;
-(void)prepareHairlineConstraintsIfNeeded;
-(UIView *)staticContentView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)applyGradientMaskIfNeeded;
-(void)resetEditingContentOrigin;
-(void)didUpdateModel;
-(double)trailingMargin;
-(UIView *)interactiveContentView;
-(void)setDoesAbutLeftEdge:(BOOL)arg1 ;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(void)setEditActionsVisibleWidth:(double)arg1 ;
-(void)setEditingContentOriginX:(double)arg1 ;
-(CGRect)alignmentRectForText;
-(double)contentViewOriginXWhileEditing;
-(double)editActionsVisibleWidth;
-(void)animateOutSwipeToEditAccessories;
-(void)setUserInteractionEnabledForEditing:(BOOL)arg1 ;
-(BOOL)userInteractionEnabledForEditing;
-(BOOL)touchWithinEditActions:(id)arg1 ;
-(void)setRepresentedItem:(id)arg1 ;
-(void)closeForDelete;
-(id)representedItem;
-(GKHairlineView *)topHairline;
-(double)editingContentOriginX;
-(void)shutActionPaneAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setStaticContentView:(UIView *)arg1 ;
-(void)setEditActions:(NSArray *)arg1 ;
-(GKEditActionsView *)editActionsView;
-(GKStaticRenderContentView *)contentRenderView;
-(void)setContentRenderView:(GKStaticRenderContentView *)arg1 ;
-(BOOL)doesAbutLeftEdge;
-(NSArray *)editActionsConstraints;
-(void)setEditActionsConstraints:(NSArray *)arg1 ;
-(NSArray *)hairlineConstraints;
-(void)setHairlineConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)contentLeftConstraint;
-(void)setContentLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(GKHairlineView *)bottomHairline;
-(void)dealloc;
-(void)beginEditing;
@end

