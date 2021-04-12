/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFace.h>

@class NSMutableDictionary;

@interface NTKCharacterFace : NTKFace {

	NSMutableDictionary* _previousCharacterColors;

}
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
+(id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
-(id)_defaultName;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(long long)_customEditModeForUniqueConfiguration;
-(void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(long long)arg3 slot:(id)arg4 ;
-(long long)_editModeForOldEncodingIndex:(long long)arg1 ;
-(unsigned long long)_selectedCharacter;
-(id)_faceDescriptionKey;
@end

