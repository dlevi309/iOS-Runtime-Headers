/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)width;
-(int)edited;
-(id)init;
-(int)alignment;
-(unsigned short)look;
-(id)rightBorder;
-(void)setIndent:(short)arg1 ;
-(short)indent;
-(short)cellSpacing;
-(void)setWidth:(long long)arg1 ;
-(void)setBaseStyle:(id)arg1 ;
-(int)deleted;
-(id)baseStyle;
-(void)setAlignment:(int)arg1 ;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(WDDocument *)document;
-(void)setDeleted:(int)arg1 ;
-(void)setEdited:(int)arg1 ;
-(id)shading;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)topBorder;
-(id)bottomBorder;
-(void)setCellSpacing:(short)arg1 ;
-(id)deletionDate;
-(void)setDeletionDate:(id)arg1 ;
-(BOOL)biDirectional;
-(void)setBiDirectional:(BOOL)arg1 ;
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

