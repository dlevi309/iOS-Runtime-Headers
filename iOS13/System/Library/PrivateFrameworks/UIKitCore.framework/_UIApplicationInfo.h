/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <FrontBoardServices/FBSApplicationInfo.h>

@class _UIApplicationInfoParser, NSArray, NSString;

@interface _UIApplicationInfo : FBSApplicationInfo {

	long long _launchingInterfaceOrientation;
	_UIApplicationInfoParser* _plistParser;
	NSArray* _lazy_folderNames;
	NSString* _lazy_fallbackFolderName;
	BOOL _canChangeBackgroundStyle;
	BOOL _statusBarHidden;
	BOOL _statusBarHiddenWhenVerticallyCompact;
	BOOL _systemWindowsSecure;
	BOOL _optOutOfRTL;
	BOOL _requiresHighResolution;
	BOOL _fakingRequiresHighResolution;
	int _ignoredOverrides;
	long long _requestedStatusBarStyle;
	long long _backgroundStyle;
	NSString* _launchImageFile;
	long long _supportedUserInterfaceStyle;
	unsigned long long _viewControllerBasedStatusBarAppearance;
	long long _whitePointAdaptivityStyle;

}

@property (nonatomic,readonly) int ignoredOverrides;                                                   //@synthesize ignoredOverrides=_ignoredOverrides - In the implementation block
@property (nonatomic,readonly) unsigned long long viewControllerBasedStatusBarAppearance;              //@synthesize viewControllerBasedStatusBarAppearance=_viewControllerBasedStatusBarAppearance - In the implementation block
@property (nonatomic,readonly) BOOL systemWindowsSecure;                                               //@synthesize systemWindowsSecure=_systemWindowsSecure - In the implementation block
@property (nonatomic,readonly) BOOL optOutOfRTL;                                                       //@synthesize optOutOfRTL=_optOutOfRTL - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                    //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (nonatomic,readonly) BOOL requiresHighResolution;                                            //@synthesize requiresHighResolution=_requiresHighResolution - In the implementation block
@property (nonatomic,readonly) BOOL fakingRequiresHighResolution;                                      //@synthesize fakingRequiresHighResolution=_fakingRequiresHighResolution - In the implementation block
@property (nonatomic,readonly) long long requestedStatusBarStyle;                                      //@synthesize requestedStatusBarStyle=_requestedStatusBarStyle - In the implementation block
@property (nonatomic,readonly) BOOL canChangeBackgroundStyle;                                          //@synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle - In the implementation block
@property (nonatomic,readonly) long long backgroundStyle;                                              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) BOOL statusBarHidden;                                                   //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,readonly) BOOL statusBarHiddenWhenVerticallyCompact;                              //@synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageFile;                                        //@synthesize launchImageFile=_launchImageFile - In the implementation block
@property (nonatomic,readonly) long long supportedUserInterfaceStyle;                                  //@synthesize supportedUserInterfaceStyle=_supportedUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) NSArray * folderNames; 
@property (nonatomic,readonly) NSString * fallbackFolderName; 
+(id)_localizedFolderNameForName:(id)arg1 ;
+(id)_genreNameForID:(long long)arg1 ;
-(BOOL)statusBarHidden;
-(long long)whitePointAdaptivityStyle;
-(void)_loadFromProxy:(id)arg1 ;
-(NSString *)launchImageFile;
-(BOOL)canChangeBackgroundStyle;
-(long long)backgroundStyle;
-(long long)requestedStatusBarStyle;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(int)ignoredOverrides;
-(unsigned long long)viewControllerBasedStatusBarAppearance;
-(BOOL)systemWindowsSecure;
-(BOOL)optOutOfRTL;
-(long long)supportedUserInterfaceStyle;
-(void)_lock_loadFolderNamesIfNecessary;
-(BOOL)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3 ;
-(BOOL)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3 ;
-(NSArray *)folderNames;
-(NSString *)fallbackFolderName;
-(BOOL)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 ;
-(BOOL)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 ;
-(BOOL)requiresHighResolution;
-(BOOL)fakingRequiresHighResolution;
-(long long)_launchingInterfaceOrientation;
@end

