/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDLayout.h>
#import <libobjc.A.dylib/TSWPLayoutTarget.h>

@class NSMutableArray, TSDCanvas, TSDLayout, NSString;

@interface SXTextTangierFlowLayout : TSDLayout <TSWPLayoutTarget> {

	NSMutableArray* _columns;

}

@property (nonatomic,retain) NSMutableArray * columns;                                               //@synthesize columns=_columns - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) const void* previousTargetTopicNumbers; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) const void* nextTargetTopicNumbers; 
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
-(void)dealloc;
-(CGPoint)position;
-(NSMutableArray *)columns;
-(void)setColumns:(NSMutableArray *)arg1 ;
-(unsigned)verticalAlignment;
-(CGPoint)anchorPoint;
-(unsigned long long)pageCount;
-(void)validate;
-(CGSize)minSize;
-(CGSize)maxSize;
-(TSDCanvas *)canvas;
-(unsigned long long)pageNumber;
-(CGSize)currentSize;
-(id)initWithInfo:(id)arg1 layout:(id)arg2 frame:(CGRect)arg3 ;
-(BOOL)shouldHyphenate;
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
-(const void*)previousTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(const void*)nextTargetTopicNumbers;
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
-(CGRect)maskRect;
-(TSDLayout *)parentLayoutForInlineAttachments;
-(BOOL)allowsLastLineTruncation;
-(unsigned)maxLineCount;
-(BOOL)ignoresEquationAlignment;
-(unsigned long long)characterPositionForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCharacterPosition:(unsigned long long)arg1 ;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)layoutGeometryFromInfo;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldProvideSizingGuides;
@end

