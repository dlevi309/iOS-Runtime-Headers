/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>

@class CLKComplicationTemplate;

@interface NTKTimelineComplicationController : NTKComplicationController {

	BOOL _ignoreNewTemplates;
	BOOL _useSampleTemplate;
	CLKComplicationTemplate* _alwaysOnTemplate;
	CLKComplicationTemplate* _lockedTemplate;

}

@property (nonatomic,readonly) CLKComplicationTemplate * alwaysOnTemplate;                   //@synthesize alwaysOnTemplate=_alwaysOnTemplate - In the implementation block
@property (assign,nonatomic) BOOL ignoreNewTemplates;                                        //@synthesize ignoreNewTemplates=_ignoreNewTemplates - In the implementation block
@property (nonatomic,readonly) CLKComplicationTemplate * lockedTemplate;                     //@synthesize lockedTemplate=_lockedTemplate - In the implementation block
@property (nonatomic,readonly) CLKComplicationTemplate * activeDisplayTemplate; 
@property (assign,nonatomic) BOOL useSampleTemplate;                                         //@synthesize useSampleTemplate=_useSampleTemplate - In the implementation block
+(BOOL)_isLegacy;
-(CLKComplicationTemplate *)alwaysOnTemplate;
-(void)setUseSampleTemplate:(BOOL)arg1 ;
-(CLKComplicationTemplate *)lockedTemplate;
-(void)setIgnoreNewTemplates:(BOOL)arg1 ;
-(CLKComplicationTemplate *)activeDisplayTemplate;
-(BOOL)ignoreNewTemplates;
-(unsigned long long)_animationForTimelineEntryTransitionFrom:(id)arg1 to:(id)arg2 withAnimationBehavior:(unsigned long long)arg3 ;
-(BOOL)useSampleTemplate;
-(void)_aggdAppLaunchForTimeTravelDate:(id)arg1 timelineEntryDate:(id)arg2 ;
@end

