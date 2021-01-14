/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNContactSubsetCalculator : NSObject
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 forMultiValueProperty:(id)arg3 ;
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 forSingleValueProperty:(id)arg3 ;
+(BOOL)_isLabeledValue:(id)arg1 availableInLabeledValues:(id)arg2 claimedIndices:(id)arg3 forMultiValueProperty:(id)arg4 ;
+(BOOL)_isLabel:(id)arg1 subsumableIntoLabel:(id)arg2 equivalencies:(id)arg3 ;
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 ignoringProperties:(id)arg3 ;
@end

