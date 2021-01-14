/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol ENOnboardingManagerDelegate;
@class NSObject, CXCallObserver;

@interface ENOnboardingManager : NSObject {

	int _screenLockNotifyToken;
	int _cameraIrisFrontNotifyToken;
	int _cameraIrisBackNotifyToken;
	int _cameraIrisBackTeleNotifyToken;
	BOOL _pendingBuddyOnboarding;
	BOOL _isCaptureSessionRunning;
	NSObject*<ENOnboardingManagerDelegate> _delegate;
	CXCallObserver* _callObserver;

}

@property (nonatomic,retain) CXCallObserver * callObserver;                                       //@synthesize callObserver=_callObserver - In the implementation block
@property (assign,nonatomic) BOOL isCaptureSessionRunning;                                        //@synthesize isCaptureSessionRunning=_isCaptureSessionRunning - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ENOnboardingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdealTimeForBuddy,nonatomic,readonly) BOOL idealTimeForBuddy; 
@property (getter=isDeviceUnlocked,nonatomic,readonly) BOOL deviceUnlocked; 
@property (assign,nonatomic) BOOL pendingBuddyOnboarding;                                         //@synthesize pendingBuddyOnboarding=_pendingBuddyOnboarding - In the implementation block
-(BOOL)isDeviceUnlocked;
-(id)init;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(NSObject*<ENOnboardingManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<ENOnboardingManagerDelegate>)arg1 ;
-(CXCallObserver *)callObserver;
-(void)dealloc;
-(BOOL)_isInLostMode;
-(void)setPendingBuddyOnboarding:(BOOL)arg1 ;
-(void)setShouldObserveDeviceUnlocks:(BOOL)arg1 ;
-(BOOL)pendingBuddyOnboarding;
-(BOOL)isIdealTimeForBuddy;
-(void)_observeCameraIrisNotifications;
-(BOOL)isCaptureSessionRunning;
-(void)_deviceLockStateChangedWithToken:(int)arg1 ;
-(void)setIsCaptureSessionRunning:(BOOL)arg1 ;
-(void)_cameraIrisStateChangedWithToken:(int)arg1 ;
@end

