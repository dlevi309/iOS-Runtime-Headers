/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {

	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;

}
+(id)defaultStyle;
+(id)defaultColor;
+(id)defaultFontReference;
+(int)defaultBold;
+(int)defaultItalic;
-(id)init;
-(id)description;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setBold:(int)arg1 ;
-(id)shallowCopy;
-(int)bold;
-(int)italic;
-(void)setFontReference:(id)arg1 ;
-(void)setItalic:(int)arg1 ;
-(id)fontReference;
-(void)applyOverridesFrom:(id)arg1 ;
@end

