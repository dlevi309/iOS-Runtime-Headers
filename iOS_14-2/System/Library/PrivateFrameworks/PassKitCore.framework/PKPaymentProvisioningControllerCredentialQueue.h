/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {

	NSMutableArray* _credentials;
	NSMutableArray* _completedCredentials;
	unsigned long long _currentIndex;

}
-(id)init;
-(unsigned long long)remaining;
-(unsigned long long)count;
-(id)credentials;
-(unsigned long long)completedCount;
-(void)setCredentialsToProvision:(id)arg1 ;
-(void)removeCredential:(id)arg1 ;
-(id)nextCredentialToProvision;
-(void)setCurrentCredential:(id)arg1 ;
-(id)completedCredentials;
@end

