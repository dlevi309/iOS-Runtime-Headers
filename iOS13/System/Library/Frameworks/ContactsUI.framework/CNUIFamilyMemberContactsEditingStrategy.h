/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSArray;

@interface CNUIFamilyMemberContactsEditingStrategy : NSObject {

	NSArray* _prohibitedPropertyKeys;
	/*^block*/id _sensitiveDataContactFilter;

}

@property (nonatomic,readonly) NSArray * prohibitedPropertyKeys;              //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,readonly) id sensitiveDataContactFilter;                 //@synthesize sensitiveDataContactFilter=_sensitiveDataContactFilter - In the implementation block
+(id)managedContactsStrategy;
+(id)whitelistedContactsStrategy;
-(id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(/*^block*/id)arg2 ;
-(NSArray *)prohibitedPropertyKeys;
-(id)sensitiveDataContactFilter;
@end

