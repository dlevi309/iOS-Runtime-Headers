/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADTableCellBorderStyle, OADFill;

@interface OADTableCellStyle : NSObject {

	OADTableCellBorderStyle* mBorderStyle;
	OADFill* mFill;

}
+(id)defaultStyle;
+(id)defaultFill;
-(id)fill;
-(id)description;
-(id)borderStyle;
-(void)setBorderStyle:(id)arg1 ;
-(id)shallowCopy;
-(void)setFill:(id)arg1 ;
-(void)applyOverridesFrom:(id)arg1 ;
@end

