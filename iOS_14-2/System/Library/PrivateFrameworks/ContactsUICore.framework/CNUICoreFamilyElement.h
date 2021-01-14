/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class FAFamilyMember, NSArray;

@interface CNUICoreFamilyElement : NSObject {

	FAFamilyMember* _familyMember;
	NSArray* _matchingContacts;

}

@property (nonatomic,readonly) FAFamilyMember * familyMember;              //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) NSArray * matchingContacts;                 //@synthesize matchingContacts=_matchingContacts - In the implementation block
@property (nonatomic,readonly) BOOL hasMatchingContacts; 
@property (nonatomic,readonly) BOOL isParent; 
-(FAFamilyMember *)familyMember;
-(id)description;
-(BOOL)isParent;
-(NSArray *)matchingContacts;
-(id)initWithFamilyMember:(id)arg1 matchingContacts:(id)arg2 ;
-(BOOL)hasMatchingContacts;
-(BOOL)containsFamilyMember:(id)arg1 ;
@end

