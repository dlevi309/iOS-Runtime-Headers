/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKUserIdentityLookupInfo, NSPersonNameComponents, CKRecordID, NSArray, NSData, NSString;

@interface CKUserIdentity : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasiCloudAccount;
	BOOL _isCached;
	CKUserIdentityLookupInfo* _lookupInfo;
	NSPersonNameComponents* _nameComponents;
	CKRecordID* _userRecordID;
	NSArray* _contactIdentifiers;
	NSData* _publicSharingKey;
	unsigned long long _publicKeyVersion;
	NSData* _outOfNetworkPrivateKey;
	NSData* _encryptedPersonalInfo;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) CKUserIdentityLookupInfo * lookupInfo;                //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,copy) CKRecordID * userRecordID;                            //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSArray * contactIdentifiers;                         //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccount;                              //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL isCached;                                      //@synthesize isCached=_isCached - In the implementation block
@property (nonatomic,retain) NSData * publicSharingKey;                          //@synthesize publicSharingKey=_publicSharingKey - In the implementation block
@property (assign,nonatomic) unsigned long long publicKeyVersion;                //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (nonatomic,retain) NSData * outOfNetworkPrivateKey;                    //@synthesize outOfNetworkPrivateKey=_outOfNetworkPrivateKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                     //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSPersonNameComponents *)nameComponents;
-(CKRecordID *)userRecordID;
-(id)initWithUserRecordID:(id)arg1 ;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(BOOL)hasiCloudAccount;
-(NSData *)publicSharingKey;
-(NSData *)outOfNetworkPrivateKey;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(void)setLookupInfo:(CKUserIdentityLookupInfo *)arg1 ;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(void)setPublicSharingKey:(NSData *)arg1 ;
-(void)setOutOfNetworkPrivateKey:(NSData *)arg1 ;
-(NSData *)encryptedPersonalInfo;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(unsigned long long)publicKeyVersion;
-(void)setPublicKeyVersion:(unsigned long long)arg1 ;
-(BOOL)isEquivalentToUserIdentity:(id)arg1 ;
-(BOOL)isCached;
-(void)setIsCached:(BOOL)arg1 ;
-(BOOL)isOutOfNetwork;
-(BOOL)isEquivalentToUserIdentityOrPublicKey:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
@end

