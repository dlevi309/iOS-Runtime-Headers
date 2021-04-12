/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSPrivacyController : NSObject
+(unsigned long long)_currentPrivacyContentVersionForIdentifier:(id)arg1 ;
+(id)_translateIdentifierToPrivacyAcknowledgement:(id)arg1 withVersion:(unsigned long long)arg2 ;
+(void)_appendPrivacyAcknowledgementToLocalAccount:(id)arg1 ;
+(id)_appendPrivacyAcknowledgementToActiveAccount:(id)arg1 withURL:(id)arg2 ;
+(id)_syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 URL:(id)arg2 ;
+(void)_appendPrivacyAcknowledgement:(id)arg1 toAccount:(id)arg2 ;
+(id)storePrivacyIdentifiers;
+(id)appStorePrivacyIdentifiers;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 ;
+(BOOL)shouldDisplayPrivacyLinkWithIdentifier:(id)arg1 ;
+(void)syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(id)viewControllerForPrivacySplashWithIdentifier:(id)arg1 URL:(id)arg2 ;
@end

