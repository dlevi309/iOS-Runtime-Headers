/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>

@class CLKComplicationTemplate;

@interface NTKTimelineComplicationController : NTKComplicationController {

	BOOL _ignoreNewTemplates;
	CLKComplicationTemplate* _alwaysOnTemplate;
	CLKComplicationTemplate* _lockedTemplate;

}

@property (nonatomic,readonly) CLKComplicationTemplate * alwaysOnTemplate;                   //@synthesize alwaysOnTemplate=_alwaysOnTemplate - In the implementation block
@property (assign,nonatomic) BOOL ignoreNewTemplates;                                        //@synthesize ignoreNewTemplates=_ignoreNewTemplates - In the implementation block
@property (nonatomic,readonly) CLKComplicationTemplate * lockedTemplate;                     //@synthesize lockedTemplate=_lockedTemplate - In the implementation block
@property (nonatomic,readonly) CLKComplicationTemplate * activeDisplayTemplate; 
+(BOOL)_isLegacy;
-(CLKComplicationTemplate *)lockedTemplate;
-(CLKComplicationTemplate *)alwaysOnTemplate;
-(CLKComplicationTemplate *)activeDisplayTemplate;
-(BOOL)ignoreNewTemplates;
-(unsigned long long)_animationForTimelineEntryTransitionFrom:(id)arg1 to:(id)arg2 withAnimationBehavior:(unsigned long long)arg3 ;
-(void)_aggdAppLaunchForTimeTravelDate:(id)arg1 timelineEntryDate:(id)arg2 ;
-(void)setIgnoreNewTemplates:(BOOL)arg1 ;
@end

