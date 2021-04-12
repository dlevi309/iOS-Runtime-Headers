/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPermissivePolicy.h>

@class NSDictionary;

@interface CNDictionaryPolicy : CNPermissivePolicy {

	NSDictionary* _policyDictionary;

}
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(id)contactRestrictionsForLabeledProperty:(id)arg1 ;
@end

