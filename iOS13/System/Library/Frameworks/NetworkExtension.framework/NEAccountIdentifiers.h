/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMailAccountIdentifiers:(NSArray *)arg1 ;
-(NSArray *)calendarAccountIdentifiers;
-(void)setCalendarAccountIdentifiers:(NSArray *)arg1 ;
-(NSArray *)contactsAccountIdentifiers;
-(void)setContactsAccountIdentifiers:(NSArray *)arg1 ;
@end

