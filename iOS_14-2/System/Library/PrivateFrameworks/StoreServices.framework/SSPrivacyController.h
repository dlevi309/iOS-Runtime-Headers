/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSPrivacyController : NSObject
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 URL:(id)arg2 ;
+(void)_appendPrivacyAcknowledgementToLocalAccount:(id)arg1 ;
+(void)_appendPrivacyAcknowledgement:(id)arg1 toAccount:(id)arg2 ;
+(unsigned long long)_currentPrivacyContentVersionForIdentifier:(id)arg1 ;
+(id)_translateIdentifierToPrivacyAcknowledgement:(id)arg1 withVersion:(unsigned long long)arg2 ;
+(id)viewControllerForPrivacySplashWithIdentifier:(id)arg1 URL:(id)arg2 ;
+(id)appStorePrivacyIdentifiers;
+(id)_syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(void)syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(id)storePrivacyIdentifiers;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 ;
+(id)_appendPrivacyAcknowledgementToActiveAccount:(id)arg1 withURL:(id)arg2 ;
+(BOOL)shouldDisplayPrivacyLinkWithIdentifier:(id)arg1 ;
@end

