/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument;

@interface WDTableCellProperties : NSObject {

	short mWidth;
	short mPosition;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD114 mOriginalProperties;
	SCD_Struct_WD114 mTrackedProperties;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)position;
-(short)width;
-(void)setWidth:(short)arg1 ;
-(int)deleted;
-(void)setPosition:(short)arg1 ;
-(void)addProperties:(id)arg1 ;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setLeftMargin:(short)arg1 ;
-(void)setRightMargin:(short)arg1 ;
-(void)setTopMargin:(short)arg1 ;
-(void)setBottomMargin:(short)arg1 ;
-(short)topMargin;
-(id)initWithDocument:(id)arg1 ;
-(short)rightMargin;
-(WDDocument *)document;
-(id)rightBorder;
-(int)edited;
-(void)setEdited:(int)arg1 ;
-(void)setDeleted:(int)arg1 ;
-(BOOL)noWrap;
-(void)setNoWrap:(BOOL)arg1 ;
-(int)textDirection;
-(short)bottomMargin;
-(short)leftMargin;
-(void)setDeletionDate:(id)arg1 ;
-(id)deletionDate;
-(id)topBorder;
-(id)bottomBorder;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isDeletedOverridden;
-(BOOL)isShadingOverridden;
-(id)shading;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)leftBorder;
-(BOOL)isVerticalAlignmentOverridden;
-(BOOL)isInsideHorizontalBorderOverridden;
-(id)insideHorizontalBorder;
-(BOOL)isInsideVerticalBorderOverridden;
-(id)insideVerticalBorder;
-(void)setTextDirection:(int)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(int)resolveMode;
-(void)setFormattingChanged:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(BOOL)isFormattingChangedOverridden;
-(int)formattingChanged;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(BOOL)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(BOOL)isTextDirectionOverridden;
-(void)clearShading;
-(id)mutableShading;
-(id)mutableDiagonalUpBorder;
-(id)mutableDiagonalDownBorder;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
-(BOOL)isDiagonalUpBorderOverridden;
-(id)diagonalUpBorder;
-(BOOL)isDiagonalDownBorderOverridden;
-(id)diagonalDownBorder;
-(void)setWidthType:(int)arg1 ;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1 ;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg1 ;
-(id)editDate;
-(void)setEditDate:(id)arg1 ;
-(BOOL)isEditedOverridden;
-(BOOL)isIndexToAuthorIDOfDeletionOverridden;
-(BOOL)isIndexToAuthorIDOfEditOverridden;
-(BOOL)isDeletionDateOverridden;
-(BOOL)isEditDateOverridden;
-(int)widthType;
-(BOOL)isWidthTypeOverridden;
-(int)topMarginType;
-(void)setTopMarginType:(int)arg1 ;
-(BOOL)isTopMarginTypeOverridden;
-(int)bottomMarginType;
-(void)setBottomMarginType:(int)arg1 ;
-(BOOL)isBottomMarginTypeOverridden;
-(int)leftMarginType;
-(void)setLeftMarginType:(int)arg1 ;
-(BOOL)isLeftMarginTypeOverridden;
-(int)rightMarginType;
-(void)setRightMarginType:(int)arg1 ;
-(BOOL)isRightMarginTypeOverridden;
-(BOOL)verticallyMergedCell;
-(void)setVerticallyMergedCell:(BOOL)arg1 ;
-(BOOL)isVerticallyMergedCellOverridden;
-(BOOL)firstInSetOfVerticallyMergedCells;
-(void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1 ;
-(BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
-(BOOL)isNoWrapOverridden;
-(void)addPropertiesValues:(SCD_Struct_WD115*)arg1 to:(SCD_Struct_WD115*)arg2 ;
-(void)originalToTracked;
@end

