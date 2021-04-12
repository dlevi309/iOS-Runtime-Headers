/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactStore, NSArray, CNChangeHistoryEventFactory;

@interface CNChangeHistoryResultEventConverter : NSObject {

	CNContactStore* _contactStore;
	NSArray* _additionalContactKeyDescriptors;
	CNChangeHistoryEventFactory* _factory;

}

@property (readonly) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (copy,readonly) NSArray * additionalContactKeyDescriptors;              //@synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors - In the implementation block
@property (readonly) CNChangeHistoryEventFactory * factory;                       //@synthesize factory=_factory - In the implementation block
-(CNContactStore *)contactStore;
-(CNChangeHistoryEventFactory *)factory;
-(id)initWithContactStore:(id)arg1 additionalContactKeyDescriptors:(id)arg2 ;
-(id)eventsFromResult:(id)arg1 ;
-(NSArray *)additionalContactKeyDescriptors;
@end

