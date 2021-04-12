/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NTKUtilityComplicationFactory;

@interface NTKAnalogUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {

	NTKUtilityComplicationFactory* _complicationFactory;

}
-(id)initForDevice:(id)arg1 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(id)_utilityComplicationSlots;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(long long)_utilitarianUtilitySlotForSlot:(id)arg1 ;
@end

