/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemServiceServerBiometricsDelegate.h>

@class SBUIBiometricResource, FBServiceClientAuthenticator, NSString;

@interface SBBiometricsService : NSObject <SBSystemServiceServerBiometricsDelegate> {

	SBUIBiometricResource* _biometricResource;
	FBServiceClientAuthenticator* _unlockCredentialAuthenticator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 fetchUnlockCredentialSet:(/*^block*/id)arg3 ;
@end

