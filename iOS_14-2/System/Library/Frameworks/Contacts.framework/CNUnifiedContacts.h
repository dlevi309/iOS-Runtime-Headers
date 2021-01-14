/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNUnifiedContacts : NSObject
+(id)imageValuePropertyKeys;
+(void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4 ;
+(unsigned long long)countOfLabelsUnifiableWithLabel:(id)arg1 valuesUnifiableWithValue:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(BOOL)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(void)addLinkedLabeledValue:(id)arg1 toLabeledValue:(id)arg2 ;
+(void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4 ;
+(id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(unsigned long long)indexOfPreferredContactForImage:(id)arg1 ;
+(void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2 ;
+(id)unifyAvailableKeysOfContacts:(id)arg1 ;
+(id)nonNameSingleValuePropertiesByKey;
+(id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3 ;
+(id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3 ;
+(BOOL)canUnifyLabel:(id)arg1 withLabel:(id)arg2 forProperty:(id)arg3 ;
+(void)unifyImageOfContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3 ;
+(id)imageValuePropertiesByKey;
+(void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4 ;
+(id)makeNonNameSingleValuePropertiesByKey;
+(BOOL)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4 ;
+(unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(BOOL)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3 ;
@end

