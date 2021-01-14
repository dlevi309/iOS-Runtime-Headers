/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ACProtobufAccountType, ACProtobufAccountCredential, NSMutableArray, ACProtobufDate, ACProtobufURL, NSDictionary;

@interface ACProtobufAccount : PBCodable <NSCopying> {

	NSString* _accountDescription;
	ACProtobufAccountType* _accountType;
	NSString* _authenticationType;
	ACProtobufAccountCredential* _credential;
	NSString* _credentialType;
	NSMutableArray* _dataclassProperties;
	ACProtobufDate* _date;
	NSMutableArray* _dirtyAccountProperties;
	NSMutableArray* _dirtyDataclassProperties;
	NSMutableArray* _dirtyProperties;
	NSMutableArray* _enabledDataclasses;
	NSString* _identifier;
	ACProtobufDate* _lastCredentialRenewalRejectionDate;
	NSString* _modificationID;
	ACProtobufURL* _objectID;
	NSString* _owningBundleID;
	ACProtobufAccount* _parentAccount;
	NSMutableArray* _properties;
	NSMutableArray* _provisionedDataclasses;
	NSString* _username;
	BOOL _active;
	BOOL _authenticated;
	BOOL _supportsAuthentication;
	BOOL _visible;
	BOOL _warmingUp;
	SCD_Struct_AC4 _has;

}

