/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned long long)instanceSortOrder;
-(CNContact *)contact;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(id)description;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithContact:(id)arg1 containerIdentifier:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

