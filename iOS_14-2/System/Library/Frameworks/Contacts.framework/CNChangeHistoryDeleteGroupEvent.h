/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class NSString;

@interface CNChangeHistoryDeleteGroupEvent : CNChangeHistoryEvent {

	NSString* _groupIdentifier;
	NSString* _externalURI;
	NSString* _externalModificationTag;

}

@property (nonatomic,copy,readonly) NSString * externalURI;                          //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalModificationTag;              //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                           //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(NSString *)externalURI;
-(NSString *)groupIdentifier;
-(id)init;
-(NSString *)externalModificationTag;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(id)initWithGroupIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

