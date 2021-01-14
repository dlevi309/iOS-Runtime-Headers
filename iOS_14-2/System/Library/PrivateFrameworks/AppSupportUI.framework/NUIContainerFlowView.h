/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNumberOfColumns:(long long)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)calculateViewForLastBaselineLayout;
-(double)rowSpacing;
-(id)calculateViewForFirstBaselineLayout;
-(void)setRowSpacing:(double)arg1 ;
-(long long)horizontalDistribution;
-(long long)numberOfColumns;
-(long long)verticalDistribution;
-(double)columnSpacing;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(id)arrangedDescription;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(long long)horizontalAlignment;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(void)populateFlowArrangementCells:(vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> >*)arg1 ;
-(long long)verticalAlignment;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)dealloc;
@end

