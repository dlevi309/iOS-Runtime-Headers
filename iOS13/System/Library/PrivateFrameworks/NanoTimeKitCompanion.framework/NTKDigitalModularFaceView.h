/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>
#import <libobjc.A.dylib/NTKTimeModuleViewTapClient.h>

@class CLKTimeFormatter, NSDateComponentsFormatter, NSString;

@interface NTKDigitalModularFaceView : NTKDigitalFaceView <NTKTimeModuleViewTapClient> {

	unsigned long long _faceColor;
	BOOL _is24HourMode;
	CLKTimeFormatter* _dateFormatter;
	NSDateComponentsFormatter* _dayOffsetDateFormatter;
	NSDateComponentsFormatter* _subdayOffsetDateFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(void)_performIfNonRichModuleView:(id)arg1 actions:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(CGRect)arg2 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(unsigned long long)_timeLabelOptions;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(void)performTapAction;
-(long long)complicationFamilyForSlot:(id)arg1 ;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(void)_updateLocale;
-(void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3 ;
-(void)_applyFaceColor:(unsigned long long)arg1 toModuleView:(id)arg2 ;
-(void)_enumerateModuleViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_complicationSlotsForRow:(unsigned long long)arg1 ;
-(id)_moduleViewForComplicationSlot:(id)arg1 ;
@end

