/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKConceptSynthesizer : NSObject
+(id)proritizedCodingSystemsForDisplay;
+(id)synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 ;
+(id)_synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 prioritizedCodingSystems:(id)arg3 ;
+(id)adHocCodingForCodingCollection:(id)arg1 ;
+(id)bestCodingSystemForDisplayForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)bestDisplayNameForCodingCollection:(id)arg1 ;
+(id)bestDisplayNameForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)privateCodeCreationCodingSortDescriptors;
+(id)enumerateCodingsBySystem:(id)arg1 prioritizingCodingSystems:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)synthesizeInMemoryConceptForCodingCollection:(id)arg1 ;
@end

