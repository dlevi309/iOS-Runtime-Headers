/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYCapabilities : NSObject
+(id)sharedCapabilities;
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
-(BOOL)supportsApplePay;
@end

