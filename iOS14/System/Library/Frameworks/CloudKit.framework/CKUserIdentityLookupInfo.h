/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordID, NSData;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying> {

	BOOL _shouldReportMissingIdentity;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	CKRecordID* _userRecordID;
	NSData* _encryptedPersonalInfo;

}

@property (nonatomic,copy) NSString * emailAddress;                         //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) CKRecordID * userRecordID;                       //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldReportMissingIdentity;              //@synthesize shouldReportMissingIdentity=_shouldReportMissingIdentity - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)lookupInfosWithPhoneNumbers:(id)arg1 ;
+(id)lookupInfosWithRecordIDs:(id)arg1 ;
+(id)lookupInfosWithEmails:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(long long)lookupField;
-(BOOL)shouldReportMissingIdentity;
-(void)_stripPersonalInfo;
-(void)setShouldReportMissingIdentity:(BOOL)arg1 ;
-(id)ckShortDescription;
-(NSString *)emailAddress;
-(id)CKPropertiesDescription;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CKRecordID *)userRecordID;
-(id)CKXPCSuitableString;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)lookupValue;
-(unsigned long long)hash;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUserRecordID:(id)arg1 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(NSData *)encryptedPersonalInfo;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

