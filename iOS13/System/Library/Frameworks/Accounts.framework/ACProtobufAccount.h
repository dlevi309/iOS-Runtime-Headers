/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	ACProtobufURL* _objectID;
	NSString* _owningBundleID;
	NSString* _parentAccountIdentifier;
	NSMutableArray* _properties;
	NSMutableArray* _provisionedDataclasses;
	NSString* _username;
	BOOL _active;
	BOOL _authenticated;
	BOOL _supportsAuthentication;
	BOOL _visible;

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
@property (nonatomic,readonly) BOOL hasParentAccountIdentifier; 
@property (nonatomic,retain) NSString * parentAccountIdentifier;                               //@synthesize parentAccountIdentifier=_parentAccountIdentifier - In the implementation block
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
+(Class)propertiesType;
+(Class)dataclassPropertiesType;
+(Class)enabledDataclassesType;
+(Class)provisionedDataclassesType;
+(Class)dirtyPropertiesType;
+(Class)dirtyAccountPropertiesType;
+(Class)dirtyDataclassPropertiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ACProtobufDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setActive:(BOOL)arg1 ;
-(ACProtobufURL *)objectID;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)properties;
-(BOOL)hasDate;
-(void)setDate:(ACProtobufDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(NSString *)username;
-(NSString *)accountDescription;
-(NSString *)authenticationType;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(ACProtobufAccountType *)accountType;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSMutableArray *)enabledDataclasses;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(void)clearDirtyProperties;
-(ACProtobufAccountCredential *)credential;
-(void)setCredential:(ACProtobufAccountCredential *)arg1 ;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(NSString *)owningBundleID;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(NSMutableArray *)provisionedDataclasses;
-(NSMutableArray *)dataclassProperties;
-(void)setAccountType:(ACProtobufAccountType *)arg1 ;
-(BOOL)authenticated;
-(ACProtobufDate *)lastCredentialRenewalRejectionDate;
-(BOOL)active;
-(BOOL)visible;
-(BOOL)hasCredential;
-(NSDictionary *)propertiesDictionary;
-(BOOL)hasLastCredentialRenewalRejectionDate;
-(NSDictionary *)dataclassPropertiesDictionary;
-(BOOL)hasObjectID;
-(BOOL)hasParentAccountIdentifier;
-(NSString *)parentAccountIdentifier;
-(NSMutableArray *)dirtyProperties;
-(NSMutableArray *)dirtyAccountProperties;
-(NSMutableArray *)dirtyDataclassProperties;
-(void)setPropertiesDictionary:(NSDictionary *)arg1 ;
-(void)setLastCredentialRenewalRejectionDate:(ACProtobufDate *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)setDataclassPropertiesDictionary:(NSDictionary *)arg1 ;
-(void)setParentAccountIdentifier:(NSString *)arg1 ;
-(void)setProvisionedDataclasses:(NSMutableArray *)arg1 ;
-(void)setEnabledDataclasses:(NSMutableArray *)arg1 ;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(void)setDirtyAccountProperties:(NSMutableArray *)arg1 ;
-(void)setDirtyDataclassProperties:(NSMutableArray *)arg1 ;
-(void)setDataclassProperties:(NSMutableArray *)arg1 ;
-(void)addProperties:(id)arg1 ;
-(void)addDataclassProperties:(id)arg1 ;
-(void)addEnabledDataclasses:(id)arg1 ;
-(void)addProvisionedDataclasses:(id)arg1 ;
-(void)addDirtyProperties:(id)arg1 ;
-(void)addDirtyAccountProperties:(id)arg1 ;
-(void)addDirtyDataclassProperties:(id)arg1 ;
-(unsigned long long)propertiesCount;
-(void)clearProperties;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataclassPropertiesCount;
-(void)clearDataclassProperties;
-(id)dataclassPropertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)enabledDataclassesCount;
-(void)clearEnabledDataclasses;
-(id)enabledDataclassesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)provisionedDataclassesCount;
-(void)clearProvisionedDataclasses;
-(id)provisionedDataclassesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dirtyPropertiesCount;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dirtyAccountPropertiesCount;
-(void)clearDirtyAccountProperties;
-(id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dirtyDataclassPropertiesCount;
-(void)clearDirtyDataclassProperties;
-(id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAccountDescription;
-(BOOL)hasUsername;
-(BOOL)hasAuthenticationType;
-(BOOL)hasCredentialType;
-(BOOL)hasOwningBundleID;
@end

