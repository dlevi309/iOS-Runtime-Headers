/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSArray, NSDate, NSString, NSDictionary, NSNumber;

@interface SAPerson : SADomainObject <SAAceComparable>

@property (nonatomic,copy) NSArray * addresses; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,copy) NSString * companyPhonetic; 
@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSDictionary * firstNameAPGs; 
@property (nonatomic,copy) NSString * firstNamePhonetic; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (nonatomic,copy) NSNumber * isBlocked; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSDictionary * lastNameAPGs; 
@property (nonatomic,copy) NSString * lastNamePhonetic; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * nickName; 
@property (nonatomic,copy) NSDictionary * nickNameAPGs; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSArray * phones; 
@property (nonatomic,copy) NSString * prefix; 
@property (nonatomic,copy) NSNumber * pseudo; 
@property (nonatomic,copy) NSArray * relatedNames; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSString * suffix; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)person;
+(id)personWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)me;
-(NSNumber *)isBlocked;
-(void)setFullName:(NSString *)arg1 ;
-(NSArray *)addresses;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)fullName;
-(NSString *)prefix;
-(id)groupIdentifier;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(void)setBirthday:(NSDate *)arg1 ;
-(id)encodedClassName;
-(void)setPseudo:(NSNumber *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setMe:(NSNumber *)arg1 ;
-(NSNumber *)pseudo;
-(NSArray *)phones;
-(NSString *)suffix;
-(NSString *)internalGUID;
-(NSArray *)emails;
-(void)setInternalGUID:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSDate *)birthday;
-(void)setIsBlocked:(NSNumber *)arg1 ;
-(NSArray *)socialProfiles;
-(void)setCompany:(NSString *)arg1 ;
-(NSArray *)relatedNames;
-(NSString *)company;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setEmails:(NSArray *)arg1 ;
-(NSDictionary *)lastNameAPGs;
-(NSString *)companyPhonetic;
-(void)setCompanyPhonetic:(NSString *)arg1 ;
-(NSDictionary *)firstNameAPGs;
-(void)setFirstNameAPGs:(NSDictionary *)arg1 ;
-(NSString *)firstNamePhonetic;
-(void)setFirstNamePhonetic:(NSString *)arg1 ;
-(void)setLastNameAPGs:(NSDictionary *)arg1 ;
-(NSString *)lastNamePhonetic;
-(void)setLastNamePhonetic:(NSString *)arg1 ;
-(NSDictionary *)nickNameAPGs;
-(void)setNickNameAPGs:(NSDictionary *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)phonemeData;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
@end

