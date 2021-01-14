/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, FBSOrientationObserver, NSString;

@interface AXUIDaemonApplicationDelegate : NSObject <UIApplicationDelegate> {

	FBSOrientationObserver* _orientationObserver;
	UIWindow* window;

}

@property (nonatomic,retain) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFeatureEnabled;
+(id)featureEnabledStatusDidChangeNotification;
+(id)loggingFacility;
+(id)debugFeatureName;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(UIWindow *)window;
-(void)_exitIfNotEnabled;
-(void)_setKeepAlive:(BOOL)arg1 ;
-(void)_enabledPreferenceDidChange:(id)arg1 ;
-(void)didFinishLaunching;
-(void)_didUpdateToOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willTerminate;
-(void)didUpdateOrientation;
-(void)_systemAppDidBecomeReady;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)dealloc;
@end

