/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@interface INAppTrust : NSObject
+(BOOL)shouldTrustExtensionForLaunch:(id)arg1 ;
+(BOOL)_shouldTrustExtensionForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(id)extensionsTrustedForLaunch:(id)arg1 ;
+(BOOL)shouldTrustAppForLaunch:(id)arg1 ;
+(id)appsTrustedForLaunch:(id)arg1 ;
+(BOOL)_shouldTrustAppForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(BOOL)_appRequiresExplicitTrust:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
@end

