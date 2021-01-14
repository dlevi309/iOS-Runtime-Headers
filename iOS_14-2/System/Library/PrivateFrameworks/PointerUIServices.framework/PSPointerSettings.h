/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/

#import <PrototypeTools/PTSettings.h>

@interface PSPointerSettings : PTSettings {

	double _materialAlphaDot;
	double _materialAlphaIBeam;
	double _materialAlphaSmallItemLight;
	double _materialAlphaSmallItemDark;
	double _materialAlphaSmallItemDarkHighContrast;

}

@property (assign,nonatomic) double materialAlphaDot;                                    //@synthesize materialAlphaDot=_materialAlphaDot - In the implementation block
@property (assign,nonatomic) double materialAlphaIBeam;                                  //@synthesize materialAlphaIBeam=_materialAlphaIBeam - In the implementation block
@property (assign,nonatomic) double materialAlphaSmallItemLight;                         //@synthesize materialAlphaSmallItemLight=_materialAlphaSmallItemLight - In the implementation block
@property (assign,nonatomic) double materialAlphaSmallItemDark;                          //@synthesize materialAlphaSmallItemDark=_materialAlphaSmallItemDark - In the implementation block
@property (assign,nonatomic) double materialAlphaSmallItemDarkHighContrast;              //@synthesize materialAlphaSmallItemDarkHighContrast=_materialAlphaSmallItemDarkHighContrast - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setMaterialAlphaDot:(double)arg1 ;
-(void)setMaterialAlphaIBeam:(double)arg1 ;
-(void)setMaterialAlphaSmallItemLight:(double)arg1 ;
-(void)setMaterialAlphaSmallItemDark:(double)arg1 ;
-(void)setMaterialAlphaSmallItemDarkHighContrast:(double)arg1 ;
-(double)materialAlphaDot;
-(double)materialAlphaIBeam;
-(double)materialAlphaSmallItemLight;
-(double)materialAlphaSmallItemDark;
-(double)materialAlphaSmallItemDarkHighContrast;
@end

