/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningSessionOperation.h>

@class PKAppletSubcredential, NSData;

@interface PKSubcredentialProvisioningTrackCredentialOperation : PKSubcredentialProvisioningSessionOperation {

	BOOL _performingOperation;
	BOOL _hasTrackedCredential;
	BOOL _firstTransactionSucceeded;
	PKAppletSubcredential* _subcredential;
	NSData* _trackingAttestation;
	/*^block*/id _completionHandler;

}
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(id)pairingSession;
-(void)performOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)trackCredentialWithAttestation;
@end

