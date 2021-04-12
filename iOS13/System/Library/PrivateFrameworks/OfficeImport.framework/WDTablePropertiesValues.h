/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDStyle, WDShading, WDBorder, NSDate;

@interface WDTablePropertiesValues : NSObject {

	unsigned mBaseStyleOverridden : 1;
	unsigned mLookOverridden : 1;
	unsigned mShadingOverridden : 1;
	unsigned mTopBorderOverridden : 1;
	unsigned mLeftBorderOverridden : 1;
	unsigned mBottomBorderOverridden : 1;
	unsigned mRightBorderOverridden : 1;
	unsigned mInsideHorizontalBorderOverridden : 1;
	unsigned mInsideVerticalBorderOverridden : 1;
	unsigned mJustificationOverridden : 1;
	unsigned mAlignmentOverridden : 1;
	unsigned mWidthOverridden : 1;
	unsigned mWidthTypeOverridden : 1;
	unsigned mIndentOverridden : 1;
	unsigned mIndentTypeOverridden : 1;
	unsigned mCellSpacingOverridden : 1;
	unsigned mCellSpacingTypeOverridden : 1;
	unsigned mVerticalAnchorOverridden : 1;
	unsigned mHorizontalAnchorOverridden : 1;
	unsigned mVerticalPositionOverridden : 1;
	unsigned mHorizontalPositionOverridden : 1;
	unsigned mLeftDistanceFromTextOverridden : 1;
	unsigned mTopDistanceFromTextOverridden : 1;
	unsigned mRightDistanceFromTextOverridden : 1;
	unsigned mBottomDistanceFromTextOverridden : 1;
	unsigned mDeletedOverridden : 1;
	unsigned mEditedOverridden : 1;
	unsigned mFormattingChangedOverridden : 1;
	unsigned mBiDirectionalOverridden : 1;
	unsigned mIndexToAuthorIDOfDeletionOverridden : 1;
	unsigned mIndexToAuthorIDOfEditOverridden : 1;
	unsigned mIndexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned mDeletionDateOverridden : 1;
	unsigned mEditDateOverridden : 1;
	unsigned mFormattingChangeDateOverridden : 1;
	BOOL _biDirectional;
	unsigned short _look;
	short _indent;
	short _cellSpacing;
	unsigned short _indexToAuthorIDOfDeletion;
	unsigned short _indexToAuthorIDOfEdit;
	unsigned short _indexToAuthorIDOfFormattingChange;
	int _justification;
	int _alignment;
	int _widthType;
	int _indentType;
	int _cellSpacingType;
	int _verticalAnchor;
	int _horizontalAnchor;
	int _deleted;
	int _edited;
	int _formattingChanged;
	WDStyle* _baseStyle;
	WDShading* _shading;
	WDBorder* _topBorder;
	WDBorder* _leftBorder;
	WDBorder* _bottomBorder;
	WDBorder* _rightBorder;
	WDBorder* _insideHorizontalBorder;
	WDBorder* _insideVerticalBorder;
	long long _width;
	long long _verticalPosition;
	long long _horizontalPosition;
	long long _leftDistanceFromText;
	long long _topDistanceFromText;
	long long _rightDistanceFromText;
	long long _bottomDistanceFromText;
	NSDate* _deletionDate;
	NSDate* _editDate;
	NSDate* _formattingChangeDate;

}

