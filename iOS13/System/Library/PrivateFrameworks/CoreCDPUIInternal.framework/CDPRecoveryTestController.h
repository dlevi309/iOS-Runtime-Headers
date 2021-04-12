/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

