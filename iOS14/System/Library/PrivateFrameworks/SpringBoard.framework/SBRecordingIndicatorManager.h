/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAppStatusBarAssertionManagerObserver.h>
#import <libobjc.A.dylib/SBSensorActivityObserver.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class UIWindow, SBRecordingIndicatorViewController, NSDate, NSTimer, NSString;

@interface SBRecordingIndicatorManager : NSObject <SBAppStatusBarAssertionManagerObserver, SBSensorActivityObserver, SBUIActiveOrientationObserver, PTSettingsKeyObserver> {

	UIWindow* _recordingIndicatorWindow;
	UIWindow* _recordingIndicatorWindowUIKitStatusBarPortal;
	SBRecordingIndicatorViewController* _recordingIndicatorViewController;
	SBRecordingIndicatorViewController* _recordingIndicatorViewControllerUIKitStatusBarPortal;
	BOOL _frontmostStatusBarOrIndicatorPartIsHidden;
	BOOL _indicatorIsHiddenForControlCenter;
	BOOL _visibilityIsForcedByPrototypeSettings;
	NSDate* _indicatorDisplayTime;
	NSTimer* _minimumTimeOnScreenTimer;
	BOOL _isIndicatorVisible;

}

@property (nonatomic,readonly) BOOL isIndicatorVisible;              //@synthesize isIndicatorVisible=_isIndicatorVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(id)initWithSensorActivityDataProvider:(id)arg1 ;
-(void)controlCenterWillPresent:(id)arg1 ;
-(void)controlCenterDidDismiss:(id)arg1 ;
-(void)_updateIndicatorStyleForSensorActivityAttributions:(id)arg1 ;
-(BOOL)_allowStatusBarDelayForCameraApp:(id)arg1 ;
-(void)setIndicatorVisible:(BOOL)arg1 allowStatusBarDelayForCameraApp:(BOOL)arg2 ;
-(BOOL)isIndicatorVisible;
-(void)setIndicatorVisible:(BOOL)arg1 ;
-(void)dataProviderDidUpdate:(id)arg1 ;
-(void)updateRecordingIndicatorForStatusBarChanges;
-(void)_updateIndicatorColorForSensorType:(long long)arg1 ;
-(id)indicatorColorForSensorType:(long long)arg1 ;
-(void)statusBarAssertionManager:(id)arg1 addStatusBarSettingsAssertion:(id)arg2 ;
-(void)statusBarAssertionManager:(id)arg1 removeStatusBarSettingsAssertion:(id)arg2 ;
@end

