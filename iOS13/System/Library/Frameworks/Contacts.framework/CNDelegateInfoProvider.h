/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class FAFamilyCircle, NSArray;

@interface CNDelegateInfoProvider : NSObject {

	FAFamilyCircle* _familyCircle;

}

@property (nonatomic,readonly) FAFamilyCircle * familyCircle;              //@synthesize familyCircle=_familyCircle - In the implementation block
@property (copy,readonly) NSArray * availableScopes; 
-(id)init;
-(id)description;
-(id)initWithFamilyCircle:(id)arg1 ;
-(NSArray *)availableScopes;
-(id)contactStoreWithScope:(id)arg1 error:(id*)arg2 ;
-(FAFamilyCircle *)familyCircle;
@end

