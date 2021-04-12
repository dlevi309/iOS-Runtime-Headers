/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@class ABSAddressBook;

@interface ABSAssistantManager : NSObject {

	ABSAddressBook* _addressBook;

}

@property (nonatomic,readonly) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)init;
-(ABSAddressBook *)addressBook;
-(id)initWithAddressBook:(id)arg1 ;
-(id)newSAPersonFromABPerson:(void*)arg1 ;
@end

