/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@interface ABSPublicABCNCompatibility : NSObject
+(void*)publicABPersonFromContact:(id)arg1 contactStore:(id)arg2 publicAddressBook:(const void*)arg3 ;
+(int)publicMultiValueIdentifierFromLabeledValue:(id)arg1 contactStore:(id)arg2 ;
+(id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 contactStore:(id)arg4 ;
+(BOOL)overwritePublicABPerson:(void*)arg1 withContact:(id)arg2 ;
+(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3 ;
+(BOOL)updateNewPublicABPerson:(void*)arg1 withSavedContact:(id)arg2 inAddressBook:(void*)arg3 ;
+(id)contactPropertyKeyFromPublicABPropertyID:(int)arg1 ;
+(int)publicABPropertyIDFromContactPropertyKey:(id)arg1 ;
+(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 ;
+(id)contactStoreForPublicAddressBook:(void*)arg1 ;
+(id)createAddressBookForConversion;
@end

