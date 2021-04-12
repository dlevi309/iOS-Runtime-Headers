/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
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
@property (readonly) BOOL isCompany; 
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
@property (readonly) NSString * imageType; 
@property (readonly) NSData * imageHash; 
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
@property (readonly) NSString * companyName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filteredPersonWithPerson:(id)arg1 scope:(id)arg2 ;
-(id<CNVCardPerson>)person;
-(NSString *)phoneticMiddleName;
-(BOOL)isMe;
-(NSArray *)urls;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)uid;
-(NSString *)phoneticLastName;
-(NSString *)phoneticFirstName;
-(CNVCardFilteredPersonScope *)scope;
-(NSString *)suffix;
-(NSArray *)emailAddresses;
-(NSString *)nickname;
-(NSArray *)postalAddresses;
-(NSArray *)socialProfiles;
-(NSArray *)relatedNames;
-(NSString *)jobTitle;
-(NSArray *)phoneNumbers;
-(NSString *)middleName;
-(int)nameOrder;
-(NSString *)note;
-(NSData *)imageData;
-(NSString *)preferredLikenessSource;
-(NSData *)imageHash;
-(BOOL)isCompany;
-(NSString *)phonemeData;
-(NSArray *)calendarURIs;
-(NSString *)preferredApplePersonaIdentifier;
-(NSString *)cardDAVUID;
-(NSString *)imageType;
-(NSString *)maidenName;
-(NSString *)department;
-(NSString *)organization;
-(NSDictionary *)activityAlerts;
-(NSString *)companyName;
-(id)largeImageHashOfType:(id)arg1 ;
-(NSString *)pronunciationFirstName;
-(NSString *)pronunciationLastName;
-(NSArray *)imageReferences;
-(NSString *)phoneticOrganization;
-(NSArray *)instantMessagingAddresses;
-(NSDictionary *)imageCropRects;
-(NSDictionary *)largeImageCropRects;
-(NSData *)largeImageData;
-(NSDateComponents *)birthdayComponents;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)otherDateComponents;
-(NSArray *)namesOfParentGroups;
-(int)downtimeWhitelistAuthorization;
-(NSArray *)unknownProperties;
-(NSString *)title;
-(id)initWithPerson:(id)arg1 scope:(id)arg2 ;
-(id)filterItems:(id)arg1 property:(id)arg2 ;
@end

