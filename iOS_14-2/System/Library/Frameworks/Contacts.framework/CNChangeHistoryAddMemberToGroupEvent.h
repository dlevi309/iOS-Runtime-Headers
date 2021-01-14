/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact, CNGroup;

@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent {

	CNContact* _member;
	CNGroup* _group;

}

@property (nonatomic,readonly) CNContact * member;              //@synthesize member=_member - In the implementation block
@property (nonatomic,readonly) CNGroup * group;                 //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(CNGroup *)group;
-(CNContact *)member;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithMember:(id)arg1 group:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

