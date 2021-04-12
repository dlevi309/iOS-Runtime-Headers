/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIFlowArrangementContainer.h>

@class NSString;

@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer> {

	NUIFlowArrangement* _arrangement;
	struct {
		unsigned horzAlign : 8;
		unsigned vertAlign : 8;
	}  _flowFlags;

}

@property (assign,nonatomic) long long numberOfColumns; 
@property (assign,nonatomic) long long horizontalAlignment; 
@property (assign,nonatomic) long long verticalAlignment; 
@property (nonatomic,readonly) long long horizontalDistribution; 
@property (nonatomic,readonly) long long verticalDistribution; 
@property (assign,nonatomic) double rowSpacing; 
@property (assign,nonatomic) double columnSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerFlowViewWithArrangedSubviews:(id)arg1 ;
-(void)dealloc;
-(long long)numberOfColumns;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setNumberOfColumns:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(double)rowSpacing;
-(void)setRowSpacing:(double)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(void)populateFlowArrangementCells:(vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> >*)arg1 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)arrangedDescription;
-(void)setColumnSpacing:(double)arg1 ;
-(long long)horizontalDistribution;
-(void)setHorizontalDistribution:(long long)arg1 ;
-(long long)verticalDistribution;
-(void)setVerticalDistribution:(long long)arg1 ;
-(double)columnSpacing;
-(long long)_effectiveAlignmentForArrangedSubview:(id)arg1 inAxis:(long long)arg2 ;
@end

