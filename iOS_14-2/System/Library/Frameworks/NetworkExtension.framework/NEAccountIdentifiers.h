/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSArray;

@interface NEAccountIdentifiers : NSObject {

	NSArray* _mailAccountIdentifiers;
	NSArray* _calendarAccountIdentifiers;
	NSArray* _contactsAccountIdentifiers;

}

@property (copy) NSArray * mailAccountIdentifiers;                  //@synthesize mailAccountIdentifiers=_mailAccountIdentifiers - In the implementation block
@property (copy) NSArray * calendarAccountIdentifiers;              //@synthesize calendarAccountIdentifiers=_calendarAccountIdentifiers - In the implementation block
@property (copy) NSArray * contactsAccountIdentifiers;              //@synthesize contactsAccountIdentifiers=_contactsAccountIdentifiers - In the implementation block
-(NSArray *)mailAccountIdentifiers;
-(NSArray *)contactsAccountIdentifiers;
-(NSArray *)calendarAccountIdentifiers;
-(void)setMailAccountIdentifiers:(NSArray *)arg1 ;
-(void)setCalendarAccountIdentifiers:(NSArray *)arg1 ;
-(void)setContactsAccountIdentifiers:(NSArray *)arg1 ;
@end

