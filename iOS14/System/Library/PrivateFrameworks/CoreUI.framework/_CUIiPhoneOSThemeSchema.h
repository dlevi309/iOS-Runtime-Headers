/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
-(long long)schemaVersion;
-(const SCD_Struct_CU32*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU35*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU35*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU35*)elementDefinitionWithName:(id)arg1 ;
-(const SCD_Struct_CU35*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU32*)categoryForElementDefinition:(const SCD_Struct_CU35*)arg1 ;
-(const SCD_Struct_CU35*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(const SCD_Struct_CU35*)effectDefinitionWithName:(id)arg1 ;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(const SCD_Struct_CU35*)_sortedElementDefinitions;
-(const SCD_Struct_CU35*)_sortedEffectDefinitions;
@end

