/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDTablePropertiesValues, WDDocument;

@interface WDTableProperties : NSObject <NSCopying> {

	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDTablePropertiesValues* mOriginalProperties;
	WDTablePropertiesValues* mTrackedProperties;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(long long)width;
-(void)setWidth:(long long)arg1 ;
-(int)deleted;
-(short)cellSpacing;
-(id)initWithDocument:(id)arg1 ;
-(WDDocument *)document;
-(id)rightBorder;
-(int)edited;
-(void)setEdited:(int)arg1 ;
-(void)setDeleted:(int)arg1 ;
-(short)indent;
-(void)setCellSpacing:(short)arg1 ;
-(unsigned short)look;
-(void)setIndent:(short)arg1 ;
-(id)baseStyle;
-(void)setBaseStyle:(id)arg1 ;
-(void)setDeletionDate:(id)arg1 ;
-(id)deletionDate;
-(id)topBorder;
-(id)bottomBorder;
-(BOOL)isDeletedOverridden;
-(BOOL)isBaseStyleOverridden;
-(BOOL)isHorizontalAnchorOverridden;
-(int)horizontalAnchor;
-(BOOL)isVerticalAnchorOverridden;
-(int)verticalAnchor;
-(BOOL)isHorizontalPositionOverridden;
-(long long)horizontalPosition;
-(BOOL)isVerticalPositionOverridden;
-(long long)verticalPosition;
-(BOOL)isJustificationOverridden;
-(int)justification;
-(BOOL)isShadingOverridden;
-(id)shading;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isWidthOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)leftBorder;
-(BOOL)isLeftDistanceFromTextOverridden;
-(long long)leftDistanceFromText;
-(BOOL)isInsideHorizontalBorderOverridden;
-(id)insideHorizontalBorder;
-(BOOL)isInsideVerticalBorderOverridden;
-(id)insideVerticalBorder;
-(BOOL)isIndentOverridden;
-(BOOL)isAlignmentOverridden;
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
-(BOOL)isTableFloating;
-(void)clearShading;
-(id)mutableShading;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
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
-(void)setLook:(unsigned short)arg1 ;
-(int)indentType;
-(int)cellSpacingType;
-(void)setCellSpacingType:(int)arg1 ;
-(long long)topDistanceFromText;
-(long long)rightDistanceFromText;
-(long long)bottomDistanceFromText;
-(BOOL)biDirectional;
-(BOOL)isLookOverridden;
-(void)clearTopBorder;
-(void)clearLeftBorder;
-(void)clearBottomBorder;
-(void)clearRightBorder;
-(void)clearInsideHorizontalBorder;
-(void)clearInsideVerticalBorder;
-(BOOL)isIndentTypeOverridden;
-(BOOL)isCellSpacingOverridden;
-(BOOL)isCellSpacingTypeOverridden;
-(BOOL)isTopDistanceFromTextOverridden;
-(BOOL)isRightDistanceFromTextOverridden;
-(BOOL)isBottomDistanceFromTextOverridden;
-(BOOL)isBiDirectionalOverridden;
-(void)moveOrignalToTracked;
@end

