/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>
#import <libobjc.A.dylib/MCPerAccountVPNPayloadProtocol.h>

@class NSString, NSArray, NSDictionary, NSNumber;

@interface MCLDAPAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol> {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	BOOL _useSSL;
	NSArray* _searchSettings;
	NSString* _accountPersistentUUID;
	NSString* _VPNUUID;
	NSString* _acAccountIdentifier;
	NSDictionary* _communicationServiceRules;
	NSNumber* _useSSLNum;

}

@property (nonatomic,readonly) NSNumber * useSSLNum;                                     //@synthesize useSSLNum=_useSSLNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;                     //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                               //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain) NSString * username;                                        //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSArray * searchSettings;                          //@synthesize searchSettings=_searchSettings - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                              //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;                 //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
@property (nonatomic,retain) NSString * acAccountIdentifier;                             //@synthesize acAccountIdentifier=_acAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                             //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * VPNUUID;                                //@synthesize VPNUUID=_VPNUUID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * mailAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * contactsAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * calendarAccountIdentifiers; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)accountDescription;
-(BOOL)useSSL;
-(NSString *)VPNUUID;
-(void)setUsername:(NSString *)arg1 ;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)acAccountIdentifier;
-(NSDictionary *)communicationServiceRules;
-(NSArray *)contactsAccountIdentifiers;
-(void)setAcAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSNumber *)useSSLNum;
-(NSString *)password;
-(NSString *)username;
-(id)verboseDescription;
-(NSString *)hostname;
-(void)setPassword:(NSString *)arg1 ;
-(id)restrictions;
-(NSArray *)searchSettings;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

