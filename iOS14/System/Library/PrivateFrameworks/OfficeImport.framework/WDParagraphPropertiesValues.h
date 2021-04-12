/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDStyle, WDBorder, WDShading, NSMutableData;

@interface WDParagraphPropertiesValues : NSObject {

	unsigned mBaseStyleOverridden : 1;
	unsigned mPageBreakBefore : 1;
	unsigned mPageBreakBeforeOverridden : 1;
	unsigned mListLevelOverridden : 1;
	unsigned mListIndexOverridden : 1;
	unsigned mTopBorderOverridden : 1;
	unsigned mLeftBorderOverridden : 1;
	unsigned mBottomBorderOverridden : 1;
	unsigned mRightBorderOverridden : 1;
	unsigned mBetweenBorderOverridden : 1;
	unsigned mBarBorderOverridden : 1;
	unsigned mShadingOverridden : 1;
	unsigned mDropCapOverridden : 1;
	unsigned mWidthOverridden : 1;
	unsigned mHeightOverridden : 1;
	unsigned mHeightRuleOverridden : 1;
	unsigned mVerticalSpaceOverridden : 1;
	unsigned mHorizontalSpaceOverridden : 1;
	unsigned mWrap : 1;
	unsigned mWrapOverridden : 1;
	unsigned mHorizontalAnchorOverridden : 1;
	unsigned mVerticalAnchorOverridden : 1;
	unsigned mHorizontalPositionOverridden : 1;
	unsigned mVerticalPositionOverridden : 1;
	unsigned mWrapCodeOverridden : 1;
	unsigned mAnchorLock : 1;
	unsigned mAnchorLockOverridden : 1;
	unsigned mSpaceBeforeOverridden : 1;
	unsigned mSpaceBeforeAuto : 1;
	unsigned mSpaceBeforeAutoOverridden : 1;
	unsigned mSpaceAfterOverridden : 1;
	unsigned mSpaceAfterAuto : 1;
	unsigned mSpaceAfterAutoOverridden : 1;
	unsigned mLineSpacingOverridden : 1;
	unsigned mLineSpacingRuleOverridden : 1;
	unsigned mLeftIndentOverridden : 1;
	unsigned mRightIndentOverridden : 1;
	unsigned mLeadingIndentOverridden : 1;
	unsigned mFollowingIndentOverridden : 1;
	unsigned mFirstLineIndentOverridden : 1;
	unsigned mLeftIndentCharsOverridden : 1;
	unsigned mRightIndentCharsOverridden : 1;
	unsigned mFirstLineIndentCharsOverridden : 1;
	unsigned mJustificationOverridden : 1;
	unsigned mPhysicalJustificationOverridden : 1;
	unsigned mOutlineLevelOverridden : 1;
	unsigned mKeepNextParagraphTogether : 1;
	unsigned mKeepNextParagraphTogetherOverridden : 1;
	unsigned mKeepLinesTogether : 1;
	unsigned mKeepLinesTogetherOverridden : 1;
	unsigned mSuppressAutoHyphens : 1;
	unsigned mSuppressAutoHyphensOverridden : 1;
	unsigned mSuppressLineNumbers : 1;
	unsigned mSuppressLineNumbersOverridden : 1;
	unsigned mWidowControl : 1;
	unsigned mWidowControlOverridden : 1;
	unsigned mKinsokuOff : 1;
	unsigned mKinsokuOffOverridden : 1;
	unsigned mTabStopAddedCountOverridden : 1;
	unsigned mTabStopDeletedCountOverridden : 1;
	unsigned mFormattingChangedOverridden : 1;
	unsigned mBiDi : 1;
	unsigned mBiDiOverridden : 1;
	unsigned mCachedRtl : 1;
	unsigned mCachedRtlOverridden : 1;
	unsigned mIndexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned mContextualSpacing : 1;
	unsigned mContextualSpacingOverridden : 1;
	char _wrapCode;
	unsigned char _horizontalAnchor;
	unsigned char _verticalAnchor;
	unsigned char _lineSpacingRule;
	unsigned char _heightRule;
	unsigned char _listLevel;
	unsigned char _justification;
	unsigned char _physicalJustification;
	unsigned char _formattingChanged;
	SCD_Struct_WD112 _dropCap;
	short _lineSpacing;
	short _leftIndent;
	short _rightIndent;
	short _leadingIndent;
	short _followingIndent;
	short _firstLineIndent;
	short _leftIndentChars;
	short _rightIndentChars;
	short _firstLineIndentChars;
	unsigned short _spaceBefore;
	unsigned short _spaceAfter;
	unsigned short _height;
	unsigned short _outlineLevel;
	unsigned short _indexToAuthorIDOfFormattingChange;
	WDStyle* _baseStyle;
	WDBorder* _topBorder;
	WDBorder* _leftBorder;
	WDBorder* _bottomBorder;
	WDBorder* _rightBorder;
	WDBorder* _betweenBorder;
	WDBorder* _barBorder;
	WDShading* _shading;
	NSMutableData* _tabStopAddedTable;
	NSMutableData* _tabStopDeletedTable;
	long long _listIndex;
	unsigned long long _tabStopAddedCount;
	unsigned long long _tabStopDeletedCount;
	long long _width;
	long long _verticalSpace;
	long long _horizontalSpace;
	long long _horizontalPosition;
	long long _verticalPosition;

}

