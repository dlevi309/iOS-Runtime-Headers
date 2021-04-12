/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)authenticationRequiredToAutoFill;
-(BOOL)_isUserEnrolledInBiometricAuthentication;
@end

