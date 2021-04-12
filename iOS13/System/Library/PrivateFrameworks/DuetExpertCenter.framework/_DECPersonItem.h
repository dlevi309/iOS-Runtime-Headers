/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNContact *)contact;
-(NSString *)contactIdentifier;
-(id)initWithContactProperty:(id)arg1 ;
-(CNContactProperty *)contactProperty;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(BOOL)_isEqualToDECPersonItem:(id)arg1 ;
@end

