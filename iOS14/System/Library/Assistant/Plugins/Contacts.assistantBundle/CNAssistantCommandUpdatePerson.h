/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

#import <SAObjects/SADomainObjectUpdate.h>
#import <libobjc.A.dylib/CNAssistantCommand.h>

@class CNContactStore, NSString;

@interface CNAssistantCommandUpdatePerson : SADomainObjectUpdate <CNAssistantCommand> {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)validate;
-(CNContactStore *)contactStore;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)validateIdentifier;
-(id)addToUpdatesCache;
@end

