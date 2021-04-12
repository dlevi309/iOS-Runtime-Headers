/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>

@class PKSubcredentialProvisioningDownloadPassOperation, PKSubcredentialProvisioningTrackCredentialOperation, NSError;

@interface PKSubcredentialProvisioningDownloadAndTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {

	PKSubcredentialProvisioningDownloadPassOperation* _downloadOperation;
	PKSubcredentialProvisioningTrackCredentialOperation* _trackOperation;
	NSError* _downloadOperationError;
	NSError* _trackOperationError;

}
-(void)performOperation;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
@end

