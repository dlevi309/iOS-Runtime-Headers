/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADTableCellBorderStyle, OADFill;

@interface OADTableCellStyle : NSObject {

	OADTableCellBorderStyle* mBorderStyle;
	OADFill* mFill;

}
+(id)defaultStyle;
+(id)defaultFill;
-(id)description;
-(void)setBorderStyle:(id)arg1 ;
-(id)fill;
-(id)borderStyle;
-(id)shallowCopy;
-(void)setFill:(id)arg1 ;
-(void)applyOverridesFrom:(id)arg1 ;
@end

