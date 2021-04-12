/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContact, NSString;

@interface _CNContactVCardNameSummzarizationScope : NSObject {

	CNContact* _contact;
	NSString* _fullName;

}

@property (nonatomic,readonly) CNContact * contact;                   //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
-(CNContact *)contact;
-(NSString *)fullName;
-(id)initWithContact:(id)arg1 fullName:(id)arg2 ;
@end

