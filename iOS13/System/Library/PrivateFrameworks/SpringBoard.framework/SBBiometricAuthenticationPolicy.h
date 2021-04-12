/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIBiometricAuthenticationPolicy.h>

@protocol SBFLockOutStatusProvider;
@class NSString;

@interface SBBiometricAuthenticationPolicy : NSObject <SBUIBiometricAuthenticationPolicy> {

	id<SBFLockOutStatusProvider> _lockOutStatusProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRelockAfterBioUnlock;
-(id)initWithLockOutProvider:(id)arg1 ;
@end