@property (nonatomic,retain) WDStyle * baseStyle;                                 //@synthesize baseStyle=_baseStyle - In the implementation block
@property (nonatomic,retain) WDBorder * topBorder;                                //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,retain) WDBorder * leftBorder;                               //@synthesize leftBorder=_leftBorder - In the implementation block
@property (nonatomic,retain) WDBorder * bottomBorder;                             //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,retain) WDBorder * rightBorder;                              //@synthesize rightBorder=_rightBorder - In the implementation block
@property (nonatomic,retain) WDBorder * betweenBorder;                            //@synthesize betweenBorder=_betweenBorder - In the implementation block
@property (nonatomic,retain) WDBorder * barBorder;                                //@synthesize barBorder=_barBorder - In the implementation block
@property (nonatomic,retain) WDShading * shading;                                 //@synthesize shading=_shading - In the implementation block
@property (assign) SCD_Struct_WD112 dropCap;                                      //@synthesize dropCap=_dropCap - In the implementation block
@property (nonatomic,retain) NSMutableData * tabStopAddedTable;                   //@synthesize tabStopAddedTable=_tabStopAddedTable - In the implementation block
@property (nonatomic,retain) NSMutableData * tabStopDeletedTable;                 //@synthesize tabStopDeletedTable=_tabStopDeletedTable - In the implementation block
@property (assign) long long listIndex;                                           //@synthesize listIndex=_listIndex - In the implementation block
@property (assign) unsigned long long tabStopAddedCount;                          //@synthesize tabStopAddedCount=_tabStopAddedCount - In the implementation block
@property (assign) unsigned long long tabStopDeletedCount;                        //@synthesize tabStopDeletedCount=_tabStopDeletedCount - In the implementation block
@property (assign) long long width;                                               //@synthesize width=_width - In the implementation block
@property (assign) long long verticalSpace;                                       //@synthesize verticalSpace=_verticalSpace - In the implementation block
@property (assign) long long horizontalSpace;                                     //@synthesize horizontalSpace=_horizontalSpace - In the implementation block
@property (assign) long long horizontalPosition;                                  //@synthesize horizontalPosition=_horizontalPosition - In the implementation block
@property (assign) long long verticalPosition;                                    //@synthesize verticalPosition=_verticalPosition - In the implementation block
@property (assign) short lineSpacing;                                             //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign) short leftIndent;                                              //@synthesize leftIndent=_leftIndent - In the implementation block
@property (assign) short rightIndent;                                             //@synthesize rightIndent=_rightIndent - In the implementation block
@property (assign) short leadingIndent;                                           //@synthesize leadingIndent=_leadingIndent - In the implementation block
@property (assign) short followingIndent;                                         //@synthesize followingIndent=_followingIndent - In the implementation block
@property (assign) short firstLineIndent;                                         //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (assign) short leftIndentChars;                                         //@synthesize leftIndentChars=_leftIndentChars - In the implementation block
@property (assign) short rightIndentChars;                                        //@synthesize rightIndentChars=_rightIndentChars - In the implementation block
@property (assign) short firstLineIndentChars;                                    //@synthesize firstLineIndentChars=_firstLineIndentChars - In the implementation block
@property (assign) unsigned short spaceBefore;                                    //@synthesize spaceBefore=_spaceBefore - In the implementation block
@property (assign) unsigned short spaceAfter;                                     //@synthesize spaceAfter=_spaceAfter - In the implementation block
@property (assign) unsigned short height;                                         //@synthesize height=_height - In the implementation block
@property (assign) unsigned short outlineLevel;                                   //@synthesize outlineLevel=_outlineLevel - In the implementation block
@property (assign) unsigned short indexToAuthorIDOfFormattingChange;              //@synthesize indexToAuthorIDOfFormattingChange=_indexToAuthorIDOfFormattingChange - In the implementation block
@property (assign) char wrapCode;                                                 //@synthesize wrapCode=_wrapCode - In the implementation block
@property (assign) unsigned char horizontalAnchor;                                //@synthesize horizontalAnchor=_horizontalAnchor - In the implementation block
@property (assign) unsigned char verticalAnchor;                                  //@synthesize verticalAnchor=_verticalAnchor - In the implementation block
@property (assign) unsigned char lineSpacingRule;                                 //@synthesize lineSpacingRule=_lineSpacingRule - In the implementation block
@property (assign) unsigned char heightRule;                                      //@synthesize heightRule=_heightRule - In the implementation block
@property (assign) unsigned char listLevel;                                       //@synthesize listLevel=_listLevel - In the implementation block
@property (assign) unsigned char justification;                                   //@synthesize justification=_justification - In the implementation block
@property (assign) unsigned char physicalJustification;                           //@synthesize physicalJustification=_physicalJustification - In the implementation block
@property (assign) unsigned char formattingChanged;                               //@synthesize formattingChanged=_formattingChanged - In the implementation block
@property (assign) BOOL baseStyleOverridden; 
@property (assign) BOOL pageBreakBefore; 
@property (assign) BOOL pageBreakBeforeOverridden; 
@property (assign) BOOL listLevelOverridden; 
@property (assign) BOOL listIndexOverridden; 
@property (assign) BOOL topBorderOverridden; 
@property (assign) BOOL leftBorderOverridden; 
@property (assign) BOOL bottomBorderOverridden; 
@property (assign) BOOL rightBorderOverridden; 
@property (assign) BOOL betweenBorderOverridden; 
@property (assign) BOOL barBorderOverridden; 
@property (assign) BOOL shadingOverridden; 
@property (assign) BOOL dropCapOverridden; 
@property (assign) BOOL widthOverridden; 
@property (assign) BOOL heightOverridden; 
@property (assign) BOOL heightRuleOverridden; 
@property (assign) BOOL verticalSpaceOverridden; 
@property (assign) BOOL horizontalSpaceOverridden; 
@property (assign) BOOL wrap; 
@property (assign) BOOL wrapOverridden; 
@property (assign) BOOL horizontalAnchorOverridden; 
@property (assign) BOOL verticalAnchorOverridden; 
@property (assign) BOOL horizontalPositionOverridden; 
@property (assign) BOOL verticalPositionOverridden; 
@property (assign) BOOL wrapCodeOverridden; 
@property (assign) BOOL anchorLock; 
@property (assign) BOOL anchorLockOverridden; 
@property (assign) BOOL spaceBeforeOverridden; 
@property (assign) BOOL spaceBeforeAuto; 
@property (assign) BOOL spaceBeforeAutoOverridden; 
@property (assign) BOOL spaceAfterOverridden; 
@property (assign) BOOL spaceAfterAuto; 
@property (assign) BOOL spaceAfterAutoOverridden; 
@property (assign) BOOL lineSpacingOverridden; 
@property (assign) BOOL lineSpacingRuleOverridden; 
@property (assign) BOOL leftIndentOverridden; 
@property (assign) BOOL rightIndentOverridden; 
@property (assign) BOOL leadingIndentOverridden; 
@property (assign) BOOL followingIndentOverridden; 
@property (assign) BOOL firstLineIndentOverridden; 
@property (assign) BOOL leftIndentCharsOverridden; 
@property (assign) BOOL rightIndentCharsOverridden; 
@property (assign) BOOL firstLineIndentCharsOverridden; 
@property (assign) BOOL justificationOverridden; 
@property (assign) BOOL physicalJustificationOverridden; 
@property (assign) BOOL outlineLevelOverridden; 
@property (assign) BOOL keepNextParagraphTogether; 
@property (assign) BOOL keepNextParagraphTogetherOverridden; 
@property (assign) BOOL keepLinesTogether; 
@property (assign) BOOL keepLinesTogetherOverridden; 
@property (assign) BOOL suppressAutoHyphens; 
@property (assign) BOOL suppressAutoHyphensOverridden; 
@property (assign) BOOL suppressLineNumbers; 
@property (assign) BOOL suppressLineNumbersOverridden; 
@property (assign) BOOL widowControl; 
@property (assign) BOOL widowControlOverridden; 
@property (assign) BOOL kinsokuOff; 
@property (assign) BOOL kinsokuOffOverridden; 
@property (assign) BOOL tabStopAddedCountOverridden; 
@property (assign) BOOL tabStopDeletedCountOverridden; 
@property (assign) BOOL formattingChangedOverridden; 
@property (assign) BOOL biDi; 
@property (assign) BOOL biDiOverridden; 
@property (assign) BOOL cachedRtl; 
@property (assign) BOOL cachedRtlOverridden; 
@property (assign) BOOL indexToAuthorIDOfFormattingChangeOverridden; 
@property (assign) BOOL contextualSpacing; 
@property (assign) BOOL contextualSpacingOverridden; 
-(void)setHeight:(unsigned short)arg1 ;
-(void)setListIndex:(long long)arg1 ;
-(long long)width;
-(BOOL)wrap;
-(BOOL)biDi;
-(void)setRightBorder:(WDBorder *)arg1 ;
-(WDBorder *)rightBorder;
-(void)setWidth:(long long)arg1 ;
-(void)setBaseStyle:(WDStyle *)arg1 ;
-(WDStyle *)baseStyle;
-(unsigned short)height;
-(short)lineSpacing;
-(void)setLineSpacing:(short)arg1 ;
-(long long)listIndex;
-(void)setFirstLineIndent:(short)arg1 ;
-(short)firstLineIndent;
-(void)setWrap:(BOOL)arg1 ;
-(WDShading *)shading;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_WD112)dropCap;
-(WDBorder *)topBorder;
-(WDBorder *)bottomBorder;
-(void)setTopBorder:(WDBorder *)arg1 ;
-(void)setBottomBorder:(WDBorder *)arg1 ;
-(BOOL)pageBreakBefore;
-(void)setPageBreakBefore:(BOOL)arg1 ;
-(unsigned char)horizontalAnchor;
-(unsigned char)verticalAnchor;
-(long long)horizontalPosition;
-(long long)verticalPosition;
-(unsigned short)spaceAfter;
-(unsigned short)spaceBefore;
-(unsigned char)justification;
-(short)leftIndent;
-(short)rightIndent;
-(short)leadingIndent;
-(short)followingIndent;
-(unsigned char)listLevel;
-(WDBorder *)leftBorder;
-(void)setLeftBorder:(WDBorder *)arg1 ;
-(unsigned short)outlineLevel;
-(void)setOutlineLevel:(unsigned short)arg1 ;
-(void)setFormattingChanged:(unsigned char)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(unsigned char)formattingChanged;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(void)setJustification:(unsigned char)arg1 ;
-(void)setVerticalAnchor:(unsigned char)arg1 ;
-(void)setHorizontalAnchor:(unsigned char)arg1 ;
-(void)setVerticalPosition:(long long)arg1 ;
-(void)setHorizontalPosition:(long long)arg1 ;
-(BOOL)baseStyleOverridden;
-(BOOL)shadingOverridden;
-(void)setShading:(WDShading *)arg1 ;
-(void)setBaseStyleOverridden:(BOOL)arg1 ;
-(void)setFormattingChangedOverridden:(BOOL)arg1 ;
-(void)setShadingOverridden:(BOOL)arg1 ;
-(BOOL)formattingChangedOverridden;
-(BOOL)indexToAuthorIDOfFormattingChangeOverridden;
-(void)setIndexToAuthorIDOfFormattingChangeOverridden:(BOOL)arg1 ;
-(BOOL)pageBreakBeforeOverridden;
-(BOOL)listLevelOverridden;
-(void)setListLevel:(unsigned char)arg1 ;
-(BOOL)listIndexOverridden;
-(BOOL)widthOverridden;
-(BOOL)heightOverridden;
-(BOOL)heightRuleOverridden;
-(unsigned char)heightRule;
-(void)setHeightRule:(unsigned char)arg1 ;
-(BOOL)verticalSpaceOverridden;
-(long long)verticalSpace;
-(void)setVerticalSpace:(long long)arg1 ;
-(BOOL)horizontalSpaceOverridden;
-(long long)horizontalSpace;
-(void)setHorizontalSpace:(long long)arg1 ;
-(BOOL)wrapOverridden;
-(BOOL)horizontalAnchorOverridden;
-(BOOL)verticalAnchorOverridden;
-(BOOL)horizontalPositionOverridden;
-(BOOL)verticalPositionOverridden;
-(BOOL)wrapCodeOverridden;
-(char)wrapCode;
-(void)setWrapCode:(char)arg1 ;
-(BOOL)anchorLockOverridden;
-(BOOL)anchorLock;
-(void)setAnchorLock:(BOOL)arg1 ;
-(BOOL)spaceBeforeOverridden;
-(void)setSpaceBefore:(unsigned short)arg1 ;
-(BOOL)spaceBeforeAutoOverridden;
-(BOOL)spaceBeforeAuto;
-(void)setSpaceBeforeAuto:(BOOL)arg1 ;
-(BOOL)spaceAfterOverridden;
-(void)setSpaceAfter:(unsigned short)arg1 ;
-(BOOL)spaceAfterAutoOverridden;
-(BOOL)spaceAfterAuto;
-(void)setSpaceAfterAuto:(BOOL)arg1 ;
-(BOOL)lineSpacingOverridden;
-(BOOL)lineSpacingRuleOverridden;
-(unsigned char)lineSpacingRule;
-(void)setLineSpacingRule:(unsigned char)arg1 ;
-(BOOL)leftIndentOverridden;
-(void)setLeftIndent:(short)arg1 ;
-(BOOL)leadingIndentOverridden;
-(void)setLeadingIndent:(short)arg1 ;
-(BOOL)followingIndentOverridden;
-(void)setFollowingIndent:(short)arg1 ;
-(BOOL)rightIndentOverridden;
-(void)setRightIndent:(short)arg1 ;
-(BOOL)firstLineIndentOverridden;
-(BOOL)justificationOverridden;
-(BOOL)physicalJustificationOverridden;
-(unsigned char)physicalJustification;
-(void)setPhysicalJustification:(unsigned char)arg1 ;
-(BOOL)outlineLevelOverridden;
-(BOOL)keepNextParagraphTogetherOverridden;
-(BOOL)keepNextParagraphTogether;
-(void)setKeepNextParagraphTogether:(BOOL)arg1 ;
-(BOOL)keepLinesTogetherOverridden;
-(BOOL)keepLinesTogether;
-(void)setKeepLinesTogether:(BOOL)arg1 ;
-(BOOL)suppressAutoHyphensOverridden;
-(BOOL)suppressAutoHyphens;
-(void)setSuppressAutoHyphens:(BOOL)arg1 ;
-(BOOL)suppressLineNumbersOverridden;
-(BOOL)suppressLineNumbers;
-(void)setSuppressLineNumbers:(BOOL)arg1 ;
-(BOOL)widowControlOverridden;
-(BOOL)widowControl;
-(void)setWidowControl:(BOOL)arg1 ;
-(BOOL)biDiOverridden;
-(void)setBiDi:(BOOL)arg1 ;
-(BOOL)kinsokuOffOverridden;
-(BOOL)kinsokuOff;
-(void)setKinsokuOff:(BOOL)arg1 ;
-(BOOL)topBorderOverridden;
-(BOOL)leftBorderOverridden;
-(BOOL)bottomBorderOverridden;
-(BOOL)rightBorderOverridden;
-(BOOL)betweenBorderOverridden;
-(WDBorder *)betweenBorder;
-(BOOL)barBorderOverridden;
-(WDBorder *)barBorder;
-(BOOL)dropCapOverridden;
-(void)setDropCap:(SCD_Struct_WD112)arg1 ;
-(BOOL)tabStopAddedCountOverridden;
-(unsigned long long)tabStopAddedCount;
-(void)setTabStopAddedCount:(unsigned long long)arg1 ;
-(BOOL)tabStopDeletedCountOverridden;
-(void)setTabStopAddedTable:(NSMutableData *)arg1 ;
-(void)setTabStopDeletedTable:(NSMutableData *)arg1 ;
-(void)setPageBreakBeforeOverridden:(BOOL)arg1 ;
-(void)setListLevelOverridden:(BOOL)arg1 ;
-(void)setListIndexOverridden:(BOOL)arg1 ;
-(void)setDropCapOverridden:(BOOL)arg1 ;
-(void)setWidthOverridden:(BOOL)arg1 ;
-(void)setHeightOverridden:(BOOL)arg1 ;
-(void)setHeightRuleOverridden:(BOOL)arg1 ;
-(void)setVerticalSpaceOverridden:(BOOL)arg1 ;
-(void)setHorizontalSpaceOverridden:(BOOL)arg1 ;
-(void)setWrapOverridden:(BOOL)arg1 ;
-(void)setHorizontalAnchorOverridden:(BOOL)arg1 ;
-(void)setVerticalAnchorOverridden:(BOOL)arg1 ;
-(void)setHorizontalPositionOverridden:(BOOL)arg1 ;
-(void)setVerticalPositionOverridden:(BOOL)arg1 ;
-(void)setWrapCodeOverridden:(BOOL)arg1 ;
-(void)setAnchorLockOverridden:(BOOL)arg1 ;
-(void)setTopBorderOverridden:(BOOL)arg1 ;
-(void)setLeftBorderOverridden:(BOOL)arg1 ;
-(void)setBottomBorderOverridden:(BOOL)arg1 ;
-(void)setRightBorderOverridden:(BOOL)arg1 ;
-(void)setBetweenBorderOverridden:(BOOL)arg1 ;
-(void)setBetweenBorder:(WDBorder *)arg1 ;
-(void)setBarBorderOverridden:(BOOL)arg1 ;
-(void)setBarBorder:(WDBorder *)arg1 ;
-(void)setSpaceBeforeOverridden:(BOOL)arg1 ;
-(void)setSpaceBeforeAutoOverridden:(BOOL)arg1 ;
-(void)setSpaceAfterOverridden:(BOOL)arg1 ;
-(void)setSpaceAfterAutoOverridden:(BOOL)arg1 ;
-(void)setLineSpacingOverridden:(BOOL)arg1 ;
-(void)setLineSpacingRuleOverridden:(BOOL)arg1 ;
-(void)setLeftIndentOverridden:(BOOL)arg1 ;
-(void)setLeadingIndentOverridden:(BOOL)arg1 ;
-(void)setFollowingIndentOverridden:(BOOL)arg1 ;
-(void)setRightIndentOverridden:(BOOL)arg1 ;
-(void)setFirstLineIndentOverridden:(BOOL)arg1 ;
-(BOOL)leftIndentCharsOverridden;
-(short)leftIndentChars;
-(void)setLeftIndentChars:(short)arg1 ;
-(void)setLeftIndentCharsOverridden:(BOOL)arg1 ;
-(BOOL)rightIndentCharsOverridden;
-(short)rightIndentChars;
-(void)setRightIndentChars:(short)arg1 ;
-(void)setRightIndentCharsOverridden:(BOOL)arg1 ;
-(BOOL)firstLineIndentCharsOverridden;
-(short)firstLineIndentChars;
-(void)setFirstLineIndentChars:(short)arg1 ;
-(void)setFirstLineIndentCharsOverridden:(BOOL)arg1 ;
-(void)setJustificationOverridden:(BOOL)arg1 ;
-(void)setPhysicalJustificationOverridden:(BOOL)arg1 ;
-(void)setOutlineLevelOverridden:(BOOL)arg1 ;
-(void)setKeepNextParagraphTogetherOverridden:(BOOL)arg1 ;
-(void)setKeepLinesTogetherOverridden:(BOOL)arg1 ;
-(void)setSuppressAutoHyphensOverridden:(BOOL)arg1 ;
-(void)setSuppressLineNumbersOverridden:(BOOL)arg1 ;
-(void)setWidowControlOverridden:(BOOL)arg1 ;
-(void)setBiDiOverridden:(BOOL)arg1 ;
-(void)setKinsokuOffOverridden:(BOOL)arg1 ;
-(NSMutableData *)tabStopAddedTable;
-(void)setTabStopAddedCountOverridden:(BOOL)arg1 ;
-(NSMutableData *)tabStopDeletedTable;
-(void)setTabStopDeletedCount:(unsigned long long)arg1 ;
-(void)setTabStopDeletedCountOverridden:(BOOL)arg1 ;
-(unsigned long long)tabStopDeletedCount;
-(BOOL)contextualSpacingOverridden;
-(BOOL)contextualSpacing;
-(void)setContextualSpacing:(BOOL)arg1 ;
-(void)setContextualSpacingOverridden:(BOOL)arg1 ;
-(BOOL)cachedRtl;
-(void)setCachedRtl:(BOOL)arg1 ;
-(BOOL)cachedRtlOverridden;
-(void)setCachedRtlOverridden:(BOOL)arg1 ;
@end
