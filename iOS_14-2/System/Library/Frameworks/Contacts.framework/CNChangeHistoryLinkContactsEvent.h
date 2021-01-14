/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned long long)instanceSortOrder;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CNContact *)fromContact;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithFromContact:(id)arg1 toContact:(id)arg2 ;
-(CNContact *)toContact;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

