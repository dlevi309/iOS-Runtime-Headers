/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactUpdate.h>

@class CNMultiValuePropertyDescription, CNMultiValueDiff;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate {

	CNMultiValuePropertyDescription* _property;
	CNMultiValueDiff* _diff;

}

@property (readonly) CNMultiValuePropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) CNMultiValueDiff * diff;                                 //@synthesize diff=_diff - In the implementation block
-(CNMultiValuePropertyDescription *)property;
-(CNMultiValueDiff *)diff;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(id)description;
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
-(id)initWithProperty:(id)arg1 diff:(id)arg2 ;
@end

