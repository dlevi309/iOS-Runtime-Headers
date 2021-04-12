/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SKCloudServiceController : NSObject {

	BOOL _hasValidCloudServiceCapability;
	unsigned long long _cloudServiceCapability;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _allowsPromptingForPrivacyAcknowledgement;

}

@property (assign,setter=_setAllowsPromptingForPrivacyAcknowledgement:,nonatomic) BOOL _allowsPromptingForPrivacyAcknowledgement;              //@synthesize allowsPromptingForPrivacyAcknowledgement=_allowsPromptingForPrivacyAcknowledgement - In the implementation block
+(long long)authorizationStatus;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)requestCapabilitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleInvalidation;
-(void)_setAllowsPromptingForPrivacyAcknowledgement:(BOOL)arg1 ;
-(void)_storefrontDidChangeNotification;
-(void)requestStorefrontIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_playbackCapabilitiesDidChangeNotification;
-(void)_accountStoreDidChangeNotification;
-(void)_updateCapabilitiesWithResponse:(id)arg1 postNotification:(BOOL)arg2 ;
-(void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestPersonalizationTokenForClientToken:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestStorefrontCountryCodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_allowsPromptingForPrivacyAcknowledgement;
@end

