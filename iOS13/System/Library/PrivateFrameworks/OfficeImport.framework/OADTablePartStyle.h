/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADTableTextStyle, OADTableCellStyle;

@interface OADTablePartStyle : NSObject {

	OADTableTextStyle* mTextStyle;
	OADTableCellStyle* mCellStyle;

}
+(id)defaultStyle;
-(id)description;
-(void)setTextStyle:(id)arg1 ;
-(id)textStyle;
-(id)cellStyle;
-(void)setCellStyle:(id)arg1 ;
-(id)shallowCopy;
-(void)applyOverridesFrom:(id)arg1 ;
@end

