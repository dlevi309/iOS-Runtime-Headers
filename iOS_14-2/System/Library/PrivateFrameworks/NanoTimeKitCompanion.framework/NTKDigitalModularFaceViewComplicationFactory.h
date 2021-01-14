/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NTKLayoutRule;

@interface NTKDigitalModularFaceViewComplicationFactory : NTKFaceViewComplicationFactory {

	NTKLayoutRule* _timeLayoutRuleNormal;
	NTKLayoutRule* _timeLayoutRuleEditing;

}
-(id)initForDevice:(id)arg1 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3 faceView:(id)arg4 ;
-(id)digitalTimeLayoutRuleForEditMode:(long long)arg1 ;
@end

