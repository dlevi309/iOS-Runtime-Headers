/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {

	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;

}
+(id)defaultColor;
+(id)defaultStyle;
+(id)defaultFontReference;
+(int)defaultBold;
+(int)defaultItalic;
-(int)bold;
-(id)init;
-(id)color;
-(id)description;
-(void)setColor:(id)arg1 ;
-(int)italic;
-(void)setBold:(int)arg1 ;
-(id)shallowCopy;
-(void)setFontReference:(id)arg1 ;
-(void)setItalic:(int)arg1 ;
-(id)fontReference;
-(void)applyOverridesFrom:(id)arg1 ;
@end

