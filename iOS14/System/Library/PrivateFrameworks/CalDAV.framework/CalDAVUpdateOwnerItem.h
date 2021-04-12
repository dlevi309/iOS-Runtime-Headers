/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSString, NSURL;

@interface CalDAVUpdateOwnerItem : CoreDAVItem {

	ICSDateValue* _dtstamp;
	NSString* _displayName;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _address;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) ICSDateValue * dtstamp;               //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)phoneNumber;
-(ICSDateValue *)dtstamp;
-(id)description;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(NSString *)displayName;
-(id)copyParseRules;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
-(void)setAddressItem:(id)arg1 ;
-(void)setEmailAddressItem:(id)arg1 ;
-(void)setPhoneNumberItem:(id)arg1 ;
-(void)setDisplayNameItem:(id)arg1 ;
@end

