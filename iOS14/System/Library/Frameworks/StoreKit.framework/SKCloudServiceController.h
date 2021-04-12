/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


#import <StoreKit/StoreKit-Structs.h>
@class ICCloudServiceStatusMonitor;

@interface SKCloudServiceController : NSObject {

	BOOL _allowsPromptingForPrivacyAcknowledgement;
	ICCloudServiceStatusMonitor* _cloudServiceStatusMonitor;
	os_unfair_lock_s _lock;

}

@property (assign,setter=_setAllowsPromptingForPrivacyAcknowledgement:,nonatomic) BOOL _allowsPromptingForPrivacyAcknowledgement; 
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(long long)authorizationStatus;
+(id)_publicErrorForPrivateError:(id)arg1 ;
-(id)init;
-(BOOL)_allowsPromptingForPrivacyAcknowledgement;
-(void)requestStorefrontCountryCodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestStorefrontIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestCapabilitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setAllowsPromptingForPrivacyAcknowledgement:(BOOL)arg1 ;
-(void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_cloudServiceStatusMonitorWithError:(id*)arg1 ;
-(void)_handleCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_handleStorefrontCountryCodeDidChangeNotification:(id)arg1 ;
-(void)_handleStorefrontIdentifierDidChangeNotification:(id)arg1 ;
-(void)requestPersonalizationTokenForClientToken:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

