/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

