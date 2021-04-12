/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>

@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {

	BOOL _operationWasCancelled;

}
-(void)performOperation;
-(id)issuerName;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)cancelOperation;
-(void)startPrewarming;
-(BOOL)canCancelOperation;
@end

