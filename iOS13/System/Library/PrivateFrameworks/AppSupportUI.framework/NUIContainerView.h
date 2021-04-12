/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUIContainerViewDelegate;
@class NSMutableArray, NSArray, NUIMultilineSizingHelper, UIView;

@interface NUIContainerView : UIView {

	BOOL _isRTL;
	id<NUIContainerViewDelegate> _delegate;
	map<UIView *, _NUIContainerViewArrangedSubview, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, _NUIContainerViewArrangedSubview> > >* _arrangedSubviewInfo;
	NSMutableArray* _arrangedSubviews;
	NSArray* _visibleArrangedSubviews;
	NUIMultilineSizingHelper* _multilineSizeHelper;
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
		unsigned inEnsureArranged : 1;
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
@property (assign,nonatomic,__weak) id<NUIContainerViewDelegate> delegate; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) BOOL layoutMarginsRelativeArrangement; 
@property (assign,getter=hasBaselineRelativeLayoutMarginsForArrangement,nonatomic) BOOL baselineRelativeLayoutMarginsForArrangement; 
+(void)initialize;
+(Class)layerClass;
+(BOOL)requiresConstraintBasedLayout;
+(BOOL)isDebugBoundingBoxesEnabled;
+(BOOL)enableAPIMisuseAssertions;
+(void)setEnableAPIMisuseAssertions:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id<NUIContainerViewDelegate>)delegate;
-(void)setDelegate:(id<NUIContainerViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)invalidateIntrinsicContentSize;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)layoutMarginsDidChange;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(NSArray *)arrangedSubviews;
-(void)removeArrangedSubview:(id)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(BOOL)isBaselineRelativeArrangement;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(BOOL)canCancelMeasurementForCompression;
-(BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)arg1 ;
-(BOOL)_isContainerView;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)assertNotInLayoutPass:(BOOL)arg1 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)beginBatchUpdates;
-(void)endBatchUpdates;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(unsigned)_countHiddenArrangesSubviews;
-(void)_addAsSubviewIfNeeded:(id)arg1 ;
-(void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2 ;
-(UIEdgeInsets)effectiveLayoutMargins;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(CGRect)effectiveLayoutBounds;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(void)_updateDebugBoundingBoxesIfNeeded;
-(NSArray *)visibleArrangedSubviews;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(void)visibilityDidChangeForArrangedSubview:(id)arg1 ;
-(void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1 ;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)arrangedDescription;
-(BOOL)isDebugBoundingBoxesEnabled;
-(BOOL)_verifyInternalConsistencyWarningOnly:(BOOL)arg1 ;
-(void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfArrangedSubview:(id)arg1 ;
-(void)setBaselineRelativeLayoutMarginsForArrangement:(BOOL)arg1 ;
-(BOOL)hasBaselineRelativeLayoutMarginsForArrangement;
-(long long)alignmentForView:(id)arg1 inAxis:(long long)arg2 ;
-(void)setAlignment:(long long)arg1 forView:(id)arg2 inAxis:(long long)arg3 ;
-(NSDirectionalEdgeInsets)minimumSpacingAdjacentToView:(id)arg1 ;
-(void)setMinimumSpacing:(NSDirectionalEdgeInsets)arg1 adjacentToView:(id)arg2 ;
-(BOOL)mustRestartMeasurement;
-(BOOL)isInBatchUpdate;
-(void)ensureArrangedSubviewsAreValid;
-(BOOL)isInLayoutPass;
-(id)debugDictionaryForVisibleArrangedSubview:(id)arg1 ;
-(id)debugSetDelegateRespondsToSelectors;
-(id)debugSetEnabledFlags;
-(void)setDebugBoundingBoxesEnabled:(BOOL)arg1 ;
@end

