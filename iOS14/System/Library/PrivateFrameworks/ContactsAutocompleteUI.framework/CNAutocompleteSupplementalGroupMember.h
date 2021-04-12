/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSString, NSPersonNameComponents;

@interface CNAutocompleteSupplementalGroupMember : NSObject {

	NSString* _address;
	long long _addressType;
	NSPersonNameComponents* _nameComponents;
	NSString* _name;

}

@property (copy,readonly) NSString * address;                                   //@synthesize address=_address - In the implementation block
@property (readonly) long long addressType;                                     //@synthesize addressType=_addressType - In the implementation block
@property (copy,readonly) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
-(id)initWithNameComponents:(id)arg1 address:(id)arg2 addressType:(long long)arg3 ;
-(long long)addressType;
-(NSString *)name;
-(NSString *)address;
-(NSPersonNameComponents *)nameComponents;
-(id)initWithName:(id)arg1 address:(id)arg2 addressType:(long long)arg3 ;
@end

