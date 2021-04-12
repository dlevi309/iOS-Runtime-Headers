/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKChronographFace : NTKFace
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
+(id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
+(id)_dateComplicationSlotForDevice:(id)arg1 ;
+(unsigned long long)_dateComplicationSlotSupportedStylesForDevice:(id)arg1 ;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(long long)_customEditModeForUniqueConfiguration;
-(id)_chronoDefaultOption;
-(BOOL)_wantsUnadornedSnapshot;
-(long long)_editModeForOldEncodingIndex:(long long)arg1 ;
@end

