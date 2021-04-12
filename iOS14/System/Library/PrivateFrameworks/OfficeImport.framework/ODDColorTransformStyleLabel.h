/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class ODDFillColorList;

@interface ODDColorTransformStyleLabel : NSObject {

	ODDFillColorList* mFillColors;
	ODDFillColorList* mLineColors;
	ODDFillColorList* mEffectColors;
	ODDFillColorList* mTextLineColors;
	ODDFillColorList* mTextFillColors;
	ODDFillColorList* mTextEffectColors;

}
-(void)setFillColors:(id)arg1 ;
-(id)fillColors;
-(void)applyToShapeStyle:(id)arg1 index:(unsigned)arg2 count:(unsigned)arg3 state:(id)arg4 ;
-(id)lineColors;
-(id)effectColors;
-(id)textFillColors;
-(void)setLineColors:(id)arg1 ;
-(void)setEffectColors:(id)arg1 ;
-(id)textLineColors;
-(void)setTextLineColors:(id)arg1 ;
-(void)setTextFillColors:(id)arg1 ;
-(id)textEffectColors;
-(void)setTextEffectColors:(id)arg1 ;
@end

