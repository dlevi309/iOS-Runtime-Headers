/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNContact, NSArray;

@interface CNUICoreFamilyInfo : NSObject {

	CNContact* _meContact;
	NSArray* _elements;

}

@property (nonatomic,readonly) CNContact * meContact;              //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,readonly) NSArray * elements;                 //@synthesize elements=_elements - In the implementation block
-(NSArray *)elements;
-(CNContact *)meContact;
-(id)init;
-(id)description;
-(id)initWithMeContact:(id)arg1 elements:(id)arg2 ;
@end

