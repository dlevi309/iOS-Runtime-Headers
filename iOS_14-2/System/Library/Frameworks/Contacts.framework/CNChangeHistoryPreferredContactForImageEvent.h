/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent {

	CNContact* _preferredContact;
	CNContact* _unifiedContact;

}

@property (nonatomic,readonly) CNContact * preferredContact;              //@synthesize preferredContact=_preferredContact - In the implementation block
@property (nonatomic,readonly) CNContact * unifiedContact;                //@synthesize unifiedContact=_unifiedContact - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(CNContact *)unifiedContact;
-(CNContact *)preferredContact;
-(id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

