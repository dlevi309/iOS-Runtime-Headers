/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKUserIdentityLookupInfo, NSPersonNameComponents, CKRecordID, NSData, NSArray, NSString;

@interface CKUserIdentity : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasiCloudAccount;
	BOOL _isCached;
	CKUserIdentityLookupInfo* _lookupInfo;
	NSPersonNameComponents* _nameComponents;
	CKRecordID* _userRecordID;
	NSData* _publicSharingKey;
	unsigned long long _publicKeyVersion;
	NSData* _outOfNetworkPrivateKey;
	NSData* _encryptedPersonalInfo;
	NSArray* _contactIdentifiers;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) CKRecordID * userRecordID;                            //@synthesize userRecordID=_userRecordID - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccount;                              //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL isCached;                                      //@synthesize isCached=_isCached - In the implementation block
@property (nonatomic,retain) NSData * publicSharingKey;                          //@synthesize publicSharingKey=_publicSharingKey - In the implementation block
@property (assign,nonatomic) unsigned long long publicKeyVersion;                //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (nonatomic,retain) NSData * outOfNetworkPrivateKey;                    //@synthesize outOfNetworkPrivateKey=_outOfNetworkPrivateKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                     //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
@property (nonatomic,copy) NSArray * contactIdentifiers;                         //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) CKUserIdentityLookupInfo * lookupInfo;                //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(BOOL)isCached;
-(id)ckShortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CKRecordID *)userRecordID;
-(NSArray *)contactIdentifiers;
-(unsigned long long)hash;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUserRecordID:(id)arg1 ;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(id)_init;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(NSData *)publicSharingKey;
-(NSData *)outOfNetworkPrivateKey;
-(void)setLookupInfo:(CKUserIdentityLookupInfo *)arg1 ;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setIsCached:(BOOL)arg1 ;
-(void)setPublicSharingKey:(NSData *)arg1 ;
-(void)setOutOfNetworkPrivateKey:(NSData *)arg1 ;
-(NSData *)encryptedPersonalInfo;
-(unsigned long long)publicKeyVersion;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(void)setPublicKeyVersion:(unsigned long long)arg1 ;
-(BOOL)isEquivalentToUserIdentity:(id)arg1 ;
-(BOOL)isOutOfNetwork;
-(BOOL)isEquivalentToUserIdentityOrPublicKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)hasiCloudAccount;
-(BOOL)isEqual:(id)arg1 ;
@end

