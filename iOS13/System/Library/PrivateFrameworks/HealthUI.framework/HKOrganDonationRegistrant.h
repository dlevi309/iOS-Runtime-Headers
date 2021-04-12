/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKSimpleDataEntryItemDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HKOrganDonationRegistrantDelegate;
@class NSMutableDictionary, NSString, NSNumber;

@interface HKOrganDonationRegistrant : NSObject <HKSimpleDataEntryItemDelegate, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _dataEntryItems;
	BOOL _hasEdits;
	id<HKOrganDonationRegistrantDelegate> _delegate;
	NSString* _email;
	NSString* _firstname;
	NSString* _middlename;
	NSString* _lastname;
	NSString* _address1;
	NSString* _address2;
	NSString* _zip;
	NSString* _city;
	NSString* _state;
	NSString* _last4SSN;
	NSString* _sex;
	NSString* _dob;

}

@property (assign,nonatomic,__weak) id<HKOrganDonationRegistrantDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * email;                                                   //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * firstname;                                               //@synthesize firstname=_firstname - In the implementation block
@property (nonatomic,retain) NSString * middlename;                                              //@synthesize middlename=_middlename - In the implementation block
@property (nonatomic,retain) NSString * lastname;                                                //@synthesize lastname=_lastname - In the implementation block
@property (nonatomic,retain) NSString * address1;                                                //@synthesize address1=_address1 - In the implementation block
@property (nonatomic,retain) NSString * address2;                                                //@synthesize address2=_address2 - In the implementation block
@property (nonatomic,retain) NSString * zip;                                                     //@synthesize zip=_zip - In the implementation block
@property (nonatomic,retain) NSString * city;                                                    //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * last4SSN;                                                //@synthesize last4SSN=_last4SSN - In the implementation block
@property (nonatomic,retain) NSString * sex;                                                     //@synthesize sex=_sex - In the implementation block
@property (nonatomic,retain) NSString * dob;                                                     //@synthesize dob=_dob - In the implementation block
@property (nonatomic,readonly) NSNumber * age; 
@property (nonatomic,readonly) BOOL hasEdits;                                                    //@synthesize hasEdits=_hasEdits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)organDonationRegistrantWithDemographicsInformation:(id)arg1 ;
+(id)organDonationRegistrantWithJSONDictionary:(id)arg1 ;
+(BOOL)_isNumericStringValid:(id)arg1 withLength:(long long)arg2 ;
+(void)_loadStateInformationIfNeeded;
+(id)exportDateFormatter;
+(id)zipcodeNumberFormatter;
+(id)convertLocalizedNumericStringToLatin:(id)arg1 withNumberFormatter:(id)arg2 ;
+(id)ssnNumberFormatter;
+(id)_importNumberFormatter;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HKOrganDonationRegistrantDelegate>)delegate;
-(void)setDelegate:(id<HKOrganDonationRegistrantDelegate>)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)city;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSNumber *)age;
-(NSString *)zip;
-(id)jsonDictionaryRepresentation;
-(void)setZip:(NSString *)arg1 ;
-(BOOL)hasEdits;
-(NSString *)firstname;
-(NSString *)middlename;
-(void)setSex:(NSString *)arg1 ;
-(id)_createDateOfBirthEntryItem;
-(id)_todayBirthdayDateComponents;
-(NSString *)sex;
-(void)dataEntryItemDidUpdateValue:(id)arg1 ;
-(id)dataEntryItemsValidOnly:(BOOL)arg1 ;
-(BOOL)isRegistrantValid;
-(NSString *)address1;
-(NSString *)address2;
-(void)setFirstname:(NSString *)arg1 ;
-(void)setMiddlename:(NSString *)arg1 ;
-(void)setLastname:(NSString *)arg1 ;
-(void)setDob:(NSString *)arg1 ;
-(void)setAddress1:(NSString *)arg1 ;
-(void)setAddress2:(NSString *)arg1 ;
-(void)setLast4SSN:(NSString *)arg1 ;
-(void)_addDataEntryItemIntoArray:(id)arg1 validOnly:(BOOL)arg2 forField:(long long)arg3 ;
-(BOOL)isFieldValid:(long long)arg1 ;
-(id)dataEntryItemForRegistrantField:(long long)arg1 ;
-(unsigned long long)_placeHolderTypeForField:(long long)arg1 ;
-(NSString *)lastname;
-(id)_stateChoiceValues;
-(id)_stateChoiceDisplayNames;
-(NSString *)last4SSN;
-(NSString *)dob;
@end

