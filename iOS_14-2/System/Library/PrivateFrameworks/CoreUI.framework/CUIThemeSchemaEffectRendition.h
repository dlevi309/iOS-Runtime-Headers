/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIShapeEffectPreset, CUIImage;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {

	NSDictionary* _cuiInfo;
	CUIShapeEffectPreset* _effectPreset;
	CUIImage* _referenceImage;

}
-(id)effectPreset;
-(void)_initializeCoreUIOptions:(id)arg1 ;
-(id)referenceImage;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)coreUIOptions;
-(BOOL)_generateReferenceImage;
-(id)_rendererInitializationDictionary;
-(void)dealloc;
@end

