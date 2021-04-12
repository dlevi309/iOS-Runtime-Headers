/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSArray, NSDictionary;

@interface _UIApplicationInfoParser : NSObject {

	BOOL _isYukonLinked;
	BOOL _isExitsOnSuspend;
	BOOL _canChangeBackgroundStyle;
	BOOL _statusBarHidden;
	BOOL _statusBarHiddenWhenVerticallyCompact;
	BOOL _systemWindowsSecure;
	BOOL _optOutOfRTL;
	BOOL _disableLayoutAwareShortcuts;
	BOOL _requiresHighResolution;
	BOOL _fakingRequiresHighResolution;
	BOOL _supportsMultiwindow;
	BOOL _supportedOnLockScreen;
	BOOL _supportsIndirectInputEvents;
	int _ignoredOverrides;
	long long _requestedStatusBarStyle;
	long long _interfaceOrientation;
	long long _launchingInterfaceOrientationForSpringBoard;
	unsigned long long _supportedInterfaceOrientations;
	long long _backgroundStyle;
	long long _whitePointAdaptivityStyle;
	unsigned long long _viewControllerBasedStatusBarAppearance;
	NSString* _launchImageFile;
	NSArray* _canvasDefinitions;
	NSDictionary* _sceneConfigurations;
	long long _supportedUserInterfaceStyle;

}

@property (nonatomic,readonly) long long requestedStatusBarStyle;                                      //@synthesize requestedStatusBarStyle=_requestedStatusBarStyle - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                                         //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) long long launchingInterfaceOrientationForSpringBoard;                  //@synthesize launchingInterfaceOrientationForSpringBoard=_launchingInterfaceOrientationForSpringBoard - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations;                      //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (nonatomic,readonly) long long backgroundStyle;                                              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) int ignoredOverrides;                                                   //@synthesize ignoredOverrides=_ignoredOverrides - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                    //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long viewControllerBasedStatusBarAppearance;              //@synthesize viewControllerBasedStatusBarAppearance=_viewControllerBasedStatusBarAppearance - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageFile;                                        //@synthesize launchImageFile=_launchImageFile - In the implementation block
@property (nonatomic,readonly) BOOL isExitsOnSuspend;                                                  //@synthesize isExitsOnSuspend=_isExitsOnSuspend - In the implementation block
@property (nonatomic,readonly) BOOL canChangeBackgroundStyle;                                          //@synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle - In the implementation block
@property (nonatomic,readonly) BOOL statusBarHidden;                                                   //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,readonly) BOOL statusBarHiddenWhenVerticallyCompact;                              //@synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact - In the implementation block
@property (nonatomic,readonly) BOOL systemWindowsSecure;                                               //@synthesize systemWindowsSecure=_systemWindowsSecure - In the implementation block
@property (nonatomic,readonly) BOOL optOutOfRTL;                                                       //@synthesize optOutOfRTL=_optOutOfRTL - In the implementation block
@property (nonatomic,readonly) BOOL disableLayoutAwareShortcuts;                                       //@synthesize disableLayoutAwareShortcuts=_disableLayoutAwareShortcuts - In the implementation block
@property (nonatomic,readonly) BOOL requiresHighResolution;                                            //@synthesize requiresHighResolution=_requiresHighResolution - In the implementation block
@property (nonatomic,readonly) BOOL fakingRequiresHighResolution;                                      //@synthesize fakingRequiresHighResolution=_fakingRequiresHighResolution - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultiwindow;                                               //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (nonatomic,copy,readonly) NSArray * canvasDefinitions;                                       //@synthesize canvasDefinitions=_canvasDefinitions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * sceneConfigurations;                                //@synthesize sceneConfigurations=_sceneConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL supportedOnLockScreen;                                             //@synthesize supportedOnLockScreen=_supportedOnLockScreen - In the implementation block
@property (nonatomic,readonly) long long supportedUserInterfaceStyle;                                  //@synthesize supportedUserInterfaceStyle=_supportedUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) BOOL supportsIndirectInputEvents;                                       //@synthesize supportsIndirectInputEvents=_supportsIndirectInputEvents - In the implementation block
-(BOOL)supportsMultiwindow;
-(long long)interfaceOrientation;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)statusBarHidden;
-(long long)whitePointAdaptivityStyle;
-(id)initWithApplicationProxy:(id)arg1 ;
-(NSString *)launchImageFile;
-(BOOL)canChangeBackgroundStyle;
-(long long)backgroundStyle;
-(long long)requestedStatusBarStyle;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(int)ignoredOverrides;
-(unsigned long long)viewControllerBasedStatusBarAppearance;
-(BOOL)systemWindowsSecure;
-(BOOL)optOutOfRTL;
-(long long)launchingInterfaceOrientationForSpringBoard;
-(long long)supportedUserInterfaceStyle;
-(BOOL)requiresHighResolution;
-(BOOL)fakingRequiresHighResolution;
-(id)_initWithApplicationPlistData:(id)arg1 ;
-(void)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1 ;
-(void)_computeSupportedUserInterfaceStyleFromInfo:(id)arg1 ;
-(id)initWithbundle:(id)arg1 ;
-(BOOL)_isLinkedOnOrAfterYukon;
-(BOOL)isExitsOnSuspend;
-(BOOL)disableLayoutAwareShortcuts;
-(NSArray *)canvasDefinitions;
-(NSDictionary *)sceneConfigurations;
-(BOOL)supportedOnLockScreen;
-(BOOL)supportsIndirectInputEvents;
@end

