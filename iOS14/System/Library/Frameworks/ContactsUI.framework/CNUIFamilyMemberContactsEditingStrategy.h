/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sensitiveDataContactFilter;
-(id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(/*^block*/id)arg2 ;
-(NSArray *)prohibitedPropertyKeys;
@end

