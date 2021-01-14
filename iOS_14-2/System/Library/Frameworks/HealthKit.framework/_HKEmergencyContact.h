/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSNumber* _nameRecordID;
	NSString* _nameContactIdentifier;
	NSString* _phoneNumber;
	NSNumber* _phoneNumberPropertyID;
	NSString* _phoneNumberContactIdentifier;
	NSString* _phoneNumberLabel;
	NSString* _relationship;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * nameRecordID;                            //@synthesize nameRecordID=_nameRecordID - In the implementation block
@property (nonatomic,copy) NSString * nameContactIdentifier;                     //@synthesize nameContactIdentifier=_nameContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSNumber * phoneNumberPropertyID;                   //@synthesize phoneNumberPropertyID=_phoneNumberPropertyID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberContactIdentifier;              //@synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberLabel;                          //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,copy) NSString * relationship;                              //@synthesize relationship=_relationship - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emergencyContactUsingSimCardNumberWithContact:(id)arg1 property:(id)arg2 ;
+(id)emergencyContactWithContact:(id)arg1 property:(id)arg2 ;
-(void)setNameRecordID:(NSNumber *)arg1 ;
-(void)setPhoneNumberPropertyID:(NSNumber *)arg1 ;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberLabel:(NSString *)arg1 ;
-(NSNumber *)nameRecordID;
-(NSNumber *)phoneNumberPropertyID;
-(NSString *)phoneNumberLabel;
-(id)init;
-(NSString *)relationship;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)phoneNumberContactIdentifier;
-(void)setRelationship:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)nameContactIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToSyncedContact:(id)arg1 ;
@end
