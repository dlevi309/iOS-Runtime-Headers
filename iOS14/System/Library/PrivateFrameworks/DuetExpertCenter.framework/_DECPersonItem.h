/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString, CNContact, CNContactProperty;

@interface _DECPersonItem : _DECItem {

	NSString* _contactIdentifier;
	CNContact* _contact;
	CNContactProperty* _contactProperty;

}

@property (nonatomic,readonly) CNContact * contact;                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContactProperty * contactProperty;              //@synthesize contactProperty=_contactProperty - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                     //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)category;
+(id)_contactStore;
+(id)personWithContactProperty:(id)arg1 ;
+(id)personWithContact:(id)arg1 ;
+(id)personWithContactIdentifier:(id)arg1 ;
-(NSString *)contactIdentifier;
-(CNContact *)contact;
-(BOOL)isEquivalent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithContactIdentifier:(id)arg1 ;
-(CNContactProperty *)contactProperty;
-(id)initWithContact:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContactProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isEqualToDECPersonItem:(id)arg1 ;
@end

