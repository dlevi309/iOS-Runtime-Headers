/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact, NSString;

@interface CNChangeHistoryAddContactEvent : CNChangeHistoryEvent {

	CNContact* _contact;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) CNContact * contact;                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNContact *)contact;
-(NSString *)containerIdentifier;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithContact:(id)arg1 containerIdentifier:(id)arg2 ;
@end

