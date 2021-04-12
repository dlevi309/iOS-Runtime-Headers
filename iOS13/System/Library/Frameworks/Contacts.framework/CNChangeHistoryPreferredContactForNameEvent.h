/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

@interface CNChangeHistoryPreferredContactForNameEvent : CNChangeHistoryEvent {

	CNContact* _preferredContact;
	CNContact* _unifiedContact;

}

@property (nonatomic,readonly) CNContact * preferredContact;              //@synthesize preferredContact=_preferredContact - In the implementation block
@property (nonatomic,readonly) CNContact * unifiedContact;                //@synthesize unifiedContact=_unifiedContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(CNContact *)preferredContact;
-(CNContact *)unifiedContact;
@end

