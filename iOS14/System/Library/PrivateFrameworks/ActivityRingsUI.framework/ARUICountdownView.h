/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUIRingsView.h>

@class ARUIRingGroupController;

@interface ARUICountdownView : ARUIRingsView

@property (nonatomic,readonly) ARUIRingGroupController * countdownController; 
+(id)countdownViewConfiguredForWatch;
+(id)countdownViewConfiguredForCompanion;
+(id)countdownViewConfiguredForDisplayWithRingDiameter:(float)arg1 ;
-(id)ringGroup;
-(ARUIRingGroupController *)countdownController;
-(id)backingTrackRingGroup;
@end

