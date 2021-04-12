/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <libobjc.A.dylib/CNVCardPerson.h>

@protocol CNVCardPerson;
@class NSString, NSArray, NSDictionary, NSData, NSDateComponents, CNVCardFilteredPersonScope;

@interface CNVCardFilteredPerson : NSObject <CNVCardPerson> {

	id<CNVCardPerson> _person;
	CNVCardFilteredPersonScope* _scope;

}

@property (nonatomic,readonly) id<CNVCardPerson> person;                          //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) CNVCardFilteredPersonScope * scope;                //@synthesize scope=_scope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * companyName; 
@property (readonly) BOOL isCompany; 
@property (readonly) NSString * nickname; 
@property (readonly) NSString * maidenName; 
@property (readonly) NSString * phoneticFirstName; 
@property (readonly) NSString * phoneticMiddleName; 
@property (readonly) NSString * phoneticLastName; 
@property (readonly) NSString * pronunciationFirstName; 
@property (readonly) NSString * pronunciationLastName; 
@property (readonly) NSString * organization; 
@property (readonly) NSString * phoneticOrganization; 
@property (readonly) NSString * department; 
@property (readonly) NSString * jobTitle; 
@property (readonly) BOOL isMe; 
@property (readonly) int nameOrder; 
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * phoneNumbers; 
@property (readonly) NSArray * postalAddresses; 
@property (readonly) NSArray * socialProfiles; 
@property (readonly) NSArray * instantMessagingAddresses; 
@property (readonly) NSArray * urls; 
@property (readonly) NSArray * calendarURIs; 
@property (readonly) NSDictionary * activityAlerts; 
@property (readonly) NSArray * imageReferences; 
@property (readonly) NSDictionary * imageCropRects; 
@property (readonly) NSDictionary * largeImageCropRects; 
@property (readonly) NSData * largeImageData; 
@property (readonly) NSData * imageData; 
@property (readonly) NSDateComponents * birthdayComponents; 
@property (readonly) NSDateComponents * alternateBirthdayComponents; 
@property (readonly) NSArray * otherDateComponents; 
@property (readonly) NSArray * relatedNames; 
@property (readonly) NSString * note; 
@property (readonly) NSArray * namesOfParentGroups; 
@property (readonly) NSString * cardDAVUID; 
@property (readonly) NSString * uid; 
@property (readonly) NSString * phonemeData; 
@property (readonly) int downtimeWhitelistAuthorization; 
@property (readonly) NSString * preferredLikenessSource; 
@property (readonly) NSString * preferredApplePersonaIdentifier; 
@property (readonly) NSArray * unknownProperties; 
+(id)filteredPersonWithPerson:(id)arg1 scope:(id)arg2 ;
-(NSString *)middleName;
-(NSString *)nickname;
-(NSString *)title;
-(NSString *)uid;
-(NSArray *)phoneNumbers;
-(NSArray *)emailAddresses;
-(NSString *)organization;
-(CNVCardFilteredPersonScope *)scope;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isMe;
-(NSArray *)urls;
-(NSString *)phoneticMiddleName;
-(NSArray *)socialProfiles;
-(NSString *)note;
-(NSString *)jobTitle;
-(NSArray *)postalAddresses;
-(NSString *)preferredLikenessSource;
-(NSString *)preferredApplePersonaIdentifier;
-(NSArray *)calendarURIs;
-(NSString *)phonemeData;
-(NSString *)cardDAVUID;
-(int)nameOrder;
-(NSDictionary *)activityAlerts;
-(NSString *)suffix;
-(NSString *)companyName;
-(BOOL)isCompany;
-(id)largeImageHashOfType:(id)arg1 ;
-(NSString *)maidenName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)pronunciationFirstName;
-(NSString *)pronunciationLastName;
-(NSString *)phoneticOrganization;
-(NSString *)department;
-(NSArray *)instantMessagingAddresses;
-(NSArray *)imageReferences;
-(NSDictionary *)imageCropRects;
-(NSDictionary *)largeImageCropRects;
-(NSData *)largeImageData;
-(NSDateComponents *)birthdayComponents;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)otherDateComponents;
-(NSArray *)relatedNames;
-(NSArray *)namesOfParentGroups;
-(int)downtimeWhitelistAuthorization;
-(NSArray *)unknownProperties;
-(id<CNVCardPerson>)person;
-(id)initWithPerson:(id)arg1 scope:(id)arg2 ;
-(id)filterItems:(id)arg1 property:(id)arg2 ;
@end

