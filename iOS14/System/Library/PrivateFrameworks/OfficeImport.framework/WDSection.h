/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)bidi;
-(void)setLeftMargin:(long long)arg1 ;
-(void)setTopMargin:(long long)arg1 ;
-(void)setBottomMargin:(long long)arg1 ;
-(id)rightBorder;
-(int)textDirection;
-(long long)leftMargin;
-(id)description;
-(int)borderOffset;
-(id)initWithDocument:(id)arg1 ;
-(void)setColumnCount:(unsigned short)arg1 ;
-(void)setPageWidth:(long long)arg1 ;
-(void)setPageHeight:(long long)arg1 ;
-(long long)pageHeight;
-(long long)topMargin;
-(id)text;
-(unsigned)pageScale;
-(unsigned short)columnCount;
-(long long)bottomMargin;
-(WDDocument *)document;
-(void)setRightMargin:(long long)arg1 ;
-(long long)rightMargin;
-(long long)pageWidth;
-(id)topBorder;
-(id)bottomBorder;
-(long long)headerMargin;
-(long long)footerMargin;
-(void)setHeaderMargin:(long long)arg1 ;
-(void)setFooterMargin:(long long)arg1 ;
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

