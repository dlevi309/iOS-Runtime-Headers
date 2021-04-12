/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPLayoutTarget.h>
#import <TSReading/TSWPLayoutOwner.h>
#import <TSReading/TSWPColumnMetrics.h>

@protocol TSWPLayoutParent, TSWPStyleProvider;
@class TSWPStorage, NSObject, NSMutableArray, NSString, TSDCanvas, TSDLayout, TSWPPadding;

@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics> {

	TSWPStorage* _storage;
	NSObject*<TSWPLayoutParent> _layoutParent;
	id<TSWPStyleProvider> _styleProvider;
	NSMutableArray* _columns;
	CGSize _minSize;
	CGSize _maxSize;
	unsigned _flags;
	CGPoint _anchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSMutableArray * columns;                                      //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* previousTargetTopicNumbers; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* nextTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer; 
@property (nonatomic,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject*<TSDHint> nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) unsigned verticalAlignment; 
@property (nonatomic,readonly) unsigned naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) BOOL wantsLineFragments; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL layoutIsValid; 
@property (nonatomic,readonly) double maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) BOOL shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@property (nonatomic,readonly) BOOL allowsLastLineTruncation; 
@property (nonatomic,readonly) double reservedWidthWhenTruncating; 
@property (nonatomic,readonly) unsigned maxLineCount; 
@property (nonatomic,readonly) BOOL ignoresEquationAlignment; 
@property (nonatomic,readonly) BOOL allowsDescendersToClip; 
@property (nonatomic,readonly) BOOL pushAscendersIntoColumn; 
@property (nonatomic,readonly) BOOL alwaysAllowWordSplit; 
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(void)dealloc;
-(CGPoint)position;
-(unsigned long long)columnCount;
-(id)initWithStorage:(id)arg1 ;
-(NSMutableArray *)columns;
-(unsigned)verticalAlignment;
-(CGPoint)anchorPoint;
-(TSWPPadding *)layoutMargins;
-(unsigned long long)pageCount;
-(CGSize)minSize;
-(CGSize)maxSize;
-(unsigned long long)pageNumber;
-(CGSize)currentSize;
-(id)styleProvider;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(CGSize)adjustedInsets;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(id)textWrapper;
-(void)addAttachmentLayout:(id)arg1 ;
-(BOOL)shouldPositionAttachmentsIteratively;
-(unsigned long long)iterativeAttachmentPositioningMaxPassCount;
-(id)currentInlineDrawableLayouts;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(id)layoutForInlineDrawable:(id)arg1 ;
-(BOOL)isLayoutOffscreen;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)isLastTarget;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1 ;
-(CGRect)targetRectForCanvasRect:(CGRect)arg1 ;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(unsigned)autosizeFlags;
-(unsigned)naturalAlignment;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)textIsVertical;
-(BOOL)layoutIsValid;
-(double)maxAnchorY;
-(unsigned)maxLineCount;
-(BOOL)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(id)lineHintsForTarget:(id)arg1 ;
-(id)pLayoutWithMinSize:(CGSize)arg1 maxSize:(CGSize)arg2 anchor:(CGPoint)arg3 flags:(unsigned)arg4 ;
-(CGSize)measuredSizeWithFlags:(unsigned)arg1 ;
-(CGSize)measuredSizeWithFlags:(unsigned)arg1 maxSize:(CGSize)arg2 layoutParent:(id)arg3 styleProvider:(id)arg4 ;
@end

