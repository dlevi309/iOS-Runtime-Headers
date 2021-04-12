/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/IKAppContextInspectorDelegate.h>
#import <libobjc.A.dylib/IKAppDeviceConfig.h>
#import <TVMLKit/_TVAppNavigationControllerDelegate.h>
#import <libobjc.A.dylib/IKAppContextDelegate.h>

@protocol TVAppRootViewController, TVApplicationControllerDelegate, UITraitEnvironment;
@class IKAppContext, _TVMLKitApplication, IKAppDataStorage, NSXPCListener, NSDictionary, NSDate, UIViewController, UIWindow, TVApplicationControllerContext, _TVApplicationInspector, UINavigationController, UIView, NSString;

@interface TVApplicationController : NSObject <IKAppContextInspectorDelegate, IKAppDeviceConfig, _TVAppNavigationControllerDelegate, IKAppContextDelegate> {

	IKAppContext* _appContext;
	_TVMLKitApplication* _application;
	IKAppDataStorage* _appLocalStorage;
	NSXPCListener* _serviceListener;
	NSDictionary* _openURLResumeOptions;
	NSDictionary* _openURLReloadOptions;
	BOOL _suspended;
	BOOL _reloadInProgress;
	BOOL _reloadOnResume;
	double _reloadOnResumeMinInterval;
	NSDate* _reloadOnResumeBackgroundedDate;
	BOOL _doLaunchOpenURLHandling;
	NSDictionary* _launchOpenURLOptions;
	BOOL _popViewControllerOnBackground;
	UIViewController*<TVAppRootViewController> _appRootViewController;
	long long _interfaceOrientation;
	UIWindow* _window;
	TVApplicationControllerContext* _context;
	id<TVApplicationControllerDelegate> _delegate;
	_TVApplicationInspector* _applicationInspector;
	id<UITraitEnvironment> _keyTraitEnvironment;

}

@property (nonatomic,readonly) UINavigationController * _currentNavigationController; 
@property (nonatomic,readonly) _TVApplicationInspector * applicationInspector;                     //@synthesize applicationInspector=_applicationInspector - In the implementation block
@property (nonatomic,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) UIViewController * rootViewController; 
@property (assign,nonatomic,__weak) UIView * viewServiceKeyView; 
@property (assign,nonatomic,__weak) id<UITraitEnvironment> keyTraitEnvironment;                    //@synthesize keyTraitEnvironment=_keyTraitEnvironment - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) TVApplicationControllerContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<TVApplicationControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_jsLaunchOptionsWithApplicationOptions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<TVApplicationControllerDelegate>)delegate;
-(id)timeZone;
-(void)stop;
-(TVApplicationControllerContext *)context;
-(void)reload;
-(UIWindow *)window;
-(UIViewController *)rootViewController;
-(UINavigationController *)navigationController;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)applicationWillSuspend:(id)arg1 ;
-(id)_rootViewController;
-(void)_statusBarOrientationDidChange:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(CGSize)screenSize;
-(id)activeDocument;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(IKAppContext *)appContext;
-(id)deviceConfigForContext:(id)arg1 ;
-(id)navigationControllerForContext:(id)arg1 ;
-(id)modalControllerForContext:(id)arg1 ;
-(id)tabBarForContext:(id)arg1 ;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(id)_appContext;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(BOOL)appContext:(id)arg1 highlightViewForElement:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6 ;
-(BOOL)appContext:(id)arg1 highlightViewsForElements:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6 ;
-(BOOL)cancelHighlightViewForAppContext:(id)arg1 ;
-(void)appContext:(id)arg1 didChangeInspectElementMode:(BOOL)arg2 ;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(id)systemLanguage;
-(id)storeFrontCountryCode;
-(void)_launchApp;
-(BOOL)isTimeZoneSet;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(id<UITraitEnvironment>)keyTraitEnvironment;
-(UINavigationController *)_currentNavigationController;
-(void)_openURLControllerDidDisplay:(id)arg1 ;
-(void)applicationDidResume:(id)arg1 ;
-(BOOL)_hasReloadOnResumeMinIntervalPassed;
-(void)_reloadControllerDidDisplay:(id)arg1 ;
-(void)setKeyTraitEnvironment:(id<UITraitEnvironment>)arg1 ;
-(BOOL)_shouldReloadOnResume;
-(void)_openURLControllerHandler:(BOOL)arg1 ;
-(BOOL)appNavigationController:(id)arg1 shouldOverrideModalBehaviorForDocument:(id)arg2 andExistingDocument:(id)arg3 ;
-(BOOL)appNavigationController:(id)arg1 shouldIgnoreDismissalForViewController:(id)arg2 ;
-(BOOL)appNavigationController:(id)arg1 shouldDismissShroudForDocument:(id)arg2 ;
-(id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3 ;
-(BOOL)openURL:(id)arg1 options:(id)arg2 ;
-(BOOL)jsOpenURL:(id)arg1 options:(id)arg2 ;
-(void)evaluateInJavaScriptContext:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)viewServiceKeyView;
-(void)setViewServiceKeyView:(UIView *)arg1 ;
-(void)_openURLOnAppLaunchControllerDidDisplay:(id)arg1 ;
-(_TVApplicationInspector *)applicationInspector;
@end

