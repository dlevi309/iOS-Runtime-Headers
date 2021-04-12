/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

#import <SAObjects/SAABPersonSearch.h>
#import <libobjc.A.dylib/CNAssistantCommand.h>

@class CNContactStore, NSString;

@interface CNAssistantCommandSearchPerson : SAABPersonSearch <CNAssistantCommand> {

	CNContactStore* _contactStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CNContactStore * contactStore; 
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)validate;
-(id)perform;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)meContact:(id*)arg1 ;
-(id)searchLocal:(id*)arg1 ;
-(id)searchRemote:(id*)arg1 ;
-(id)searchByName:(id*)arg1 ;
@end

