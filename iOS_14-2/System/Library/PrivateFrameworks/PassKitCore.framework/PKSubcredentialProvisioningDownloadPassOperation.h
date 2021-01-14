/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@class NSURL, PKAppletSubcredential;

@interface PKSubcredentialProvisioningDownloadPassOperation : PKSubcredentialProvisioningOperation {

	NSURL* _passURL;
	PKAppletSubcredential* _addedCredential;

}
-(void)performOperation;
-(void)updatePassMetadata:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)configureExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)downloadPassAtURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performOperationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
@end

