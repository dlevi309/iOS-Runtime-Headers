/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

@class CNContactStore;


@protocol CNAssistantCommand <AFServiceCommand,NSObject>
@property (nonatomic,retain) CNContactStore * contactStore; 
@required
-(void)setContactStore:(id)arg1;
-(CNContactStore *)contactStore;

@end

