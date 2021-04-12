/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AAUIGenericTermsRemoteUI.h>

@class AKDevice, NSString;

@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI {

	AKDevice* _proxiedDevice;
	NSString* _appProvidedContext;

}
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_sendAcceptedTermsInfo:(id)arg1 ;
-(void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_authContextForRenewCredentials;
-(id)initWithAuthResults:(id)arg1 ;
-(id)initWithAuthResults:(id)arg1 proxiedDevice:(id)arg2 appProvidedContext:(id)arg3 ;
@end

