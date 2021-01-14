/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUIInternal.framework/CoreCDPUIInternal
*/


@class CDPDBackupInfoRecoveryFlowController, NSArray, UINavigationController;

@interface CDPRecoveryTestController : NSObject {

	CDPDBackupInfoRecoveryFlowController* _recoveryController;
	NSArray* _mockDevices;
	UINavigationController* _navController;

}
-(void)setUp;
-(id)initWithDevices:(id)arg1 andNavigationController:(id)arg2 ;
-(void)beginIDMSRecoveryFlowWithSecretFailure;
-(void)beginIDMSRecoveryFlow;
-(id)dummyRecoveryInfo;
@end

