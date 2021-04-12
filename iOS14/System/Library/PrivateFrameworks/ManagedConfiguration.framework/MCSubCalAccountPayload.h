/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>
#import <libobjc.A.dylib/MCPerAccountVPNPayloadProtocol.h>

@class NSString, NSNumber, NSArray;

@interface MCSubCalAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol> {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	BOOL _useSSL;
	NSString* _accountPersistentUUID;
	NSString* _VPNUUID;
	NSString* _acAccountIdentifier;
	NSNumber* _useSSLNum;

}

@property (nonatomic,readonly) NSNumber * useSSLNum;                                     //@synthesize useSSLNum=_useSSLNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;                     //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                               //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain,readonly) NSString * username;                               //@synthesize username=_username - In the implementation block
@property (nonatomic,retain,readonly) NSString * password;                               //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                              //@synthesize useSSL=_useSSL - In the implementation block
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
-(id)subtitle1Label;
-(id)subtitle1Description;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)acAccountIdentifier;
-(NSArray *)calendarAccountIdentifiers;
-(void)setAcAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSNumber *)useSSLNum;
-(NSString *)password;
-(NSString *)username;
-(id)verboseDescription;
-(NSString *)hostname;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

