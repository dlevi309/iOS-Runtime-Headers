/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL limitFeaturesForRemoteLock; 
@property (nonatomic,readonly) BOOL showLegalText; 
@property (assign,nonatomic) BOOL showAuthenticationEngineeringUI; 
@property (assign,nonatomic) BOOL showSupervisionText; 
@property (assign,nonatomic) BOOL showQuickNoteFingerGestureRecognizer; 
@property (assign,nonatomic) BOOL forceWakeToMaps; 
@property (assign,nonatomic) double nowPlayingTimeout; 
@property (assign,nonatomic) BOOL weDontNeedNoEducation; 
@property (assign,nonatomic) BOOL useDefaultsValuesForCameraPrewarm; 
@property (assign,nonatomic) BOOL prewarmCameraOnSwipe; 
@property (assign,nonatomic) double cameraSwipePrewarmThreshold; 
@property (assign,nonatomic) BOOL prelaunchCameraOnSwipe; 
@property (assign,nonatomic) double cameraSwipePrelaunchThreshold; 
@property (assign,nonatomic) BOOL prewarmCameraOnButtonTouch; 
@property (assign,nonatomic) BOOL prelaunchCameraOnButtonTouch; 
-(void)setPrelaunchCameraOnSwipe:(BOOL)arg1 ;
-(BOOL)prelaunchCameraOnSwipe;
-(void)setCameraSwipePrewarmThreshold:(double)arg1 ;
-(double)cameraSwipePrewarmThreshold;
-(void)setShowLegalText:(BOOL)arg1 ;
-(BOOL)showLegalText;
-(void)setShowAuthenticationEngineeringUI:(BOOL)arg1 ;
-(BOOL)showAuthenticationEngineeringUI;
-(void)setPrewarmCameraOnSwipe:(BOOL)arg1 ;
-(BOOL)prewarmCameraOnSwipe;
-(void)setCameraSwipePrelaunchThreshold:(double)arg1 ;
-(double)cameraSwipePrelaunchThreshold;
-(void)setNowPlayingTimeout:(double)arg1 ;
-(double)nowPlayingTimeout;
-(void)setShowQuickNoteFingerGestureRecognizer:(BOOL)arg1 ;
-(BOOL)showQuickNoteFingerGestureRecognizer;
-(void)setUseDefaultsValuesForCameraPrewarm:(BOOL)arg1 ;
-(BOOL)useDefaultsValuesForCameraPrewarm;
-(void)setLimitFeaturesForRemoteLock:(BOOL)arg1 ;
-(BOOL)limitFeaturesForRemoteLock;
-(void)setWeDontNeedNoEducation:(BOOL)arg1 ;
-(BOOL)weDontNeedNoEducation;
-(void)setPrelaunchCameraOnButtonTouch:(BOOL)arg1 ;
-(BOOL)prelaunchCameraOnButtonTouch;
-(void)setForceWakeToMaps:(BOOL)arg1 ;
-(BOOL)forceWakeToMaps;
-(void)setPrewarmCameraOnButtonTouch:(BOOL)arg1 ;
-(BOOL)prewarmCameraOnButtonTouch;
-(void)setShowSupervisionText:(BOOL)arg1 ;
-(BOOL)showSupervisionText;
-(void)_bindAndRegisterDefaults;
@end

