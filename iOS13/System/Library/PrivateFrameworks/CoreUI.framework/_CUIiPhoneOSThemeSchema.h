/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
-(long long)schemaVersion;
-(const SCD_Struct_CU31*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU34*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU34*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU34*)elementDefinitionWithName:(id)arg1 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
-(const SCD_Struct_CU31*)categoryForElementDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU34*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU34*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU34*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(const SCD_Struct_CU34*)_sortedElementDefinitions;
-(const SCD_Struct_CU34*)_sortedEffectDefinitions;
@end

