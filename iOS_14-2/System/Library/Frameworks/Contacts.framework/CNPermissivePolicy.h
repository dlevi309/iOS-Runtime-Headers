/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPolicy.h>

@interface CNPermissivePolicy : CNPolicy
+(id)sharedPermissivePolicy;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(id)unsupportedKeyPathsForContactProperty:(id)arg1 ;
-(BOOL)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id*)arg4 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(BOOL)isReadonly;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
@end

