/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPolicy.h>

@interface CNPermissivePolicy : CNPolicy
+(id)sharedPermissivePolicy;
-(BOOL)isReadonly;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(id)unsupportedKeyPathsForContactProperty:(id)arg1 ;
-(BOOL)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id*)arg4 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
@end

