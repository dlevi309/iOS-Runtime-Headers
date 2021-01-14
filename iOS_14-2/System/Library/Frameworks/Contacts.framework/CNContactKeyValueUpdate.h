/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactUpdate.h>

@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate {

	CNPropertyDescription* _property;
	id _value;

}

@property (readonly) CNPropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) id value;                                      //@synthesize value=_value - In the implementation block
-(CNPropertyDescription *)property;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

