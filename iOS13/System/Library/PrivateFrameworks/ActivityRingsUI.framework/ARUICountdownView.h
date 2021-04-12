/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUIRingsView.h>

@class ARUICountdownController;

@interface ARUICountdownView : ARUIRingsView {

	ARUICountdownController* _countdownController;
	ARUICountdownController* _backingTrackController;

}

@property (nonatomic,readonly) ARUICountdownController * countdownController; 
+(id)countdownViewConfiguredForCompanion;
+(id)countdownViewConfiguredForWatch;
-(ARUICountdownController *)countdownController;
-(id)initWithCountdownController:(id)arg1 ;
-(id)initWithCountdownController:(id)arg1 backingTrackController:(id)arg2 ;
-(id)backingTrackController;
@end

