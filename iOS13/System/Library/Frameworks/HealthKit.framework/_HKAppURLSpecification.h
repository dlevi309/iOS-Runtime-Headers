/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface _HKAppURLSpecification : NSObject
+(BOOL)isClinicalOnboardingURL:(id)arg1 ;
+(BOOL)isClinicalLoginRedirectURL:(id)arg1 ;
+(BOOL)parseClinicalOnboardingURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)parseClinicalLoginRedirectURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)isAtrialFibrillationEventURL:(id)arg1 ;
+(BOOL)isViewHealthRecordsURL:(id)arg1 ;
+(BOOL)isHealthRecordsProviderSearchURL:(id)arg1 ;
@end

