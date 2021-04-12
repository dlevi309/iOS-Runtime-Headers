/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyle;

@interface WDTableStyleOverride : NSObject <NSCopying> {

	WDDocument* mDocument;
	int mPart;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellStyleProperties;
	unsigned mParagraphPropertiesOverridden : 1;
	unsigned mCharacterPropertiesOverridden : 1;
	unsigned mTableRowPropertiesOverridden : 1;
	unsigned mTableCellStylePropertiesOverridden : 1;
	WDStyle* mStyle;

}

@property (__weak) WDStyle * style; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WDStyle *)style;
-(void)setStyle:(WDStyle *)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(int)part;
-(void)setPart:(int)arg1 ;
-(id)paragraphProperties;
-(id)characterProperties;
-(BOOL)isCharacterPropertiesOverridden;
-(id)tableProperties;
-(id)mutableCharacterProperties;
-(id)tableRowProperties;
-(id)mutableParagraphProperties;
-(BOOL)isParagraphPropertiesOverridden;
-(void)setParagraphPropertiesOverridden:(BOOL)arg1 ;
-(void)setCharacterPropertiesOverridden:(BOOL)arg1 ;
-(BOOL)isTablePropertiesOverridden;
-(id)mutableTableRowProperties;
-(BOOL)isTableRowPropertiesOverridden;
-(void)setTableRowPropertiesOverridden:(BOOL)arg1 ;
-(id)tableCellStyleProperties;
-(id)mutableTableCellStyleProperties;
-(BOOL)isTableCellStylePropertiesOverridden;
-(void)setTableCellStylePropertiesOverridden:(BOOL)arg1 ;
@end

