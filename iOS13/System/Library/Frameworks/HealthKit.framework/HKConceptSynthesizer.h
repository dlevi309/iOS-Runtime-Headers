/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKConceptSynthesizer : NSObject
+(id)synthesizeInMemoryConceptForContext:(id)arg1 ;
+(id)synthesizeConceptWithIdentifier:(id)arg1 forContext:(id)arg2 ;
+(id)proritizedCodingSystemsForDisplay;
+(id)_synthesizeConceptWithIdentifier:(id)arg1 forContext:(id)arg2 prioritizedCodingSystems:(id)arg3 ;
+(id)bestCodingSystemForDisplayForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)bestDisplayNameForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)enumerateCodingsBySystem:(id)arg1 prioritizingCodingSystems:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)adHocCodingForContext:(id)arg1 ;
+(id)privateCodeCreationCodingSortDescriptors;
+(id)bestDisplayNameForCodingCollection:(id)arg1 ;
@end

