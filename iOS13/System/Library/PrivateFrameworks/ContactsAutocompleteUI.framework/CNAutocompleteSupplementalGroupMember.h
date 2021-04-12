/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)address;
-(NSPersonNameComponents *)nameComponents;
-(long long)addressType;
-(id)initWithNameComponents:(id)arg1 address:(id)arg2 addressType:(long long)arg3 ;
-(id)initWithName:(id)arg1 address:(id)arg2 addressType:(long long)arg3 ;
@end

