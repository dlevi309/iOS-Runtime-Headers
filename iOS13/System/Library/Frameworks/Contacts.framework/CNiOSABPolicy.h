/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPolicy.h>

@interface CNiOSABPolicy : CNPolicy {

	void* _iOSABPolicy;
	void* _fakePerson;
	BOOL _abSourceIsContentReadonly;

}
-(void)dealloc;
-(BOOL)isReadonly;
-(id)initWithAddressBookPolicy:(void*)arg1 readOnly:(BOOL)arg2 ;
-(id)_orderedLabels:(id)arg1 withOrder:(id)arg2 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
@end

