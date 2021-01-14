/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDistribution:(long long)arg1 ;
-(long long)distribution;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)setAxis:(long long)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(long long)axis;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(BOOL*)arg4 ;
-(id)viewForLastBaselineLayout;
-(NSArray *)arrangedSubviews;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(double)_calculatedIntrinsicHeight;
-(long long)alignment;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)_vendedBaselineViewParametersDidChange;
-(id)_mutableLayoutArrangements;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(void)_vendedBaselineViewDidMoveForFirst:(BOOL)arg1 ;
-(double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2 ;
-(id)_baselineViewForFirst:(BOOL)arg1 ;
-(void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1 ;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)arg1 ;
-(BOOL)_recordBaselineLoweringInfo;
-(double)customSpacingAfterView:(id)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)updateConstraints;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(void)removeArrangedSubview:(id)arg1 ;
-(BOOL)_hasLayoutArrangements;
@end

