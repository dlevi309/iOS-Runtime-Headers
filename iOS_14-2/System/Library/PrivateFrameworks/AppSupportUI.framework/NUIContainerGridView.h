/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIGridArrangementContainer.h>

@class NSMutableArray, NSArray, NSString;

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer> {

	NSMutableArray* _viewRows;
	NUIGridArrangement* _arrangement;
	SCD_Struct_NU18 _visibleCount;
	map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange> > > >* _viewRanges;
	CGSize _spacing;
	NSMutableArray* _rows;
	NSMutableArray* _columns;
	struct {
		unsigned horzAlign : 8;
		unsigned vertAlign : 8;
		unsigned inInsertOrRemove : 1;
		unsigned hasMutations : 1;
	}  _gridViewFlags;
	double _rowHeight;
	double _columnWidth;

}

@property (nonatomic,copy) NSArray * arrangedSubviewRows; 
@property (nonatomic,readonly) long long numberOfRows; 
@property (nonatomic,readonly) long long numberOfColumns; 
@property (assign,nonatomic) long long horizontalAlignment; 
@property (assign,nonatomic) long long verticalAlignment; 
@property (assign,nonatomic) long long horizontalDistribution; 
@property (assign,nonatomic) long long verticalDistribution; 
@property (assign,nonatomic) double rowSpacing; 
@property (assign,nonatomic) double columnSpacing; 
@property (assign,nonatomic) double rowHeight;                              //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double columnWidth;                            //@synthesize columnWidth=_columnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerGridViewWithArrangedSubviewRows:(id)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(id)viewForLastBaselineLayoutInRowAtIndex:(long long)arg1 ;
-(id)viewForFirstBaselineLayoutInRowAtIndex:(long long)arg1 ;
-(id)debugDictionaryForVisibleArrangedSubview:(id)arg1 ;
-(void)setVerticalDistribution:(long long)arg1 ;
-(id)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2 ;
-(id)columnAtIndex:(long long)arg1 ;
-(id)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)ensureArrangedSubviewsAreValid;
-(NSArray *)arrangedSubviewRows;
-(void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)setRowHeight:(double)arg1 ;
-(void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3 ;
-(void)getColumnRange:(NSRange*)arg1 rowRange:(NSRange*)arg2 forArrangedSubview:(id)arg3 ;
-(long long)numberOfRows;
-(id)initWithArrangedSubviewRows:(id)arg1 ;
-(long long)columnIndexForArrangedSubview:(id)arg1 ;
-(id)calculateViewForLastBaselineLayout;
-(void)setHorizontalDistribution:(long long)arg1 ;
-(void)removeRowAtIndex:(long long)arg1 ;
-(void)removeColumnAtIndex:(long long)arg1 ;
-(id)addRowWithArrangedSubviews:(id)arg1 ;
-(double)columnWidth;
-(void)setArrangedSubviewRows:(NSArray *)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(double)rowSpacing;
-(id)calculateViewForFirstBaselineLayout;
-(void)setRowSpacing:(double)arg1 ;
-(void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2 ;
-(long long)rowIndexForArrangedSubview:(id)arg1 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3 ;
-(void)setColumnWidth:(double)arg1 ;
-(id)addColumnWithArrangedSubviews:(id)arg1 ;
-(long long)horizontalDistribution;
-(long long)numberOfColumns;
-(id)rowAtIndex:(long long)arg1 ;
-(long long)verticalDistribution;
-(double)columnSpacing;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1 ;
-(id)debugDictionary;
-(id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2 ;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(double)rowHeight;
-(void)moveColumnAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)arrangedDescription;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(long long)horizontalAlignment;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(long long)verticalAlignment;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)dealloc;
@end

