/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, FBSOrientationObserver, NSString;

@interface AXUIDaemonApplicationDelegate : NSObject <UIApplicationDelegate> {

	FBSOrientationObserver* _orientationObserver;
	UIWindow* window;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)featureEnabledStatusDidChangeNotification;
+(id)loggingFacility;
+(id)debugFeatureName;
+(BOOL)isFeatureEnabled;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)_exitIfNotEnabled;
-(void)_setKeepAlive:(BOOL)arg1 ;
-(void)_enabledPreferenceDidChange:(id)arg1 ;
-(void)didFinishLaunching;
-(void)_didUpdateToOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willTerminate;
-(void)didUpdateOrientation;
-(void)_systemAppDidBecomeReady;
@end

