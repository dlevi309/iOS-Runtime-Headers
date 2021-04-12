/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTViewFaceTrackingDelegate.h>
#import <libobjc.A.dylib/AVTUIRaiseGestureManagerDelegate.h>

@protocol AVTFaceTrackingManagerDelegate;
@class AVTUserInfoView, AVTUIEnvironment, AVTUIRaiseGestureManager, AVTView, FBSDisplayLayoutMonitor, NSTimer, NSString;

@interface AVTFaceTrackingManager : NSObject <AVTViewFaceTrackingDelegate, AVTUIRaiseGestureManagerDelegate> {

	BOOL _faceTrackingManagementPaused;
	BOOL _shouldRecheckLowLightAndSensorOcclusionState;
	id<AVTFaceTrackingManagerDelegate> _delegate;
	AVTUserInfoView* _userInfoView;
	AVTUIEnvironment* _environment;
	AVTUIRaiseGestureManager* _raiseGestureManager;
	AVTView* _avatarView;
	FBSDisplayLayoutMonitor* _displayLayoutMonitor;
	NSTimer* _lowLightAndSensorOcclusionLockoutTimer;
	NSTimer* _trackingLostMessageTimer;
	NSTimer* _pauseTrackingTimer;
	unsigned long long _interruptionType;
	NSString* _localizedDeviceName;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTUIRaiseGestureManager * raiseGestureManager;                //@synthesize raiseGestureManager=_raiseGestureManager - In the implementation block
@property (nonatomic,readonly) AVTView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) FBSDisplayLayoutMonitor * displayLayoutMonitor;                //@synthesize displayLayoutMonitor=_displayLayoutMonitor - In the implementation block
@property (nonatomic,retain) NSTimer * lowLightAndSensorOcclusionLockoutTimer;                //@synthesize lowLightAndSensorOcclusionLockoutTimer=_lowLightAndSensorOcclusionLockoutTimer - In the implementation block
@property (assign,nonatomic) BOOL shouldRecheckLowLightAndSensorOcclusionState;               //@synthesize shouldRecheckLowLightAndSensorOcclusionState=_shouldRecheckLowLightAndSensorOcclusionState - In the implementation block
@property (nonatomic,retain) NSTimer * trackingLostMessageTimer;                              //@synthesize trackingLostMessageTimer=_trackingLostMessageTimer - In the implementation block
@property (nonatomic,retain) NSTimer * pauseTrackingTimer;                                    //@synthesize pauseTrackingTimer=_pauseTrackingTimer - In the implementation block
@property (assign,nonatomic) unsigned long long interruptionType;                             //@synthesize interruptionType=_interruptionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDeviceName;                           //@synthesize localizedDeviceName=_localizedDeviceName - In the implementation block
@property (assign,nonatomic) BOOL faceTrackingManagementPaused;                               //@synthesize faceTrackingManagementPaused=_faceTrackingManagementPaused - In the implementation block
@property (assign,nonatomic,__weak) id<AVTFaceTrackingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVTUserInfoView * userInfoView;                                //@synthesize userInfoView=_userInfoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)desiredUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg1 ;
-(FBSDisplayLayoutMonitor *)displayLayoutMonitor;
-(id<AVTFaceTrackingManagerDelegate>)delegate;
-(AVTView *)avatarView;
-(void)setDelegate:(id<AVTFaceTrackingManagerDelegate>)arg1 ;
-(void)setFaceTrackingManagementPaused:(BOOL)arg1 ;
-(AVTUserInfoView *)userInfoView;
-(void)resumeFaceTrackingIfNeededAnimated:(BOOL)arg1 ;
-(id)initWithAvatarView:(id)arg1 raiseGestureManager:(id)arg2 environment:(id)arg3 ;
-(AVTUIEnvironment *)environment;
-(id)initWithAvatarView:(id)arg1 raiseGestureManager:(id)arg2 userInfoView:(id)arg3 environment:(id)arg4 ;
-(void)setupDisplayLayoutMonitor;
-(AVTUIRaiseGestureManager *)raiseGestureManager;
-(void)invalidateFaceTrackingTimers;
-(void)cancelLowLightAndSensorOcclusionTimer;
-(void)startTrackingLostTimers;
-(void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)resetForResumingTrackingAnimated:(BOOL)arg1 ;
-(unsigned long long)interruptionType;
-(void)setInterruptionType:(unsigned long long)arg1 ;
-(id)userInfoStringForCurrentTrackingState;
-(void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg1 ;
-(NSTimer *)trackingLostMessageTimer;
-(void)setTrackingLostMessageTimer:(NSTimer *)arg1 ;
-(NSTimer *)pauseTrackingTimer;
-(void)setPauseTrackingTimer:(NSTimer *)arg1 ;
-(BOOL)faceTrackingManagementPaused;
-(void)updateForTrackingLost;
-(void)updateForPausingTracking;
-(void)updateUserInfoBackdropForCurrentLabel;
-(void)updateForPausingTrackingWithLabel:(BOOL)arg1 ;
-(void)updateInterruptionTypeIfNeeded:(unsigned long long)arg1 ;
-(NSString *)localizedDeviceName;
-(void)resetForTrackingFoundAFaceAnimated:(BOOL)arg1 ;
-(NSTimer *)lowLightAndSensorOcclusionLockoutTimer;
-(void)setLowLightAndSensorOcclusionLockoutTimer:(NSTimer *)arg1 ;
-(void)setShouldRecheckLowLightAndSensorOcclusionState:(BOOL)arg1 ;
-(BOOL)shouldRecheckLowLightAndSensorOcclusionState;
-(void)avatarViewDidUpdateWithLowLightOrCameraOcclusionStatus;
-(void)avatarView:(id)arg1 didUpdateWithFaceTrackingStatus:(BOOL)arg2 ;
-(void)layoutMonitorDidUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)avatarView:(id)arg1 didUpdateWithLowLightStatus:(BOOL)arg2 ;
-(void)avatarView:(id)arg1 didUpdateWithSensorOcclusionStatus:(BOOL)arg2 ;
-(void)avatarView:(id)arg1 faceTrackingSessionFailedWithError:(id)arg2 ;
-(void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)arg1 ;
-(void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)arg1 ;
-(void)raiseGestureManagerDidRecognizeRaiseGesture:(id)arg1 ;
-(void)dealloc;
@end
