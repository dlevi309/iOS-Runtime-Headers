/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@interface NTKPrideAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory
-(id)initForDevice:(id)arg1 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(long long)keylineStyleForComplicationSlot:(id)arg1 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(double)_keylinePaddingForState:(long long)arg1 ;
-(double)_edgeGapForState:(long long)arg1 ;
-(double)_lisaGapForState:(long long)arg1 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(id)_complicationSlots;
-(void)prepareForEditingForFaceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg1 ;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3 ;
-(BOOL)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3 ;
@end

