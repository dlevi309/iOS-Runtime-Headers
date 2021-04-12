/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(BOOL)isParent;
-(FAFamilyMember *)familyMember;
-(id)initWithFamilyMember:(id)arg1 matchingContacts:(id)arg2 ;
-(NSArray *)matchingContacts;
-(BOOL)hasMatchingContacts;
-(BOOL)containsFamilyMember:(id)arg1 ;
@end

