/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPMetricsUtils : NSObject
+(id)loggingQueue;
+(PPMNamedEntityAlgorithm_)mapNamedEntityAlgorithm:(unsigned long long)arg1 ;
+(int)mapNamedEntityAlgorithmForPET2:(unsigned long long)arg1 ;
+(PPMLocationAlgorithm_)mapLocationAlgorithm:(unsigned short)arg1 ;
+(PPMTopicAlgorithm_)mapTopicAlgorithm:(unsigned long long)arg1 ;
+(int)mapTopicAlgorithmForPET2:(unsigned long long)arg1 ;
+(PPMTopicDonationSource_)topicSourceForBundleId:(id)arg1 ;
+(int)topicSourceForPET2WithBundleId:(id)arg1 ;
+(PPMTopicDonationErrorReason_)mapTopicDonationErrorForPET1:(long long)arg1 ;
+(int)mapTopicDonationErrorForPET2:(long long)arg1 ;
+(PPMNamedEntityDonationSource_)namedEntitySourceForBundleId:(id)arg1 ;
+(int)namedEntitySourceForPET2WithBundleId:(id)arg1 ;
+(PPMLocationDonationSource_)locationSourceForBundleId:(id)arg1 ;
+(PPMObjectDonationSource_)donationSourceForBundleId:(id)arg1 ;
+(PPMPortraitFeedbackType_)feedbackTypeForPET:(unsigned)arg1 ;
+(int)feedbackTypeForPET2:(unsigned)arg1 ;
+(PPMTypeSafeBool_)typeSafeBoolOfCond:(BOOL)arg1 ;
+(id)truncatedClientBundleId:(id)arg1 ;
+(id)truncatedClientBundleIdOrCurrentBundleId:(id)arg1 ;
@end

