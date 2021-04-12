/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


#import <SearchUI/SearchUI-Structs.h>
@interface SearchUIUtilities : NSObject
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)isWideScreen;
+(id)pointerKeyMapTable;
+(id)imageForBlockedApp;
+(id)environmentForDelegate:(id)arg1 ;
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
+(id)uiColorForSFColor:(id)arg1 ;
+(BOOL)deviceIsAuthenticated;
+(id)hyphenatableStringForString:(id)arg1 ;
+(id)fileProviderItemIDForFileResult:(id)arg1 ;
+(void)dispatchAsyncIfNecessary:(/*^block*/id)arg1 ;
+(void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2 ;
+(BOOL)deviceSupportsRotation;
+(BOOL)isPortraitForWindow:(id)arg1 ;
+(void)fetchURLForFileResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)openApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)playNegativeHaptic;
+(id)bundleIdentifierForApp:(unsigned long long)arg1 ;
+(void)presentViewController:(id)arg1 environment:(id)arg2 prefersModalPresentation:(BOOL)arg3 ;
+(void)openApplicationWithBundleIdentifier:(id)arg1 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
+(BOOL)appIsValidForBundleIdentifier:(id)arg1 ;
+(double)standardTableCellContentInset;
+(double)onePixelForCurrentScreenResolution;
+(id)sendFeedbackForPunchout:(id)arg1 toListener:(id)arg2 fromCardSection:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 ;
+(void)requestDeviceUnlockWithSuccessHandler:(/*^block*/id)arg1 ;
+(void)requestDeviceUnlock:(/*^block*/id)arg1 ;
+(BOOL)backgroundColorPrefersWhiteForegroundText:(id)arg1 ;
+(BOOL)isLargeIpad;
+(BOOL)resultBlockedForScreenTime:(id)arg1 ;
+(id)openOptions;
+(BOOL)resultIsSiriAction:(id)arg1 ;
+(void)performOpenTask:(/*^block*/id)arg1 ;
+(void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 ;
+(BOOL)isMinimizedHardwareKeyboardMode;
+(void)openURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 ;
+(id)addAspectRatioConstraintForSize:(CGSize)arg1 toView:(id)arg2 ;
+(void)openPunchout:(id)arg1 ;
+(id)stringForSFRichTextArray:(id)arg1 ;
+(BOOL)shouldHandleCardSectionEngagement:(id)arg1 feedbackListener:(id)arg2 ;
+(id)stringForSFRichText:(id)arg1 ;
+(void)openPunchout:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)defaultBrowserBundleIdentifier;
+(void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg1 ;
@end

