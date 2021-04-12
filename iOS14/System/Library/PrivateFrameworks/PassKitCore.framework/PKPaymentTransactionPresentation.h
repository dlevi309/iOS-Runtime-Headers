/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKPaymentTransactionPresentation : NSObject
+(id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 secondarySource:(id)arg2 includeBankAccountSuffix:(BOOL)arg3 useGenericNameIfNoDescriptionAvailable:(BOOL)arg4 ;
+(id)_relativeDateForTransaction:(id)arg1 ;
+(id)_statusAnnotationForTransaction:(id)arg1 ;
+(id)_billPaymentFundingSourceForTransaction:(id)arg1 ;
+(id)staticPDFNameForTransaction:(id)arg1 ;
+(unsigned long long)iconTypeForTransaction:(id)arg1 ignoreLogoURL:(BOOL)arg2 ;
+(id)presentationInformationForTransaction:(id)arg1 transactionSource:(id)arg2 secondaryTransactionSource:(id)arg3 account:(id)arg4 deviceName:(id)arg5 context:(unsigned long long)arg6 ;
@end

