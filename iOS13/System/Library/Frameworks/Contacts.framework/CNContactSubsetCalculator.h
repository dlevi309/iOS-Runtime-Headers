/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNContactSubsetCalculator : NSObject
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 forMultiValueProperty:(id)arg3 ;
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 forSingleValueProperty:(id)arg3 ;
+(BOOL)_isLabeledValue:(id)arg1 availableInLabeledValues:(id)arg2 claimedIndices:(id)arg3 forMultiValueProperty:(id)arg4 ;
+(BOOL)_isLabel:(id)arg1 subsumableIntoLabel:(id)arg2 equivalencies:(id)arg3 ;
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 ignoringProperties:(id)arg3 ;
@end

