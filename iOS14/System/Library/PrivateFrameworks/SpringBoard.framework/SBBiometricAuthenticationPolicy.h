/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

