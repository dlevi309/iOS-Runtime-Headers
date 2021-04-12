/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup;

@interface CNChangeHistoryAddSubgroupToGroupEvent : CNChangeHistoryEvent {

	CNGroup* _subgroup;
	CNGroup* _group;

}

@property (nonatomic,readonly) CNGroup * subgroup;              //@synthesize subgroup=_subgroup - In the implementation block
@property (nonatomic,readonly) CNGroup * group;                 //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNGroup *)group;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithSubgroup:(id)arg1 group:(id)arg2 ;
-(CNGroup *)subgroup;
@end

