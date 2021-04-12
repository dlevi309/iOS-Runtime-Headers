/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


#import <SearchUI/SearchUI-Structs.h>
@interface SearchUIUtilities : NSObject
+(void)initialize;
+(id)localizedStringForKey:(id)arg1 ;
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
+(BOOL)isWideScreen;
+(double)onePixelForCurrentScreenResolution;
+(CGSize)maxThumbnailSize;
+(double)standardTableCellContentInset;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)dispatchAsyncIfNecessary:(/*^block*/id)arg1 ;
+(BOOL)deviceSupportsRotation;
+(void)performAnimatableChanges:(/*^block*/id)arg1 ;
+(BOOL)resultBlockedForScreenTime:(id)arg1 ;
+(id)pointerKeyMapTable;
+(BOOL)deviceIsAuthenticated;
+(void)openPunchout:(id)arg1 ;
+(BOOL)resultIsSiriAction:(id)arg1 ;
+(BOOL)isLargeIpad;
+(BOOL)isPortraitForWindow:(id)arg1 ;
+(void)openApplicationWithBundleIdentifier:(id)arg1 ;
+(void)presentViewController:(id)arg1 withFeedbackDelegate:(id)arg2 fromView:(id)arg3 ;
+(id)bundleIdentifierForApp:(unsigned long long)arg1 ;
+(id)openOptions;
+(void)performOpenTask:(/*^block*/id)arg1 ;
+(id)sendFeedbackForPunchout:(id)arg1 toListener:(id)arg2 fromCardSection:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 ;
+(BOOL)shouldHandleCardSectionEngagement:(id)arg1 feedbackListener:(id)arg2 ;
+(void)requestDeviceUnlock:(/*^block*/id)arg1 ;
+(id)stringForSFRichText:(id)arg1 ;
+(BOOL)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg1 ;
+(id)uiColorForSFColor:(id)arg1 ;
+(BOOL)backgroundColorPrefersWhiteForegroundText:(id)arg1 ;
+(id)hyphenatableStringForString:(id)arg1 ;
+(id)addAspectRatioConstraintForImageView:(id)arg1 ;
+(void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2 ;
+(void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 ;
+(void)requestDeviceUnlockWithSuccessHandler:(/*^block*/id)arg1 ;
+(void)playNegativeHaptic;
+(id)stringForSFRichTextArray:(id)arg1 ;
+(BOOL)appIsValidForBundleIdentifier:(id)arg1 ;
+(id)imageForBlockedApp;
+(void)fetchURLForFileResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

