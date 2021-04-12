/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNContact, NSArray;

@interface CNUICoreFamilyInfo : NSObject {

	CNContact* _meContact;
	NSArray* _elements;

}

@property (nonatomic,readonly) CNContact * meContact;              //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,readonly) NSArray * elements;                 //@synthesize elements=_elements - In the implementation block
-(id)init;
-(id)description;
-(NSArray *)elements;
-(CNContact *)meContact;
-(id)initWithMeContact:(id)arg1 elements:(id)arg2 ;
@end

