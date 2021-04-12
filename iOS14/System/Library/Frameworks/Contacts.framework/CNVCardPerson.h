/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

@class NSString, NSArray, NSDictionary, NSData, NSDateComponents;


@protocol CNVCardPerson <CNVCardNameDataSource,NSObject>
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
@required
-(NSString *)phoneticMiddleName;
-(BOOL)isMe;
-(NSArray *)urls;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)uid;
-(NSString *)phoneticLastName;
-(NSString *)phoneticFirstName;
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
-(id)largeImageHashOfType:(id)arg1;
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

@end

