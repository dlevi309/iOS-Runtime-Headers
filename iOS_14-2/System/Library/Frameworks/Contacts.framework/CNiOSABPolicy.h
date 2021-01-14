/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPolicy.h>

@interface CNiOSABPolicy : CNPolicy {

	void* _iOSABPolicy;
	void* _fakePerson;
	BOOL _abSourceIsContentReadonly;

}
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(BOOL)isReadonly;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(id)initWithAddressBookPolicy:(void*)arg1 readOnly:(BOOL)arg2 ;
-(id)_orderedLabels:(id)arg1 withOrder:(id)arg2 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
-(BOOL)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4 ;
-(void)dealloc;
@end

