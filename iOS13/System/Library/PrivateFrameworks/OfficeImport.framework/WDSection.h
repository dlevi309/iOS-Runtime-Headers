/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDText, WDDocument;

@interface WDSection : NSObject {

	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDText* mText;
	WDText* mEvenPageHeader;
	WDText* mOddPageHeader;
	WDText* mFirstPageHeader;
	WDText* mEvenPageFooter;
	WDText* mOddPageFooter;
	WDText* mFirstPageFooter;
	SCD_Struct_WD113 mOriginalProperties;
	SCD_Struct_WD113 mTrackedProperties;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)description;
-(unsigned short)columnCount;
-(id)text;
-(void)setLeftMargin:(long long)arg1 ;
-(void)setRightMargin:(long long)arg1 ;
-(void)setTopMargin:(long long)arg1 ;
-(void)setBottomMargin:(long long)arg1 ;
-(long long)topMargin;
-(id)initWithDocument:(id)arg1 ;
-(long long)rightMargin;
-(WDDocument *)document;
-(id)rightBorder;
-(unsigned)pageScale;
-(int)textDirection;
-(void)setColumnCount:(unsigned short)arg1 ;
-(void)setPageWidth:(long long)arg1 ;
-(long long)pageWidth;
-(void)setPageHeight:(long long)arg1 ;
-(long long)pageHeight;
-(long long)bottomMargin;
-(int)borderOffset;
-(long long)leftMargin;
-(id)topBorder;
-(id)bottomBorder;
-(long long)headerMargin;
-(BOOL)isPageWidthOverridden;
-(BOOL)isPageHeightOverridden;
-(BOOL)isBreakTypeOverridden;
-(int)breakType;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTopMarginOverridden;
-(id)firstPageHeader;
-(id)oddPageHeader;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isTitlePageOverridden;
-(BOOL)titlePage;
-(id)evenPageHeader;
-(id)firstPageFooter;
-(id)oddPageFooter;
-(id)evenPageFooter;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)leftBorder;
-(void)setTextDirection:(int)arg1 ;
-(void)setHeaderMargin:(long long)arg1 ;
-(void)setFooterMargin:(long long)arg1 ;
-(long long)footerMargin;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(void)setBreakType:(int)arg1 ;
-(void)setPageOrientation:(int)arg1 ;
-(void)setGutterMargin:(long long)arg1 ;
-(void)setRtlGutter:(BOOL)arg1 ;
-(void)setBorderDepth:(int)arg1 ;
-(void)setBorderDisplay:(int)arg1 ;
-(void)setBorderOffset:(int)arg1 ;
-(void)setLineNumberStart:(short)arg1 ;
-(void)setLineNumberIncrement:(unsigned short)arg1 ;
-(void)setLineNumberDistance:(short)arg1 ;
-(void)setLineNumberRestart:(int)arg1 ;
-(void)setPageNumberFormat:(int)arg1 ;
-(void)setPageNumberStart:(unsigned short)arg1 ;
-(void)setPageNumberRestart:(BOOL)arg1 ;
-(void)setChapterNumberSeparator:(int)arg1 ;
-(void)setColumnsEqualWidth:(BOOL)arg1 ;
-(void)setBidi:(BOOL)arg1 ;
-(int)resolveMode;
-(BOOL)isColumnCountOverridden;
-(void)appendColumnWidth:(long long)arg1 ;
-(void)appendColumnSpace:(long long)arg1 ;
-(void)setColumnSpace:(long long)arg1 ;
-(void)setVerticalJustification:(int)arg1 ;
-(void)setTitlePage:(BOOL)arg1 ;
-(void)setFormattingChanged:(BOOL)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(BOOL)isPageOrientationOverridden;
-(int)pageOrientation;
-(BOOL)isHeaderMarginOverridden;
-(BOOL)isFooterMarginOverridden;
-(BOOL)isGutterMarginOverridden;
-(long long)gutterMargin;
-(BOOL)isRtlGutterOverridden;
-(BOOL)rtlGutter;
-(BOOL)isBorderDepthOverridden;
-(int)borderDepth;
-(BOOL)isBorderDisplayOverridden;
-(int)borderDisplay;
-(BOOL)isBorderOffsetOverridden;
-(BOOL)isLineNumberStartOverridden;
-(short)lineNumberStart;
-(BOOL)isLineNumberIncrementOverridden;
-(unsigned short)lineNumberIncrement;
-(BOOL)isLineNumberDistanceOverridden;
-(short)lineNumberDistance;
-(BOOL)isLineNumberRestartOverridden;
-(int)lineNumberRestart;
-(BOOL)isPageNumberFormatOverridden;
-(int)pageNumberFormat;
-(BOOL)isPageNumberStartOverridden;
-(unsigned short)pageNumberStart;
-(BOOL)isPageNumberRestartOverridden;
-(BOOL)pageNumberRestart;
-(BOOL)isChapterNumberSeparatorOverridden;
-(int)chapterNumberSeparator;
-(BOOL)isColumnsEqualWidthOverridden;
-(BOOL)columnsEqualWidth;
-(long long)columnWidthAt:(unsigned)arg1 ;
-(long long)columnSpaceAt:(unsigned)arg1 ;
-(BOOL)isColumnSpaceOverridden;
-(long long)columnSpace;
-(BOOL)isVerticalJustificationOverridden;
-(int)verticalJustification;
-(BOOL)isBidiOverridden;
-(BOOL)bidi;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)formattingChanged;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(BOOL)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(BOOL)isTextDirectionOverridden;
-(void)setPageScale:(unsigned)arg1 ;
-(BOOL)isPageScaleOverridden;
-(BOOL)isLastColumnWidthDefined;
-(BOOL)isColumnWidthDefinedAt:(unsigned)arg1 ;
@end

