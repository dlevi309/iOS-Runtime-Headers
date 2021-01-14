/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet, NSMutableArray, _UIFlowLayoutInfo, NSArray;

@interface _UIFlowLayoutSection : NSObject {

	BOOL _isValid;
	CGRect _validRect;
	CGRect _rectToKeepValid;
	NSMutableSet* _invalidatedIndexPaths;
	BOOL _fixedItemSize;
	BOOL _lastRowIncomplete;
	NSMutableArray* _items;
	NSMutableArray* _rows;
	double _verticalInterstice;
	double _horizontalInterstice;
	double _headerDimension;
	double _footerDimension;
	_UIFlowLayoutInfo* _layoutInfo;
	double _otherMargin;
	double _beginMargin;
	double _endMargin;
	double _actualGap;
	double _lastRowBeginMargin;
	double _lastRowEndMargin;
	double _lastRowActualGap;
	long long _itemsCount;
	long long _itemsByRowCount;
	long long _indexOfIncompleteRow;
	SCD_Struct_UI46 _rowAlignmentOptions;
	CGSize _itemSize;
	NSRange _validItemRange;
	UIEdgeInsets _sectionMargins;
	CGRect _frame;
	CGRect _headerFrame;
	CGRect _footerFrame;

}

@property (nonatomic,readonly) NSMutableArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rows;                                             //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) double verticalInterstice;                                           //@synthesize verticalInterstice=_verticalInterstice - In the implementation block
@property (assign,nonatomic) double horizontalInterstice;                                         //@synthesize horizontalInterstice=_horizontalInterstice - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionMargins;                                         //@synthesize sectionMargins=_sectionMargins - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                        //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect headerFrame;                                                  //@synthesize headerFrame=_headerFrame - In the implementation block
@property (assign,nonatomic) CGRect footerFrame;                                                  //@synthesize footerFrame=_footerFrame - In the implementation block
@property (nonatomic,readonly) double headerDimension;                                            //@synthesize headerDimension=_headerDimension - In the implementation block
@property (nonatomic,readonly) double footerDimension;                                            //@synthesize footerDimension=_footerDimension - In the implementation block
@property (nonatomic,readonly) CGRect effectiveHeaderFrameWithSectionMarginsApplied; 
@property (nonatomic,readonly) CGRect effectiveFooterFrameWithSectionMarginsApplied; 
@property (assign,nonatomic,__weak) _UIFlowLayoutInfo * layoutInfo;                               //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI46 rowAlignmentOptions;                                 //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) BOOL fixedItemSize;                                                  //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) double otherMargin;                                                //@synthesize otherMargin=_otherMargin - In the implementation block
@property (nonatomic,readonly) double beginMargin;                                                //@synthesize beginMargin=_beginMargin - In the implementation block
@property (nonatomic,readonly) double endMargin;                                                  //@synthesize endMargin=_endMargin - In the implementation block
@property (nonatomic,readonly) double actualGap;                                                  //@synthesize actualGap=_actualGap - In the implementation block
@property (nonatomic,readonly) double lastRowBeginMargin;                                         //@synthesize lastRowBeginMargin=_lastRowBeginMargin - In the implementation block
@property (nonatomic,readonly) double lastRowEndMargin;                                           //@synthesize lastRowEndMargin=_lastRowEndMargin - In the implementation block
@property (nonatomic,readonly) double lastRowActualGap;                                           //@synthesize lastRowActualGap=_lastRowActualGap - In the implementation block
@property (nonatomic,readonly) BOOL lastRowIncomplete;                                            //@synthesize lastRowIncomplete=_lastRowIncomplete - In the implementation block
@property (assign,nonatomic) long long itemsCount;                                                //@synthesize itemsCount=_itemsCount - In the implementation block
@property (nonatomic,readonly) long long itemsByRowCount;                                         //@synthesize itemsByRowCount=_itemsByRowCount - In the implementation block
@property (nonatomic,readonly) long long indexOfIncompleteRow;                                    //@synthesize indexOfIncompleteRow=_indexOfIncompleteRow - In the implementation block
@property (nonatomic,readonly) NSRange validItemRange;                                            //@synthesize validItemRange=_validItemRange - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedIndexPaths; 
-(id)snapshot;
-(void)setFooterFrame:(CGRect)arg1 ;
-(void)setFixedItemSize:(BOOL)arg1 ;
-(void)setSectionMargins:(UIEdgeInsets)arg1 ;
-(CGSize)itemSize;
-(SCD_Struct_UI46)rowAlignmentOptions;
-(NSArray *)invalidatedIndexPaths;
-(id)init;
-(UIEdgeInsets)sectionMargins;
-(double)lastRowBeginMargin;
-(double)footerDimension;
-(id)addRowAtEnd:(BOOL)arg1 ;
-(CGRect)frame;
-(NSMutableArray *)rows;
-(long long)indexOfIncompleteRow;
-(double)lastRowEndMargin;
-(void)logInvalidSizesForHorizontalDirection:(BOOL)arg1 warnAboutDelegateValues:(BOOL)arg2 ;
-(BOOL)fixedItemSize;
-(void)computeLayoutValidatingForwardForIndexPath:(id)arg1 ;
-(_UIFlowLayoutInfo *)layoutInfo;
-(NSMutableArray *)items;
-(void)setRowAlignmentOptions:(SCD_Struct_UI46)arg1 ;
-(void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3 ;
-(double)beginMargin;
-(void)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3 ;
-(void)computeLayoutInRect:(CGRect)arg1 forSection:(long long)arg2 invalidating:(BOOL)arg3 invalidationContext:(id)arg4 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)copyFromLayoutInfo:(id)arg1 ;
-(void)updateEstimatedSizeForSection:(long long)arg1 ;
-(void)setHeaderFrame:(CGRect)arg1 ;
-(void)setEstimatedSize:(CGSize)arg1 forSection:(long long)arg2 ;
-(void)computeLayout;
-(CGRect)effectiveFooterFrameWithSectionMarginsApplied;
-(double)actualGap;
-(NSRange)validItemRange;
-(id)addItem;
-(double)horizontalInterstice;
-(double)endMargin;
-(void)logInvalidSizes;
-(BOOL)lastRowIncomplete;
-(void)setHeaderDimension:(double)arg1 forSection:(long long)arg2 ;
-(CGRect)footerFrame;
-(void)addInvalidatedIndexPath:(id)arg1 ;
-(long long)itemsCount;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)invalidate;
-(long long)itemsByRowCount;
-(void)updateSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(CGRect)effectiveHeaderFrameWithSectionMarginsApplied;
-(void)setHorizontalInterstice:(double)arg1 ;
-(void)setVerticalInterstice:(double)arg1 ;
-(void)setLayoutInfo:(_UIFlowLayoutInfo *)arg1 ;
-(void)setFooterDimension:(double)arg1 forSection:(long long)arg2 ;
-(long long)estimatedIndexOfItemAtPoint:(CGPoint)arg1 ;
-(double)verticalInterstice;
-(double)otherMargin;
-(double)headerDimension;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setItemsCount:(long long)arg1 ;
-(CGRect)headerFrame;
-(id)rowsInRect:(CGRect)arg1 ;
-(double)lastRowActualGap;
@end

