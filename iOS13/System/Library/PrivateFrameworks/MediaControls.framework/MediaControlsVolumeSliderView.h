/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <ControlCenterUIKit/CCUIContinuousSliderView.h>

@protocol OS_dispatch_queue;
@class UIView, UIImpactFeedbackGenerator, NSObject;

@interface MediaControlsVolumeSliderView : CCUIContinuousSliderView {

	UIView* _orangeValueView;
	BOOL _didAcknowledgeThreshold;
	BOOL _didHitThreshold;
	BOOL _didTakeActionToAcknowledge;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	UIView* _materialView;
	NSObject*<OS_dispatch_queue> _avSystemControllerQueue;
	BOOL _euDevice;
	BOOL _euVolumeLimitEnforced;
	float _euVolumeLimit;

}

@property (getter=isEUDevice) BOOL euDevice;                                        //@synthesize euDevice=_euDevice - In the implementation block
@property (getter=isEUVolumeLimitEnforced) BOOL euVolumeLimitEnforced;              //@synthesize euVolumeLimitEnforced=_euVolumeLimitEnforced - In the implementation block
@property (assign) float euVolumeLimit;                                             //@synthesize euVolumeLimit=_euVolumeLimit - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)filteredValueForValue:(float)arg1 ;
-(void)setContinuousSliderCornerRadius:(double)arg1 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_registerForAVSystemControllerNotifications;
-(void)resetThresholdAcknowledgment;
-(void)_avSystemControllerQueue_initializeEUVolumeLimits;
-(void)setupEUDevice;
-(float)euVolumeLimit;
-(BOOL)isEUDevice;
-(float)_valueByApplyingEULimitsToValue:(float)arg1 ;
-(BOOL)isEUVolumeLimitEnforced;
-(void)setEuVolumeLimit:(float)arg1 ;
-(void)setEuVolumeLimitEnforced:(BOOL)arg1 ;
-(void)setEuDevice:(BOOL)arg1 ;
-(void)_serverConnectionDied:(id)arg1 ;
-(void)_EUVolumeLimitChanged:(id)arg1 ;
-(void)_EUVolumeEnforcementChanged:(id)arg1 ;
@end

