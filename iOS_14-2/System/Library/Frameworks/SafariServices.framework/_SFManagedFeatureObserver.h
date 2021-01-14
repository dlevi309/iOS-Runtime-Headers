/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class LAContext, NSString;

@interface _SFManagedFeatureObserver : NSObject <MCProfileConnectionObserver> {

	BOOL _cachedAuthenticationRequiredToAutoFill;
	LAContext* _context;

}

@property (nonatomic,readonly) BOOL authenticationRequiredToAutoFill; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(BOOL)authenticationRequiredToAutoFill;
-(BOOL)_isUserEnrolledInBiometricAuthentication;
-(void)dealloc;
@end

