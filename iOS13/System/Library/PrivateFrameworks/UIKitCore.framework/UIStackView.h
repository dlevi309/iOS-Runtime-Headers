/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, _UIOrderedLayoutArrangement, _UIAlignedLayoutArrangement, NSArray;

@interface UIStackView : UIView {

	NSMutableArray* _mutableLayoutArrangements;
	_UIOrderedLayoutArrangement* _distributionArrangement;
	_UIAlignedLayoutArrangement* _alignmentArrangement;
	BOOL _didRequestTallestBaselineViewForFirst;
	BOOL _didRequestTallestBaselineViewForLast;
	BOOL _viewForFirstBaselineLayoutDidChange;
	BOOL _viewForLastBaselineLayoutDidChange;
	BOOL _layoutMarginsRelativeArrangement;

}

@property (nonatomic,copy,readonly) NSArray * arrangedSubviews; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) long long distribution; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) double spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) BOOL layoutMarginsRelativeArrangement;              //@synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement - In the implementation block
+(Class)layerClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)spacing;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(long long)axis;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)updateConstraints;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setDistribution:(long long)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(double)_calculatedIntrinsicHeight;
-(NSArray *)arrangedSubviews;
-(void)removeArrangedSubview:(id)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(long long)distribution;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(BOOL)_hasLayoutArrangements;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(BOOL*)arg4 ;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)_vendedBaselineViewParametersDidChange;
-(id)_mutableLayoutArrangements;
-(BOOL)isBaselineRelativeArrangement;
-(void)_vendedBaselineViewDidMoveForFirst:(BOOL)arg1 ;
-(double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2 ;
-(void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1 ;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)arg1 ;
-(id)_baselineViewForFirst:(BOOL)arg1 ;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(double)customSpacingAfterView:(id)arg1 ;
-(BOOL)_recordBaselineLoweringInfo;
@end

