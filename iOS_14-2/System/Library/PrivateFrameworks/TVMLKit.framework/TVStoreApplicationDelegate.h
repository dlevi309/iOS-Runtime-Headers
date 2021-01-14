/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <TVMLKit/TVApplicationControllerDelegate.h>

@class TVStoreApplicationSetupHelper, NSDictionary, NSURL, BKSProcessAssertion, UIWindow, TVApplicationController, IKURLBagCache, NSString;

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate> {

	TVStoreApplicationSetupHelper* _setupHelper;
	NSDictionary* _launchOptions;
	NSURL* _launchOpenURL;
	NSDictionary* _launchOpenURLOptions;
	BKSProcessAssertion* _launchAssertion;
	BOOL _shouldTerminateOnEnterBackground;
	BOOL _headLess;
	BOOL _overrideOrientation;
	UIWindow* _window;
	TVApplicationController* _appController;
	IKURLBagCache* _bagCache;

}

@property (nonatomic,retain) UIWindow * window;                                      //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) TVApplicationController * appController;              //@synthesize appController=_appController - In the implementation block
@property (nonatomic,readonly) IKURLBagCache * bagCache;                             //@synthesize bagCache=_bagCache - In the implementation block
@property (nonatomic,readonly) BOOL supportsIdleModeVisualEffects; 
@property (assign,nonatomic) BOOL overrideOrientation;                               //@synthesize overrideOrientation=_overrideOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(IKURLBagCache *)bagCache;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)reload;
-(UIWindow *)window;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)dealloc;
-(id)bootURL;
-(TVApplicationController *)appController;
-(void)appController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)bagBootURLKey;
-(id)offlineJSURL;
-(void)_launchApp;
-(void)didShowViewController;
-(BOOL)supportsIdleModeVisualEffects;
-(void)updateIdleModeVisualEffectsStatus:(BOOL)arg1 ;
-(void)_controllerDidDisplay:(id)arg1 ;
-(void)_presetDialogWithError:(long long)arg1 appController:(id)arg2 ;
-(BOOL)shouldBeForcedLeftToRight;
-(id)_bagBootURL;
-(void)_loadWithBootURL:(id)arg1 ;
-(BOOL)overrideOrientation;
-(void)setupWithBootURL:(id)arg1 ;
-(id)appLocalBootURL;
-(id)cachedBagPath;
-(void)setOverrideOrientation:(BOOL)arg1 ;
@end

