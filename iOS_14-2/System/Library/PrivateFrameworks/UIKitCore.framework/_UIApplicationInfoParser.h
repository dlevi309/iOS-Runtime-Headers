/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _keyColorAssetName;
	NSArray* _canvasDefinitions;
	NSDictionary* _sceneConfigurations;
	long long _supportedUserInterfaceStyle;
	NSArray* _deviceFamilies;

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
@property (nonatomic,copy,readonly) NSString * keyColorAssetName;                                      //@synthesize keyColorAssetName=_keyColorAssetName - In the implementation block
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
@property (nonatomic,copy,readonly) NSArray * deviceFamilies;                                          //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
+(id)mainBundleInfoParser;
-(unsigned long long)viewControllerBasedStatusBarAppearance;
-(NSString *)launchImageFile;
-(id)initWithApplicationProxy:(id)arg1 ;
-(long long)supportedUserInterfaceStyle;
-(NSArray *)deviceFamilies;
-(BOOL)systemWindowsSecure;
-(long long)backgroundStyle;
-(BOOL)canChangeBackgroundStyle;
-(BOOL)supportsMultiwindow;
-(BOOL)supportsIndirectInputEvents;
-(void)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1 ;
-(NSString *)keyColorAssetName;
-(BOOL)isExitsOnSuspend;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)requiresHighResolution;
-(BOOL)statusBarHidden;
-(void)_computeSupportedUserInterfaceStyleFromInfo:(id)arg1 ;
-(BOOL)supportedOnLockScreen;
-(long long)requestedStatusBarStyle;
-(BOOL)_isLinkedOnOrAfterYukon;
-(long long)interfaceOrientation;
-(id)_initWithBundle:(id)arg1 ;
-(BOOL)fakingRequiresHighResolution;
-(long long)whitePointAdaptivityStyle;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(int)ignoredOverrides;
-(NSArray *)canvasDefinitions;
-(long long)launchingInterfaceOrientationForSpringBoard;
-(id)_initWithApplicationPlistData:(id)arg1 ;
-(BOOL)optOutOfRTL;
-(BOOL)disableLayoutAwareShortcuts;
-(NSDictionary *)sceneConfigurations;
@end

