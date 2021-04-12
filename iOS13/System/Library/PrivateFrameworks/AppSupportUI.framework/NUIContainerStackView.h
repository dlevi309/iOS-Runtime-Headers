/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIGridArrangementContainer.h>

@class NSString;

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer> {

	NUIGridArrangement* _arrangement;
	SCD_Struct_NU18 _visibleCount;
	map<UIView *, double, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, double> > >* _customSpacings;
	struct {
		unsigned alignment : 8;
		unsigned distribution : 8;
		unsigned axis : 4;
	}  _stackViewFlags;
	double _spacing;

}

@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) long long distribution; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) double spacing;                        //@synthesize spacing=_spacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerStackViewWithAxis:(long long)arg1 arrangedSubviews:(id)arg2 ;
+(id)horizontalContainerStackViewWithArrangedSubviews:(id)arg1 ;
+(id)verticalContainerStackViewWithArrangedSubviews:(id)arg1 ;
-(void)dealloc;
-(double)spacing;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(long long)axis;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDistribution:(long long)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(long long)distribution;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(double)customSpacingAfterView:(id)arg1 ;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)arrangedDescription;
-(CGSize)_calculateArrangedSizeFittingSize:(CGSize)arg1 forLayout:(BOOL)arg2 ;
-(long long)_effectiveAlignmentForArrangedSubview:(id)arg1 ;
-(id)_baselineViewVendForFirstBaseline:(BOOL)arg1 ;
-(void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2 ;
@end

