/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)nameForContact:(id)arg1 ;
+(id)emergencyContactWithContact:(id)arg1 property:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)relationship;
-(NSString *)nameContactIdentifier;
-(NSString *)phoneNumberContactIdentifier;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(void)setNameRecordID:(NSNumber *)arg1 ;
-(void)setPhoneNumberPropertyID:(NSNumber *)arg1 ;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberLabel:(NSString *)arg1 ;
-(NSNumber *)nameRecordID;
-(NSNumber *)phoneNumberPropertyID;
-(NSString *)phoneNumberLabel;
@end

