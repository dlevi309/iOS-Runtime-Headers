/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent {

	CNContact* _fromContact;
	CNContact* _toContact;

}

@property (nonatomic,readonly) CNContact * fromContact;              //@synthesize fromContact=_fromContact - In the implementation block
@property (nonatomic,readonly) CNContact * toContact;                //@synthesize toContact=_toContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithFromContact:(id)arg1 toContact:(id)arg2 ;
-(CNContact *)fromContact;
-(CNContact *)toContact;
@end