@property (nonatomic,copy) NSDictionary * propertiesDictionary; 
@property (nonatomic,copy) NSDictionary * dataclassPropertiesDictionary; 
@property (nonatomic,retain) ACProtobufAccountType * accountType;                              //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) BOOL hasCredential; 
@property (nonatomic,retain) ACProtobufAccountCredential * credential;                         //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountDescription; 
@property (nonatomic,retain) NSString * accountDescription;                                    //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasUsername; 
@property (nonatomic,retain) NSString * username;                                              //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;                                      //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                               //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,readonly) BOOL hasLastCredentialRenewalRejectionDate; 
@property (nonatomic,retain) ACProtobufDate * lastCredentialRenewalRejectionDate;              //@synthesize lastCredentialRenewalRejectionDate=_lastCredentialRenewalRejectionDate - In the implementation block
@property (assign,nonatomic) BOOL active;                                                      //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL visible;                                                     //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL supportsAuthentication;                                      //@synthesize supportsAuthentication=_supportsAuthentication - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataclassProperties;                             //@synthesize dataclassProperties=_dataclassProperties - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectID; 
@property (nonatomic,retain) ACProtobufURL * objectID;                                         //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) BOOL hasParentAccount; 
@property (nonatomic,retain) ACProtobufAccount * parentAccount;                                //@synthesize parentAccount=_parentAccount - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledDataclasses;                              //@synthesize enabledDataclasses=_enabledDataclasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * provisionedDataclasses;                          //@synthesize provisionedDataclasses=_provisionedDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationType; 
@property (nonatomic,retain) NSString * authenticationType;                                    //@synthesize authenticationType=_authenticationType - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialType; 
@property (nonatomic,retain) NSString * credentialType;                                        //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) BOOL hasDate; 
@property (nonatomic,retain) ACProtobufDate * date;                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasOwningBundleID; 
@property (nonatomic,retain) NSString * owningBundleID;                                        //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyProperties;                                 //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyAccountProperties;                          //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyDataclassProperties;                        //@synthesize dirtyDataclassProperties=_dirtyDataclassProperties - In the implementation block
@property (assign,nonatomic) BOOL hasWarmingUp; 
@property (assign,nonatomic) BOOL warmingUp;                                                   //@synthesize warmingUp=_warmingUp - In the implementation block
@property (nonatomic,readonly) BOOL hasModificationID; 
@property (nonatomic,retain) NSString * modificationID;                                        //@synthesize modificationID=_modificationID - In the implementation block
+(Class)dirtyDataclassPropertiesType;
+(Class)propertiesType;
+(Class)provisionedDataclassesType;
+(Class)dirtyAccountPropertiesType;
+(Class)enabledDataclassesType;
+(Class)dirtyPropertiesType;
+(Class)dataclassPropertiesType;
-(NSString *)accountDescription;
-(void)setAuthenticated:(BOOL)arg1 ;
-(ACProtobufAccountType *)accountType;
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(BOOL)warmingUp;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSMutableArray *)properties;
-(ACProtobufAccountCredential *)credential;
-(BOOL)active;
-(void)clearDirtyProperties;
-(void)setActive:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(ACProtobufDate *)lastCredentialRenewalRejectionDate;
-(void)setLastCredentialRenewalRejectionDate:(ACProtobufDate *)arg1 ;
-(BOOL)hasObjectID;
-(id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUsername;
-(BOOL)hasLastCredentialRenewalRejectionDate;
-(NSString *)authenticationType;
-(void)setDataclassPropertiesDictionary:(NSDictionary *)arg1 ;
-(NSMutableArray *)dirtyProperties;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)hasWarmingUp;
-(ACProtobufAccount *)parentAccount;
-(BOOL)visible;
-(BOOL)hasCredential;
-(void)setWarmingUp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDirtyDataclassProperties:(NSMutableArray *)arg1 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(id)provisionedDataclassesAtIndex:(unsigned long long)arg1 ;
-(id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1 ;
-(void)addDirtyDataclassProperties:(id)arg1 ;
-(NSDictionary *)dataclassPropertiesDictionary;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)setDate:(ACProtobufDate *)arg1 ;
-(unsigned long long)dirtyDataclassPropertiesCount;
-(void)clearDirtyDataclassProperties;
-(NSDictionary *)propertiesDictionary;
-(NSString *)modificationID;
-(void)setParentAccount:(ACProtobufAccount *)arg1 ;
-(void)setCredential:(ACProtobufAccountCredential *)arg1 ;
-(id)dataclassPropertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)provisionedDataclassesCount;
-(void)setProvisionedDataclasses:(NSMutableArray *)arg1 ;
-(void)setDirtyAccountProperties:(NSMutableArray *)arg1 ;
-(void)clearProvisionedDataclasses;
-(unsigned long long)dirtyAccountPropertiesCount;
-(BOOL)hasCredentialType;
-(unsigned long long)propertiesCount;
-(BOOL)hasOwningBundleID;
-(BOOL)hasModificationID;
-(void)clearProperties;
-(void)addProperties:(id)arg1 ;
-(void)clearDirtyAccountProperties;
-(unsigned long long)dirtyPropertiesCount;
-(NSMutableArray *)dirtyDataclassProperties;
-(void)setPropertiesDictionary:(NSDictionary *)arg1 ;
-(void)addProvisionedDataclasses:(id)arg1 ;
-(BOOL)hasParentAccount;
-(BOOL)authenticated;
-(unsigned long long)dataclassPropertiesCount;
-(void)clearDataclassProperties;
-(void)addDirtyAccountProperties:(id)arg1 ;
-(id)enabledDataclassesAtIndex:(unsigned long long)arg1 ;
-(void)setHasWarmingUp:(BOOL)arg1 ;
-(ACProtobufURL *)objectID;
-(BOOL)hasAccountDescription;
-(BOOL)hasAuthenticationType;
-(NSString *)username;
-(BOOL)supportsAuthentication;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(NSMutableArray *)provisionedDataclasses;
-(NSMutableArray *)dirtyAccountProperties;
-(void)setEnabledDataclasses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataclassProperties;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(void)addEnabledDataclasses:(id)arg1 ;
-(NSMutableArray *)enabledDataclasses;
-(void)setModificationID:(NSString *)arg1 ;
-(id)description;
-(void)addDirtyProperties:(id)arg1 ;
-(void)setDataclassProperties:(NSMutableArray *)arg1 ;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(void)addDataclassProperties:(id)arg1 ;
-(unsigned long long)enabledDataclassesCount;
-(void)clearEnabledDataclasses;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(NSString *)owningBundleID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(NSString *)credentialType;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(ACProtobufDate *)date;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAccountType:(ACProtobufAccountType *)arg1 ;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

