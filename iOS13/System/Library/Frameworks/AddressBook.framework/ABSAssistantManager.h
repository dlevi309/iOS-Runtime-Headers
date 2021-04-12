/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@class ABSAddressBook;

@interface ABSAssistantManager : NSObject {

	ABSAddressBook* _addressBook;

}

@property (nonatomic,readonly) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)init;
-(id)initWithAddressBook:(id)arg1 ;
-(ABSAddressBook *)addressBook;
-(id)newSAPersonFromABPerson:(void*)arg1 ;
@end

