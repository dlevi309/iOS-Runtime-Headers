/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDate, HKQuantity, NSNumber, NSArray, NSDateComponents;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDisabled;
	NSData* _pictureData;
	NSString* _name;
	NSDate* _gmtBirthdate;
	HKQuantity* _height;
	HKQuantity* _weight;
	long long _bloodType;
	NSNumber* _isOrganDonor;
	NSArray* _emergencyContacts;
	NSString* _medicalConditions;
	NSString* _medicalNotes;
	NSString* _allergyInfo;
	NSString* _medicationInfo;
	NSDate* _dateSaved;
	NSDate* _birthdate;
	long long _schemaVersion;

}

@property (nonatomic,retain) NSDate * birthdate;                              //@synthesize birthdate=_birthdate - In the implementation block
@property (nonatomic,retain) NSDate * gmtBirthdate;                           //@synthesize gmtBirthdate=_gmtBirthdate - In the implementation block
@property (nonatomic,retain) NSDate * dateSaved;                              //@synthesize dateSaved=_dateSaved - In the implementation block
@property (assign,nonatomic) long long schemaVersion;                         //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                 //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,copy) NSData * pictureData;                              //@synthesize pictureData=_pictureData - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDateComponents * gregorianBirthday; 
@property (nonatomic,retain) HKQuantity * height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) HKQuantity * weight;                             //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long bloodType;                             //@synthesize bloodType=_bloodType - In the implementation block
@property (nonatomic,retain) NSNumber * isOrganDonor;                         //@synthesize isOrganDonor=_isOrganDonor - In the implementation block
@property (nonatomic,copy) NSArray * emergencyContacts;                       //@synthesize emergencyContacts=_emergencyContacts - In the implementation block
@property (nonatomic,copy) NSString * medicalConditions;                      //@synthesize medicalConditions=_medicalConditions - In the implementation block
@property (nonatomic,copy) NSString * medicalNotes;                           //@synthesize medicalNotes=_medicalNotes - In the implementation block
@property (nonatomic,copy) NSString * allergyInfo;                            //@synthesize allergyInfo=_allergyInfo - In the implementation block
@property (nonatomic,copy) NSString * medicationInfo;                         //@synthesize medicationInfo=_medicationInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)schemaVersion;
-(HKQuantity *)height;
-(void)setHeight:(HKQuantity *)arg1 ;
-(void)setWeight:(HKQuantity *)arg1 ;
-(HKQuantity *)weight;
-(BOOL)isDisabled;
-(void)setIsDisabled:(BOOL)arg1 ;
-(NSArray *)emergencyContacts;
-(void)setEmergencyContacts:(NSArray *)arg1 ;
-(void)setSchemaVersion:(long long)arg1 ;
-(NSData *)pictureData;
-(long long)bloodType;
-(void)setPictureData:(NSData *)arg1 ;
-(void)setBirthdate:(NSDate *)arg1 ;
-(void)setGmtBirthdate:(NSDate *)arg1 ;
-(void)setBloodType:(long long)arg1 ;
-(void)setIsOrganDonor:(NSNumber *)arg1 ;
-(void)setMedicalConditions:(NSString *)arg1 ;
-(void)setMedicalNotes:(NSString *)arg1 ;
-(void)setAllergyInfo:(NSString *)arg1 ;
-(void)setMedicationInfo:(NSString *)arg1 ;
-(void)setDateSaved:(NSDate *)arg1 ;
-(NSDate *)birthdate;
-(NSDate *)gmtBirthdate;
-(NSNumber *)isOrganDonor;
-(NSString *)medicalConditions;
-(NSString *)medicalNotes;
-(NSString *)allergyInfo;
-(NSString *)medicationInfo;
-(NSDate *)dateSaved;
-(id)_gregorianUtcCalendar;
-(BOOL)hasAnyData;
-(void)setGregorianBirthday:(NSDateComponents *)arg1 ;
-(NSDateComponents *)gregorianBirthday;
-(void)recordFieldPresenceStatistics;
-(id)consolidatedSOSContactsWithSOSContactsManager:(id)arg1 ;
@end

