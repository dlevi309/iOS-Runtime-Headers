/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTAvatarAttributeEditorModelBuilder : NSObject
+(id)buildDataSourceCategoriesFromCoreModel:(id)arg1 selectingFromAvatarConfiguration:(id)arg2 imageProvider:(id)arg3 currentEditorDataSource:(id)arg4 forCategoryAtIndex:(unsigned long long)arg5 ;
+(id)sectionForModelColorPalette:(id)arg1 selectedPreset:(id)arg2 configuration:(id)arg3 imageProvider:(id)arg4 colorVariationStore:(id)arg5 pairedCategory:(long long)arg6 ;
+(id)sectionForModelRow:(id)arg1 fromModelPresets:(id)arg2 selectedModelPreset:(id)arg3 tagSelection:(id)arg4 fixedTags:(id)arg5 availableTags:(id)arg6 imageProvider:(id)arg7 configuration:(id)arg8 previousSection:(id)arg9 pairedCategory:(long long)arg10 ;
+(id)tagSetForTagNames:(id)arg1 inTagSet:(id)arg2 ;
+(void)setTags:(id)arg1 onMutableTagSet:(id)arg2 ;
+(id)firstColorSectionInSections:(id)arg1 ;
+(id)sectionColorItemsForColors:(id)arg1 selectedPreset:(id)arg2 configuration:(id)arg3 imageProvider:(id)arg4 colorVariationStore:(id)arg5 pairedCategory:(long long)arg6 ;
+(id)filterPresets:(id)arg1 forRowRepresentingTags:(id)arg2 currentTagSelection:(id)arg3 fixedTags:(id)arg4 availableTags:(id)arg5 ;
+(id)framingModeForRow:(id)arg1 selectedPreset:(id)arg2 ;
+(int)scoreForTags:(id)arg1 forCombination:(id)arg2 currentSelection:(id)arg3 ;
+(id)filterPresets:(id)arg1 matchingTagValues:(id)arg2 ;
+(id)tagCombinationsForTagNames:(id)arg1 availableTags:(id)arg2 ;
+(void)addTags:(id)arg1 toMutableTagSet:(id)arg2 ;
+(id)tagSetByRemovingTagNames:(id)arg1 fromTagSet:(id)arg2 ;
@end

