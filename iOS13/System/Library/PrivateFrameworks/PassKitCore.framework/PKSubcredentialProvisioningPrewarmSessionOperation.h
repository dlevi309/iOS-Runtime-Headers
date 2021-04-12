/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningSessionOperation.h>

@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningSessionOperation {

	BOOL _operationWasCancelled;

}
-(void)cancelOperation;
-(void)startPrewarming;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(void)performOperation;
-(BOOL)canCancelOperation;
-(id)issuerName;
@end

