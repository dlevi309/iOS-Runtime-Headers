/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)effectPreset;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_initializeCoreUIOptions:(id)arg1 ;
-(id)referenceImage;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)coreUIOptions;
-(BOOL)_generateReferenceImage;
-(id)_rendererInitializationDictionary;
@end

