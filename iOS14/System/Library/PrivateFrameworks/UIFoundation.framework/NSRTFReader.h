/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableAttributedString, NSMutableArray, NSMutableDictionary, NSData, NSFileWrapper, NSMutableData, NSMapTable, NSColor, NSArray, NSTextTable, NSCalendar;

@interface NSRTFReader : NSObject {

	NSMutableAttributedString* _topAttributedString;
	NSMutableAttributedString* _curAttributedString;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSData* _rtfData;
	NSMutableDictionary* _fontTable;
	NSFileWrapper* _document;
	SCD_Union_NS47 _textBuffer;
	unsigned long long _textBufferIndex;
	int _rtfVersion;
	int _cocoaVersion;
	int _cocoaSubVersion;
	int _readOnly;
	int _usesScreenFonts;
	int _colorTblColorSpace;
	unsigned _defaultToUniCharEncoding;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	CGSize _paperSize;
	double _lMargin;
	double _rMargin;
	double _bMargin;
	double _tMargin;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMapTable* _cachedRTFFontTable;
	double _hyphenationFactor;
	double _defaultTabInterval;
	NSColor* _documentBackgroundColor;
	NSRTFPriv* _private;
	BOOL _textBufferContentsIsFat;
	BOOL _explicitCharSetEncountered;
	BOOL _isRTLDocument;
	long long _readLimit;
	long long _thumbnailLimit;
	BOOL _limitReached;
	unsigned char _textFlow;
	NSMutableArray* _layoutOrientationSections;
	unsigned long long _verticalOrientationLocation;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	NSTextTable* _currentTable;
	NSTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;
	BOOL _setTableCells;
	unsigned long long _currentBorderEdge;
	BOOL _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;
	NSCalendar* _gregorianCalendar;
	NSMutableDictionary* _fontAttributesTable;
	long long _cocoaTextScaling;
	long long _cocoaPlatform;
	long long _targetTextScaling;
	long long _sourceTextScaling;
	long long _finalTextScaling;

}
-(void)setHyphenationFactor:(float)arg1 ;
-(CGSize)viewSize;
-(void)finalize;
-(double)defaultTabInterval;
-(void)setDefaultTabInterval:(double)arg1 ;
-(id)_currentTable;
-(unsigned long long)textFlow;
-(void)_setRTFDFileWrapper:(id)arg1 ;
-(id)_mutableParagraphStyle;
-(id)_RTFDFileWrapper;
-(void)_addListDefinition:(id)arg1 forKey:(long long)arg2 ;
-(void)setPaperSize:(CGSize)arg1 ;
-(void)setViewKind:(long long)arg1 ;
-(void)setViewScale:(long long)arg1 ;
-(void)setLeftMargin:(double)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(void)setTextFlow:(unsigned long long)arg1 ;
-(long long)cocoaPlatform;
-(long long)cocoaTextScaling;
-(void)_endTableCell;
-(id)_currentTableCell;
-(unsigned long long)_currentBorderEdge;
-(BOOL)_currentBorderIsTable;
-(BOOL)_currentTableCellIsPlaceholder;
-(void)_lastTableRow;
-(void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(BOOL)arg2 ;
-(void)_setTableNestingLevel:(long long)arg1 ;
-(void)_startTableRowDefinition;
-(void)_endTableCellDefinition;
-(void)_paragraphInTable;
-(void)_endTableRow;
-(void)_mergeTableCellsHorizontally;
-(void)_mergeTableCellsVertically;
-(long long)_currentListNumber;
-(id)initWithPath:(id)arg1 ;
-(id)attributedStringToEndOfGroup;
-(id)attributesAtEndOfGroup;
-(void)_setCurrentListNumber:(long long)arg1 ;
-(long long)_currentListLevel;
-(void)_pushState;
-(void)_setCurrentListLevel:(long long)arg1 ;
-(id)_listDefinitions;
-(void)_addOverride:(long long)arg1 forKey:(long long)arg2 ;
-(void)processString:(id)arg1 ;
-(id)attributedString;
-(void)setBackgroundColor:(id)arg1 ;
-(id)mutableAttributes;
-(id)mutableAttributedString;
-(CGSize)paperSize;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(long long)baseWritingDirection;
-(id)defaultParagraphStyle;
-(void)setRightMargin:(double)arg1 ;
-(void)_popState;
-(void)_updateAttributes;
-(id)initWithRTF:(id)arg1 ;
-(id)initWithRTFD:(id)arg1 ;
-(void)setMutableAttributedString:(id)arg1 ;
-(id)documentAttributes;
-(id)initWithRTFDFileWrapper:(id)arg1 ;
-(void)setThumbnailLimit:(long long)arg1 ;
-(void)setReadLimit:(long long)arg1 ;
-(void)_setTargetTextScaling:(long long)arg1 ;
-(void)_setSourceTextScaling:(long long)arg1 ;
-(void)dealloc;
@end

