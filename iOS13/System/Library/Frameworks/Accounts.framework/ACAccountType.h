/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, ACAccountStore, NSSet;

@interface ACAccountType : NSObject <ACProtobufCoding, NSSecureCoding> {

	NSString* _accountTypeDescription;
	NSString* _identifier;
	NSString* _credentialType;
	NSURL* _objectID;
	int _visibility;
	NSString* _credentialProtectionPolicy;
	ACAccountStore* _accountStore;
	int _supportsAuthentication;
	BOOL _supportsMultipleAccounts;
	BOOL _obsolete;
	NSSet* _supportedDataclasses;
	NSSet* _syncableDataclasses;
	NSSet* _accessKeys;
	BOOL _encryptAccountProperties;
	NSString* _owningBundleID;

}

@property (nonatomic,retain) NSURL * objectID;                                  //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) int visibility; 
@property (nonatomic,copy) id credentialProtectionPolicy; 
@property (nonatomic,retain) NSString * credentialType;                         //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic,__weak) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) int supportsAuthentication;                        //@synthesize supportsAuthentication=_supportsAuthentication - In the implementation block
@property (assign,nonatomic) BOOL supportsMultipleAccounts;                     //@synthesize supportsMultipleAccounts=_supportsMultipleAccounts - In the implementation block
@property (nonatomic,retain) NSString * owningBundleID;                         //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (assign,getter=isObsolete,nonatomic) BOOL obsolete;                   //@synthesize obsolete=_obsolete - In the implementation block
@property (nonatomic,readonly) NSSet * supportedDataclasses;                    //@synthesize supportedDataclasses=_supportedDataclasses - In the implementation block
@property (nonatomic,readonly) NSSet * syncableDataclasses;                     //@synthesize syncableDataclasses=_syncableDataclasses - In the implementation block
@property (nonatomic,readonly) NSSet * accessKeys;                              //@synthesize accessKeys=_accessKeys - In the implementation block
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) BOOL encryptAccountProperties;                   //@synthesize encryptAccountProperties=_encryptAccountProperties - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeDescription;               //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL accessGranted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVisibility:(int)arg1 ;
-(int)visibility;
-(NSURL *)objectID;
-(NSString *)fullDescription;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)setObjectID:(NSURL *)arg1 ;
-(NSSet *)accessKeys;
-(ACAccountStore *)accountStore;
-(BOOL)supportsMultipleAccounts;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(int)supportsAuthentication;
-(void)setSupportsAuthentication:(int)arg1 ;
-(NSString *)owningBundleID;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(id)initWithManagedAccountType:(id)arg1 ;
-(BOOL)encryptAccountProperties;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(NSString *)accountTypeDescription;
-(NSSet *)supportedDataclasses;
-(NSSet *)syncableDataclasses;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(id)credentialProtectionPolicy;
-(BOOL)isObsolete;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(void)setCredentialProtectionPolicy:(id)arg1 ;
-(void)setSupportsMultipleAccounts:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 description:(id)arg2 ;
-(id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2 ;
-(BOOL)accessGranted;
-(void)setObsolete:(BOOL)arg1 ;
@end

