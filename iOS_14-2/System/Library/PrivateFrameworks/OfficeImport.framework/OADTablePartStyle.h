/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADTableTextStyle, OADTableCellStyle;

@interface OADTablePartStyle : NSObject {

	OADTableTextStyle* mTextStyle;
	OADTableCellStyle* mCellStyle;

}
+(id)defaultStyle;
-(void)setCellStyle:(id)arg1 ;
-(void)setTextStyle:(id)arg1 ;
-(id)description;
-(id)textStyle;
-(id)cellStyle;
-(id)shallowCopy;
-(void)applyOverridesFrom:(id)arg1 ;
@end

