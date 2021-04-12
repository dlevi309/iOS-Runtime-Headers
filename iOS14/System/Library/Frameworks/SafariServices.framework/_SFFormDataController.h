/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <WebUI/WBUFormDataController.h>
#import <libobjc.A.dylib/_SFAuthenticationContextDelegate.h>

@class SFAppAutoFillOneTimeCodeProvider, _SFAuthenticationContext, NSString;

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate> {

	SFAppAutoFillOneTimeCodeProvider* _oneTimeCodeProvider;
	_SFAuthenticationContext* _autoFillAuthenticationContext;

}

@property (nonatomic,readonly) _SFAuthenticationContext * autoFillAuthenticationContext;              //@synthesize autoFillAuthenticationContext=_autoFillAuthenticationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg1 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1 ;
-(id)oneTimeCodeProvider;
-(id)initWithAggressiveKeychainCaching:(BOOL)arg1 ;
-(_SFAuthenticationContext *)autoFillAuthenticationContext;
-(double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1 ;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg1 ;
@end

