/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFace.h>
#import <libobjc.A.dylib/NTKFaceComplicationPreviewable.h>

@class NSString;

@interface NTKExtraLargeFace : NTKFace <NTKFaceComplicationPreviewable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
+(id)_richComplicationSlotsForDevice:(id)arg1 ;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_localizedNameForComplicationSlot:(id)arg1 ;
-(BOOL)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(void)applyPreviewConfigurationWithFamily:(long long)arg1 faceColor:(long long)arg2 ;
-(BOOL)_complication:(id)arg1 appearsInDailySnapshotForSlot:(id)arg2 ;
-(long long)_editModeForOldEncodingIndex:(long long)arg1 ;
@end

