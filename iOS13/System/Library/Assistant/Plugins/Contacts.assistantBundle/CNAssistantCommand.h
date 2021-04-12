/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

@class CNContactStore;


@protocol CNAssistantCommand <AFServiceCommand,NSObject>
@property (nonatomic,retain) CNContactStore * contactStore; 
@required
-(CNContactStore *)contactStore;
-(void)setContactStore:(id)arg1;

@end

