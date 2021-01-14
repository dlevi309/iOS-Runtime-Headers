/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@class PKPaymentProvisioningController;

@interface PKSubcredentialProvisioningDeviceRegistrationOperation : PKSubcredentialProvisioningOperation {

	PKPaymentProvisioningController* _provisioningController;
	BOOL _operationCancelled;

}
-(void)performOperation;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)cancelOperation;
-(BOOL)canCancelOperation;
@end

