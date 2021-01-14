/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>
#import <libobjc.A.dylib/PKAppletSubcredentialPairingSessionDelegate.h>

@class NSString;

@interface PKSubcredentialProvisioningHoldNearReaderOperation : PKSubcredentialProvisioningPairingSessionOperation <PKAppletSubcredentialPairingSessionDelegate> {

	BOOL _operationWasCancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performOperation;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3 ;
-(void)cancelOperation;
-(void)startPairing;
-(BOOL)canCancelOperation;
@end

