/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createBackgroundView;
-(float)euVolumeLimit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_serverConnectionDied:(id)arg1 ;
-(float)_valueByApplyingEULimitsToValue:(float)arg1 ;
-(void)resetThresholdAcknowledgment;
-(BOOL)isEUVolumeLimitEnforced;
-(void)layoutSubviews;
-(void)_avSystemControllerQueue_initializeEUVolumeLimits;
-(void)setContinuousSliderCornerRadius:(double)arg1 ;
-(void)setupEUDevice;
-(float)filteredValueForValue:(float)arg1 ;
-(void)setEuDevice:(BOOL)arg1 ;
-(void)_registerForAVSystemControllerNotifications;
-(BOOL)isEUDevice;
-(void)_EUVolumeLimitChanged:(id)arg1 ;
-(void)setEuVolumeLimitEnforced:(BOOL)arg1 ;
-(void)_EUVolumeEnforcementChanged:(id)arg1 ;
-(void)setEuVolumeLimit:(float)arg1 ;
@end

