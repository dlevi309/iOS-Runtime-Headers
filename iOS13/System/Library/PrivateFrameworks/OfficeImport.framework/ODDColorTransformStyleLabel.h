/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)applyToShapeStyle:(id)arg1 index:(unsigned)arg2 count:(unsigned)arg3 state:(id)arg4 ;
-(id)fillColors;
-(id)lineColors;
-(id)effectColors;
-(id)textFillColors;
-(void)setFillColors:(id)arg1 ;
-(void)setLineColors:(id)arg1 ;
-(void)setEffectColors:(id)arg1 ;
-(id)textLineColors;
-(void)setTextLineColors:(id)arg1 ;
-(void)setTextFillColors:(id)arg1 ;
-(id)textEffectColors;
-(void)setTextEffectColors:(id)arg1 ;
@end

