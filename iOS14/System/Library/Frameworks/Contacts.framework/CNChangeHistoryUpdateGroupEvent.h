/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup;

@interface CNChangeHistoryUpdateGroupEvent : CNChangeHistoryEvent {

	CNGroup* _group;

}

@property (nonatomic,readonly) CNGroup * group;              //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(CNGroup *)group;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

