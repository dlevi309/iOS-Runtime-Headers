/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@class NSURL, PKAppletSubcredential;

@interface PKSubcredentialProvisioningDownloadPassOperation : PKSubcredentialProvisioningOperation {

	NSURL* _passURL;
	PKAppletSubcredential* _addedCredential;

}
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(void)performOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)configureExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updatePassMetadata:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)downloadPassAtURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

