/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUIContainerViewDelegate;
@class NSMutableArray, NSArray, UIView;

@interface NUIContainerView : UIView {

	BOOL _isRTL;
	id<NUIContainerViewDelegate> _delegate;
	map<UIView *, _NUIContainerViewArrangedSubview, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, _NUIContainerViewArrangedSubview> > >* _arrangedSubviewInfo;
	NSMutableArray* _arrangedSubviews;
	NSArray* _visibleArrangedSubviews;
	UIEdgeInsets _effectiveLayoutMargins;
	UIView* _firstBaselineView;
	UIView* _lastBaselineView;
	vector<CALayer *, std::__1::allocator<CALayer *> >* _debugBoundingBoxLayers;
	struct {
		unsigned hiddenArrangedSubviewCount : 16;
		unsigned delaydInvalidation : 8;
		unsigned batchDepth : 4;
		unsigned inLayoutPass : 2;
		unsigned inMeasurementPass : 2;
		unsigned layoutDependency : 2;
		unsigned removalPolicy : 2;
		unsigned removalPolicyHasBeenSet : 1;
		unsigned additionPolicy : 1;
		unsigned inEnsureArranged : 1;
		unsigned inEffectiveSize : 1;
		unsigned hasMargins : 1;
		unsigned sizeIsInvalid : 1;
		unsigned debugBoundingBoxes : 1;
		unsigned baselineRelative : 1;
		unsigned layoutMarginsRelative : 1;
		unsigned baselineLayoutMargins : 1;
		unsigned mustRestart : 1;
		unsigned delegateSystemLayoutSizeFittingSizeForArrangedSubview : 1;
		unsigned delegateLayoutFrameForArrangedSubview : 1;
		unsigned delegateWillMeasureFitting : 1;
		unsigned delegateShouldRestart : 1;
		unsigned delegateDidLayout : 1;
	}  _containerFlags;

}

@property (assign,getter=isDebugBoundingBoxesEnabled,nonatomic) BOOL debugBoundingBoxesEnabled; 
@property (nonatomic,copy) NSArray * arrangedSubviews; 
@property (nonatomic,readonly) NSArray * visibleArrangedSubviews; 
@property (assign,nonatomic) long long arrangedSubviewRemovalPolicy; 
@property (assign,nonatomic) long long arrangedSubviewAdditionPolicy; 
@property (assign,nonatomic,__weak) id<NUIContainerViewDelegate> delegate; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) BOOL layoutMarginsRelativeArrangement; 
@property (assign,getter=hasBaselineRelativeLayoutMarginsForArrangement,nonatomic) BOOL baselineRelativeLayoutMarginsForArrangement; 
+(void)initialize;
+(BOOL)isDebugBoundingBoxesEnabled;
+(BOOL)enableAPIMisuseAssertions;
+(void)setEnableAPIMisuseAssertions:(BOOL)arg1 ;
+(Class)layerClass;
+(BOOL)requiresConstraintBasedLayout;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)willRemoveSubview:(id)arg1 ;
-(id)debugDictionaryForVisibleArrangedSubview:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)viewForLastBaselineLayout;
-(NSArray *)arrangedSubviews;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)ensureArrangedSubviewsAreValid;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(id<NUIContainerViewDelegate>)delegate;
-(void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(id)calculateViewForLastBaselineLayout;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(id)calculateViewForFirstBaselineLayout;
-(void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2 ;
-(BOOL)_layoutHeightDependsOnWidth;
-(unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(void)setDelegate:(id<NUIContainerViewDelegate>)arg1 ;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(id)description;
-(void)layoutSubviews;
-(CGSize)effectiveLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(id)debugDictionary;
-(void)setMinimumSpacing:(NSDirectionalEdgeInsets)arg1 adjacentToView:(id)arg2 ;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(id)arrangedDescription;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(void)_setHasValidSize;
-(BOOL)canCancelMeasurementForCompression;
-(BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)arg1 ;
-(BOOL)_isContainerView;
-(UIEdgeInsets)effectiveLayoutMargins;
-(CGRect)effectiveLayoutBounds;
-(NSArray *)visibleArrangedSubviews;
-(void)visibilityDidChangeForArrangedSubview:(id)arg1 ;
-(void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1 ;
-(BOOL)isDebugBoundingBoxesEnabled;
-(void)setArrangedSubviewRemovalPolicy:(long long)arg1 ;
-(long long)arrangedSubviewRemovalPolicy;
-(void)setArrangedSubviewAdditionPolicy:(long long)arg1 ;
-(long long)arrangedSubviewAdditionPolicy;
-(void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)indexOfArrangedSubview:(id)arg1 ;
-(void)setBaselineRelativeLayoutMarginsForArrangement:(BOOL)arg1 ;
-(BOOL)hasBaselineRelativeLayoutMarginsForArrangement;
-(long long)alignmentForView:(id)arg1 inAxis:(long long)arg2 ;
-(void)setAlignment:(long long)arg1 forView:(id)arg2 inAxis:(long long)arg3 ;
-(CGPoint)positionAdjustmentOffsetForView:(id)arg1 ;
-(NSDirectionalEdgeInsets)minimumSpacingAdjacentToView:(id)arg1 ;
-(void)setPositionAdjustmentOffset:(CGPoint)arg1 forView:(id)arg2 ;
-(BOOL)mustRestartMeasurement;
-(BOOL)isInBatchUpdate;
-(void)assertNotInLayoutPass:(BOOL)arg1 ;
-(id)debugSetDelegateRespondsToSelectors;
-(id)debugSetEnabledFlags;
-(void)setDebugBoundingBoxesEnabled:(BOOL)arg1 ;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)removeArrangedSubview:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
@end

