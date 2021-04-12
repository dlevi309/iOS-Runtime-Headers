/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

