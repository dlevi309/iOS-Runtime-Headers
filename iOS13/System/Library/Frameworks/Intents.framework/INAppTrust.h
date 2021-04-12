/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@interface INAppTrust : NSObject
+(BOOL)shouldTrustExtensionForLaunch:(id)arg1 ;
+(BOOL)_shouldTrustExtensionForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(id)extensionsTrustedForLaunch:(id)arg1 ;
+(BOOL)shouldTrustAppForLaunch:(id)arg1 ;
+(BOOL)_shouldTrustAppForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(id)appsTrustedForLaunch:(id)arg1 ;
+(BOOL)_appRequiresExplicitTrust:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
@end

