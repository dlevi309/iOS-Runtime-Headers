/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningSessionOperation.h>

@class PKSubcredentialProvisioningDownloadPassOperation, PKSubcredentialProvisioningTrackCredentialOperation, NSError;

@interface PKSubcredentialProvisioningDownloadAndTrackCredentialOperation : PKSubcredentialProvisioningSessionOperation {

	PKSubcredentialProvisioningDownloadPassOperation* _downloadOperation;
	PKSubcredentialProvisioningTrackCredentialOperation* _trackOperation;
	NSError* _downloadOperationError;
	NSError* _trackOperationError;

}
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
@end

