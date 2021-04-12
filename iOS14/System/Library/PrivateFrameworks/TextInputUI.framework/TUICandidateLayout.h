/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, TUICandidateLayoutAttributes, NSIndexPath;

@interface TUICandidateLayout : UICollectionViewLayout <NSCopying> {

	NSMutableArray* _candidateAttributes;
	NSMutableDictionary* _dummyCandidateAttributes;
	NSMutableArray* _lineAttributes;
	NSMutableArray* _slottedCellSeparatorAttributes;
	NSMutableArray* _groupHeaderAttributes;
	TUICandidateLayoutAttributes* _customHeaderAttributes;
	BOOL _dirty;
	BOOL _candidateNumberEnabled;
	BOOL _showExtraLineBeforeFirstRow;
	BOOL _fillGridWithLines;
	BOOL _showsIndex;
	long long _rowType;
	long long _transitionState;
	long long _layoutOrientation;
	NSIndexPath* _oldFirstVisibleIndexPath;
	double _oldFirstVisibleOffset;
	double _customHeaderHeight;
	unsigned long long _columnsCount;
	double _singleSlottedCellMargin;
	CGPoint _gridLineOffset;
	UIEdgeInsets _gridPadding;
	UIEdgeInsets _gridLinePadding;

}

@property (assign,nonatomic) long long rowType;                                   //@synthesize rowType=_rowType - In the implementation block
@property (assign,nonatomic) long long transitionState;                           //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                         //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,retain) NSIndexPath * oldFirstVisibleIndexPath;              //@synthesize oldFirstVisibleIndexPath=_oldFirstVisibleIndexPath - In the implementation block
@property (assign,nonatomic) double oldFirstVisibleOffset;                        //@synthesize oldFirstVisibleOffset=_oldFirstVisibleOffset - In the implementation block
@property (assign,nonatomic) double customHeaderHeight;                           //@synthesize customHeaderHeight=_customHeaderHeight - In the implementation block
@property (assign,nonatomic) BOOL candidateNumberEnabled;                         //@synthesize candidateNumberEnabled=_candidateNumberEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long columnsCount;                     //@synthesize columnsCount=_columnsCount - In the implementation block
@property (assign,nonatomic) double singleSlottedCellMargin;                      //@synthesize singleSlottedCellMargin=_singleSlottedCellMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridPadding;                            //@synthesize gridPadding=_gridPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridLinePadding;                        //@synthesize gridLinePadding=_gridLinePadding - In the implementation block
@property (assign,nonatomic) CGPoint gridLineOffset;                              //@synthesize gridLineOffset=_gridLineOffset - In the implementation block
@property (assign,nonatomic) BOOL showExtraLineBeforeFirstRow;                    //@synthesize showExtraLineBeforeFirstRow=_showExtraLineBeforeFirstRow - In the implementation block
@property (assign,nonatomic) BOOL fillGridWithLines;                              //@synthesize fillGridWithLines=_fillGridWithLines - In the implementation block
@property (assign,nonatomic) BOOL showsIndex;                                     //@synthesize showsIndex=_showsIndex - In the implementation block
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(long long)layoutOrientation;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(void)setTransitionState:(long long)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(void)setColumnsCount:(unsigned long long)arg1 ;
-(void)setGridLineOffset:(CGPoint)arg1 ;
-(void)setShowExtraLineBeforeFirstRow:(BOOL)arg1 ;
-(void)setCandidateNumberEnabled:(BOOL)arg1 ;
-(void)setFillGridWithLines:(BOOL)arg1 ;
-(CGPoint)gridLineOffset;
-(BOOL)candidateNumberEnabled;
-(UIEdgeInsets)gridLinePadding;
-(BOOL)showsIndex;
-(BOOL)showExtraLineBeforeFirstRow;
-(BOOL)fillGridWithLines;
-(long long)rowType;
-(void)clearLayoutAttributes;
-(void)setRowType:(long long)arg1 ;
-(void)prepareLayoutForSingleRow;
-(void)layoutSlottedCandidates;
-(void)prepareLayoutForMultiRow;
-(void)rotateAttributesBy90Degrees;
-(void)justify:(id)arg1 rowStartX:(double)arg2 maxWidth:(double)arg3 remainingWidth:(double)arg4 endOfSection:(BOOL)arg5 ;
-(id)keyForDummyCandidateIndexPath:(id)arg1 ;
-(NSIndexPath *)oldFirstVisibleIndexPath;
-(void)setOldFirstVisibleIndexPath:(NSIndexPath *)arg1 ;
-(double)oldFirstVisibleOffset;
-(void)setOldFirstVisibleOffset:(double)arg1 ;
-(double)customHeaderHeight;
-(void)setCustomHeaderHeight:(double)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setSingleSlottedCellMargin:(double)arg1 ;
-(double)singleSlottedCellMargin;
-(long long)transitionState;
-(UIEdgeInsets)gridPadding;
-(unsigned long long)columnsCount;
-(void)setShowsIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGridPadding:(UIEdgeInsets)arg1 ;
-(void)setGridLinePadding:(UIEdgeInsets)arg1 ;
@end

