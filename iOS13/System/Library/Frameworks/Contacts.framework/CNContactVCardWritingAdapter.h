/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNVCardPerson.h>

@class NSString, NSArray, NSDictionary, NSData, NSDateComponents, CNContact;

@interface CNContactVCardWritingAdapter : NSObject <CNVCardPerson> {

	CNContact* _contact;

}

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
+(id)adapterWithContact:(id)arg1 ;
+(id)descriptorForAllSupportedKeys;
-(NSString *)middleName;
-(NSString *)nickname;
-(NSString *)title;
-(NSString *)uid;
-(NSArray *)phoneNumbers;
-(NSArray *)emailAddresses;
-(NSString *)organization;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isMe;
-(NSArray *)urls;
-(NSString *)phoneticMiddleName;
-(id)initWithContact:(id)arg1 ;
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
-(id)vCardPropertyItemsForProperty:(id)arg1 ;
-(id)vCardPropertyItemsForProperty:(id)arg1 valueTransform:(/*^block*/id)arg2 ;
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
@end

