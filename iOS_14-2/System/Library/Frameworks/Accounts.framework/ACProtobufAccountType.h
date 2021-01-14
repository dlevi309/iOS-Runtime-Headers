/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ACProtobufURL;

@interface ACProtobufAccountType : PBCodable <NSCopying> {

	NSString* _accountTypeDescription;
	NSString* _credentialProtectionPolicy;
	NSString* _credentialType;
	NSString* _identifier;
	ACProtobufURL* _objectID;
	NSString* _owningBundleID;
	int _supportsAuthentication;
	int _visibility;
	BOOL _obsolete;
	BOOL _supportsMultipleAccounts;
	SCD_Struct_AC6 _has;

}

@property (nonatomic,retain) NSString * accountTypeDescription;                  //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectID; 
@property (nonatomic,retain) ACProtobufURL * objectID;                           //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL hasVisibility; 
@property (assign,nonatomic) int visibility;                                     //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialType; 
@property (nonatomic,retain) NSString * credentialType;                          //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialProtectionPolicy; 
@property (nonatomic,retain) NSString * credentialProtectionPolicy;              //@synthesize credentialProtectionPolicy=_credentialProtectionPolicy - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsAuthentication; 
@property (assign,nonatomic) int supportsAuthentication;                         //@synthesize supportsAuthentication=_supportsAuthentication - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsMultipleAccounts; 
@property (assign,nonatomic) BOOL supportsMultipleAccounts;                      //@synthesize supportsMultipleAccounts=_supportsMultipleAccounts - In the implementation block
@property (nonatomic,readonly) BOOL hasOwningBundleID; 
@property (nonatomic,retain) NSString * owningBundleID;                          //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (assign,nonatomic) BOOL hasObsolete; 
@property (assign,nonatomic) BOOL obsolete;                                      //@synthesize obsolete=_obsolete - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)obsolete;
-(int)visibility;
-(BOOL)hasObjectID;
-(BOOL)hasObsolete;
-(void)setObsolete:(BOOL)arg1 ;
-(void)setVisibility:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSupportsMultipleAccounts:(BOOL)arg1 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(BOOL)hasVisibility;
-(BOOL)hasCredentialProtectionPolicy;
-(void)setHasSupportsAuthentication:(BOOL)arg1 ;
-(BOOL)hasSupportsAuthentication;
-(BOOL)hasCredentialType;
-(BOOL)hasOwningBundleID;
-(void)setHasVisibility:(BOOL)arg1 ;
-(void)setHasObsolete:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAccounts;
-(ACProtobufURL *)objectID;
-(int)supportsAuthentication;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(id)description;
-(NSString *)owningBundleID;
-(void)setSupportsMultipleAccounts:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)supportsMultipleAccounts;
-(NSString *)accountTypeDescription;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(NSString *)credentialType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)credentialProtectionPolicy;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCredentialProtectionPolicy:(NSString *)arg1 ;
-(void)setSupportsAuthentication:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

