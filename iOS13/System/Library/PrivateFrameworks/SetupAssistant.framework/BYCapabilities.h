/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYCapabilities : NSObject
+(id)sharedCapabilities;
-(BOOL)supportsApplePay;
-(BOOL)supportsPearl;
-(BOOL)mgHasSecureElement;
-(BOOL)mgHasSiriCapability;
-(id)_paymentScreenRequirements;
-(BOOL)_paymentScreenRequirementsIncludePasscode:(id)arg1 ;
-(BOOL)canShowPasscodeScreen;
-(BOOL)_paymentScreenRequirementsIncludeiCloud:(id)arg1 ;
-(BOOL)canShowAppleIDScreen;
-(BOOL)mgHasMesa;
-(BOOL)isPearlEnrolled;
-(BOOL)canShowSiriScreen;
-(BOOL)canShowPaymentScreen;
-(BOOL)canShowTouchIDScreen;
-(BOOL)canShowFaceIDScreen;
-(BOOL)mgHasCellularTelephony;
-(BOOL)mgHasGreenTea;
@end