@property (assign,nonatomic,__weak) WDStyle * baseStyle;                          //@synthesize baseStyle=_baseStyle - In the implementation block
@property (assign) unsigned short look;                                           //@synthesize look=_look - In the implementation block
@property (nonatomic,retain) WDShading * shading;                                 //@synthesize shading=_shading - In the implementation block
@property (nonatomic,retain) WDBorder * topBorder;                                //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,retain) WDBorder * leftBorder;                               //@synthesize leftBorder=_leftBorder - In the implementation block
@property (nonatomic,retain) WDBorder * bottomBorder;                             //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,retain) WDBorder * rightBorder;                              //@synthesize rightBorder=_rightBorder - In the implementation block
@property (nonatomic,retain) WDBorder * insideHorizontalBorder;                   //@synthesize insideHorizontalBorder=_insideHorizontalBorder - In the implementation block
@property (nonatomic,retain) WDBorder * insideVerticalBorder;                     //@synthesize insideVerticalBorder=_insideVerticalBorder - In the implementation block
@property (assign) int justification;                                             //@synthesize justification=_justification - In the implementation block
@property (assign) int alignment;                                                 //@synthesize alignment=_alignment - In the implementation block
@property (assign) long long width;                                               //@synthesize width=_width - In the implementation block
@property (assign) int widthType;                                                 //@synthesize widthType=_widthType - In the implementation block
@property (assign) short indent;                                                  //@synthesize indent=_indent - In the implementation block
@property (assign) int indentType;                                                //@synthesize indentType=_indentType - In the implementation block
@property (assign) short cellSpacing;                                             //@synthesize cellSpacing=_cellSpacing - In the implementation block
@property (assign) int cellSpacingType;                                           //@synthesize cellSpacingType=_cellSpacingType - In the implementation block
@property (assign) int verticalAnchor;                                            //@synthesize verticalAnchor=_verticalAnchor - In the implementation block
@property (assign) int horizontalAnchor;                                          //@synthesize horizontalAnchor=_horizontalAnchor - In the implementation block
@property (assign) long long verticalPosition;                                    //@synthesize verticalPosition=_verticalPosition - In the implementation block
@property (assign) long long horizontalPosition;                                  //@synthesize horizontalPosition=_horizontalPosition - In the implementation block
@property (assign) long long leftDistanceFromText;                                //@synthesize leftDistanceFromText=_leftDistanceFromText - In the implementation block
@property (assign) long long topDistanceFromText;                                 //@synthesize topDistanceFromText=_topDistanceFromText - In the implementation block
@property (assign) long long rightDistanceFromText;                               //@synthesize rightDistanceFromText=_rightDistanceFromText - In the implementation block
@property (assign) long long bottomDistanceFromText;                              //@synthesize bottomDistanceFromText=_bottomDistanceFromText - In the implementation block
@property (assign) int deleted;                                                   //@synthesize deleted=_deleted - In the implementation block
@property (assign) int edited;                                                    //@synthesize edited=_edited - In the implementation block
@property (assign) int formattingChanged;                                         //@synthesize formattingChanged=_formattingChanged - In the implementation block
@property (assign) BOOL biDirectional;                                            //@synthesize biDirectional=_biDirectional - In the implementation block
@property (assign) unsigned short indexToAuthorIDOfDeletion;                      //@synthesize indexToAuthorIDOfDeletion=_indexToAuthorIDOfDeletion - In the implementation block
@property (assign) unsigned short indexToAuthorIDOfEdit;                          //@synthesize indexToAuthorIDOfEdit=_indexToAuthorIDOfEdit - In the implementation block
@property (assign) unsigned short indexToAuthorIDOfFormattingChange;              //@synthesize indexToAuthorIDOfFormattingChange=_indexToAuthorIDOfFormattingChange - In the implementation block
@property (nonatomic,retain) NSDate * deletionDate;                               //@synthesize deletionDate=_deletionDate - In the implementation block
@property (nonatomic,retain) NSDate * editDate;                                   //@synthesize editDate=_editDate - In the implementation block
@property (nonatomic,retain) NSDate * formattingChangeDate;                       //@synthesize formattingChangeDate=_formattingChangeDate - In the implementation block
@property (assign) BOOL baseStyleOverridden; 
@property (assign) BOOL lookOverridden; 
@property (assign) BOOL shadingOverridden; 
@property (assign) BOOL topBorderOverridden; 
@property (assign) BOOL leftBorderOverridden; 
@property (assign) BOOL bottomBorderOverridden; 
@property (assign) BOOL rightBorderOverridden; 
@property (assign) BOOL insideHorizontalBorderOverridden; 
@property (assign) BOOL insideVerticalBorderOverridden; 
@property (assign) BOOL justificationOverridden; 
@property (assign) BOOL alignmentOverridden; 
@property (assign) BOOL widthOverridden; 
@property (assign) BOOL widthTypeOverridden; 
@property (assign) BOOL indentOverridden; 
@property (assign) BOOL indentTypeOverridden; 
@property (assign) BOOL cellSpacingOverridden; 
@property (assign) BOOL cellSpacingTypeOverridden; 
@property (assign) BOOL verticalAnchorOverridden; 
@property (assign) BOOL horizontalAnchorOverridden; 
@property (assign) BOOL verticalPositionOverridden; 
@property (assign) BOOL horizontalPositionOverridden; 
@property (assign) BOOL leftDistanceFromTextOverridden; 
@property (assign) BOOL topDistanceFromTextOverridden; 
@property (assign) BOOL rightDistanceFromTextOverridden; 
@property (assign) BOOL bottomDistanceFromTextOverridden; 
@property (assign) BOOL deletedOverridden; 
@property (assign) BOOL editedOverridden; 
@property (assign) BOOL formattingChangedOverridden; 
@property (assign) BOOL biDirectionalOverridden; 
@property (assign) BOOL indexToAuthorIDOfDeletionOverridden; 
@property (assign) BOOL indexToAuthorIDOfEditOverridden; 
@property (assign) BOOL indexToAuthorIDOfFormattingChangeOverridden; 
@property (assign) BOOL deletionDateOverridden; 
@property (assign) BOOL editDateOverridden; 
@property (assign) BOOL formattingChangeDateOverridden; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(long long)width;
-(void)setWidth:(long long)arg1 ;
-(int)deleted;
-(short)cellSpacing;
-(void)setRightBorder:(WDBorder *)arg1 ;
-(WDBorder *)rightBorder;
-(int)edited;
-(void)setEdited:(int)arg1 ;
-(void)setDeleted:(int)arg1 ;
-(short)indent;
-(void)setCellSpacing:(short)arg1 ;
-(unsigned short)look;
-(void)setIndent:(short)arg1 ;
-(WDStyle *)baseStyle;
-(void)setBaseStyle:(WDStyle *)arg1 ;
-(void)setDeletionDate:(NSDate *)arg1 ;
-(NSDate *)deletionDate;
-(WDBorder *)topBorder;
-(WDBorder *)bottomBorder;
-(void)setTopBorder:(WDBorder *)arg1 ;
-(void)setBottomBorder:(WDBorder *)arg1 ;
-(int)horizontalAnchor;
-(int)verticalAnchor;
-(long long)horizontalPosition;
-(long long)verticalPosition;
-(int)justification;
-(WDShading *)shading;
-(WDBorder *)leftBorder;
-(long long)leftDistanceFromText;
-(WDBorder *)insideHorizontalBorder;
-(WDBorder *)insideVerticalBorder;
-(void)setLeftBorder:(WDBorder *)arg1 ;
-(void)setFormattingChanged:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChangeDate:(NSDate *)arg1 ;
-(int)formattingChanged;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(NSDate *)formattingChangeDate;
-(void)setJustification:(int)arg1 ;
-(void)setWidthType:(int)arg1 ;
-(void)setIndentType:(int)arg1 ;
-(void)setVerticalAnchor:(int)arg1 ;
-(void)setHorizontalAnchor:(int)arg1 ;
-(void)setVerticalPosition:(long long)arg1 ;
-(void)setHorizontalPosition:(long long)arg1 ;
-(void)setLeftDistanceFromText:(long long)arg1 ;
-(void)setTopDistanceFromText:(long long)arg1 ;
-(void)setRightDistanceFromText:(long long)arg1 ;
-(void)setBottomDistanceFromText:(long long)arg1 ;
-(void)setBiDirectional:(BOOL)arg1 ;
-(BOOL)baseStyleOverridden;
-(BOOL)shadingOverridden;
-(void)setShading:(WDShading *)arg1 ;
-(void)setBaseStyleOverridden:(BOOL)arg1 ;
-(void)setFormattingChangedOverridden:(BOOL)arg1 ;
-(void)setShadingOverridden:(BOOL)arg1 ;
-(BOOL)deletedOverridden;
-(void)setDeletedOverridden:(BOOL)arg1 ;
-(BOOL)editedOverridden;
-(void)setEditedOverridden:(BOOL)arg1 ;
-(BOOL)formattingChangedOverridden;
-(BOOL)indexToAuthorIDOfDeletionOverridden;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1 ;
-(void)setIndexToAuthorIDOfDeletionOverridden:(BOOL)arg1 ;
-(BOOL)indexToAuthorIDOfEditOverridden;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg1 ;
-(void)setIndexToAuthorIDOfEditOverridden:(BOOL)arg1 ;
-(BOOL)indexToAuthorIDOfFormattingChangeOverridden;
-(void)setIndexToAuthorIDOfFormattingChangeOverridden:(BOOL)arg1 ;
-(BOOL)deletionDateOverridden;
-(void)setDeletionDateOverridden:(BOOL)arg1 ;
-(BOOL)editDateOverridden;
-(NSDate *)editDate;
-(void)setEditDate:(NSDate *)arg1 ;
-(void)setEditDateOverridden:(BOOL)arg1 ;
-(BOOL)widthOverridden;
-(BOOL)horizontalAnchorOverridden;
-(BOOL)verticalAnchorOverridden;
-(BOOL)horizontalPositionOverridden;
-(BOOL)verticalPositionOverridden;
-(BOOL)justificationOverridden;
-(BOOL)topBorderOverridden;
-(BOOL)leftBorderOverridden;
-(BOOL)bottomBorderOverridden;
-(BOOL)rightBorderOverridden;
-(void)setWidthOverridden:(BOOL)arg1 ;
-(void)setHorizontalAnchorOverridden:(BOOL)arg1 ;
-(void)setVerticalAnchorOverridden:(BOOL)arg1 ;
-(void)setHorizontalPositionOverridden:(BOOL)arg1 ;
-(void)setVerticalPositionOverridden:(BOOL)arg1 ;
-(void)setTopBorderOverridden:(BOOL)arg1 ;
-(void)setLeftBorderOverridden:(BOOL)arg1 ;
-(void)setBottomBorderOverridden:(BOOL)arg1 ;
-(void)setRightBorderOverridden:(BOOL)arg1 ;
-(void)setJustificationOverridden:(BOOL)arg1 ;
-(int)widthType;
-(void)setWidthTypeOverridden:(BOOL)arg1 ;
-(BOOL)lookOverridden;
-(void)setLook:(unsigned short)arg1 ;
-(void)setLookOverridden:(BOOL)arg1 ;
-(BOOL)insideHorizontalBorderOverridden;
-(void)setInsideHorizontalBorderOverridden:(BOOL)arg1 ;
-(void)setInsideHorizontalBorder:(WDBorder *)arg1 ;
-(BOOL)insideVerticalBorderOverridden;
-(void)setInsideVerticalBorderOverridden:(BOOL)arg1 ;
-(void)setInsideVerticalBorder:(WDBorder *)arg1 ;
-(BOOL)alignmentOverridden;
-(void)setAlignmentOverridden:(BOOL)arg1 ;
-(BOOL)widthTypeOverridden;
-(BOOL)indentOverridden;
-(void)setIndentOverridden:(BOOL)arg1 ;
-(BOOL)indentTypeOverridden;
-(int)indentType;
-(void)setIndentTypeOverridden:(BOOL)arg1 ;
-(BOOL)cellSpacingOverridden;
-(void)setCellSpacingOverridden:(BOOL)arg1 ;
-(BOOL)cellSpacingTypeOverridden;
-(int)cellSpacingType;
-(void)setCellSpacingType:(int)arg1 ;
-(void)setCellSpacingTypeOverridden:(BOOL)arg1 ;
-(BOOL)leftDistanceFromTextOverridden;
-(void)setLeftDistanceFromTextOverridden:(BOOL)arg1 ;
-(BOOL)topDistanceFromTextOverridden;
-(long long)topDistanceFromText;
-(void)setTopDistanceFromTextOverridden:(BOOL)arg1 ;
-(BOOL)rightDistanceFromTextOverridden;
-(long long)rightDistanceFromText;
-(void)setRightDistanceFromTextOverridden:(BOOL)arg1 ;
-(BOOL)bottomDistanceFromTextOverridden;
-(long long)bottomDistanceFromText;
-(void)setBottomDistanceFromTextOverridden:(BOOL)arg1 ;
-(BOOL)biDirectionalOverridden;
-(BOOL)biDirectional;
-(void)setBiDirectionalOverridden:(BOOL)arg1 ;
-(BOOL)formattingChangeDateOverridden;
-(void)setFormattingChangeDateOverridden:(BOOL)arg1 ;
@end
