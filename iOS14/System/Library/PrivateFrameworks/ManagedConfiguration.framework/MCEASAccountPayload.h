/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	NSString* _emailAddress;
	NSNumber* _mailNumberOfPastDaysToSync;
	NSData* _embeddedCertificate;
	NSString* _embeddedCertificateName;
	NSString* _embeddedCertificatePassword;
	NSString* _certificateUUID;
	NSString* _accountPersistentUUID;
	NSData* _certificatePersistentID;
	BOOL _syncDefaultFoldersOnly;
	NSNumber* _enableMailNum;
	NSNumber* _enableContactsNum;
	NSNumber* _enableCalendarsNum;
	NSNumber* _enableRemindersNum;
	NSNumber* _enableNotesNum;
	NSNumber* _enableMailUserOverridableNum;
	NSNumber* _enableContactsUserOverridableNum;
	NSNumber* _enableCalendarsUserOverridableNum;
	NSNumber* _enableRemindersUserOverridableNum;
	NSNumber* _enableNotesUserOverridableNum;
	BOOL _overridePreviousPassword;
	NSString* _acAccountIdentifier;
	NSNumber* _useSSL;
	NSNumber* _useOAuth;
	NSString* _OAuthSignInURL;
	NSString* _OAuthTokenRequestURL;
	NSDictionary* _communicationServiceRules;
	NSNumber* _syncDefaultFoldersOnlyNum;

}

@property (nonatomic,readonly) NSNumber * syncDefaultFoldersOnlyNum;                      //@synthesize syncDefaultFoldersOnlyNum=_syncDefaultFoldersOnlyNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;                      //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                                //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                           //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                       //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSNumber * useSSL;                                           //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,retain) NSNumber * useOAuth;                                         //@synthesize useOAuth=_useOAuth - In the implementation block
@property (nonatomic,retain) NSString * OAuthSignInURL;                                   //@synthesize OAuthSignInURL=_OAuthSignInURL - In the implementation block
@property (nonatomic,retain) NSString * OAuthTokenRequestURL;                             //@synthesize OAuthTokenRequestURL=_OAuthTokenRequestURL - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * mailNumberOfPastDaysToSync;              //@synthesize mailNumberOfPastDaysToSync=_mailNumberOfPastDaysToSync - In the implementation block
@property (nonatomic,retain,readonly) NSData * embeddedCertificate;                       //@synthesize embeddedCertificate=_embeddedCertificate - In the implementation block
@property (nonatomic,retain,readonly) NSString * embeddedCertificateName;                 //@synthesize embeddedCertificateName=_embeddedCertificateName - In the implementation block
@property (nonatomic,copy) NSString * embeddedCertificatePassword;                        //@synthesize embeddedCertificatePassword=_embeddedCertificatePassword - In the implementation block
@property (nonatomic,retain,readonly) NSString * certificateUUID;                         //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasCertificate; 
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;                  //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
@property (nonatomic,readonly) BOOL enableMail; 
@property (nonatomic,readonly) BOOL enableContacts; 
@property (nonatomic,readonly) BOOL enableCalendars; 
@property (nonatomic,readonly) BOOL enableReminders; 
@property (nonatomic,readonly) BOOL enableNotes; 
@property (nonatomic,readonly) BOOL enableMailUserOverridable; 
@property (nonatomic,readonly) BOOL enableContactsUserOverridable; 
@property (nonatomic,readonly) BOOL enableCalendarsUserOverridable; 
@property (nonatomic,readonly) BOOL enableRemindersUserOverridable; 
@property (nonatomic,readonly) BOOL enableNotesUserOverridable; 
@property (nonatomic,retain) NSString * acAccountIdentifier;                              //@synthesize acAccountIdentifier=_acAccountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL overridePreviousPassword;                             //@synthesize overridePreviousPassword=_overridePreviousPassword - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                              //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;                            //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (assign,nonatomic) BOOL syncDefaultFoldersOnly;                                 //@synthesize syncDefaultFoldersOnly=_syncDefaultFoldersOnly - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)accountDescription;
-(NSNumber *)useSSL;
-(void)setUsername:(NSString *)arg1 ;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSData *)certificatePersistentID;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)mailAccountIdentifiers;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(NSString *)acAccountIdentifier;
-(NSDictionary *)communicationServiceRules;
-(void)setAcAccountIdentifier:(NSString *)arg1 ;
-(NSNumber *)useOAuth;
-(NSString *)certificateUUID;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(BOOL)enableMail;
-(BOOL)enableContacts;
-(BOOL)enableCalendars;
-(BOOL)enableReminders;
-(BOOL)enableNotes;
-(void)setUseSSL:(NSNumber *)arg1 ;
-(NSData *)embeddedCertificate;
-(NSString *)embeddedCertificateName;
-(NSString *)embeddedCertificatePassword;
-(BOOL)hasCertificate;
-(BOOL)enableMailUserOverridable;
-(BOOL)enableContactsUserOverridable;
-(BOOL)enableCalendarsUserOverridable;
-(BOOL)enableRemindersUserOverridable;
-(BOOL)enableNotesUserOverridable;
-(NSNumber *)mailNumberOfPastDaysToSync;
-(void)setEmbeddedCertificatePassword:(NSString *)arg1 ;
-(BOOL)syncDefaultFoldersOnly;
-(void)setSyncDefaultFoldersOnly:(BOOL)arg1 ;
-(void)setUseOAuth:(NSNumber *)arg1 ;
-(NSString *)OAuthSignInURL;
-(void)setOAuthSignInURL:(NSString *)arg1 ;
-(NSString *)OAuthTokenRequestURL;
-(void)setOAuthTokenRequestURL:(NSString *)arg1 ;
-(BOOL)overridePreviousPassword;
-(NSNumber *)syncDefaultFoldersOnlyNum;
-(NSString *)password;
-(NSString *)username;
-(id)verboseDescription;
-(NSString *)hostname;
-(void)setPassword:(NSString *)arg1 ;
-(id)restrictions;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

