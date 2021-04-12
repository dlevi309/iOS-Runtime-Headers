/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {

	NSMutableArray* _credentials;
	NSMutableArray* _completedCredentials;
	unsigned long long _currentIndex;

}
-(id)init;
-(unsigned long long)count;
-(unsigned long long)completedCount;
-(void)setCredentialsToProvision:(id)arg1 ;
-(void)removeCredential:(id)arg1 ;
-(id)nextCredentialToProvision;
-(void)setCurrentCredential:(id)arg1 ;
-(unsigned long long)remaining;
@end

