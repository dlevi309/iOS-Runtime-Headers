/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSString, NSNumber;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {

	NSString* _emailAccountDescription;
	NSString* _emailAccountName;
	NSString* _emailAccountType;
	NSString* _emailAddress;
	NSString* _incomingMailServerAuthentication;
	NSString* _incomingMailServerHostname;
	NSNumber* _incomingMailServerPortNumber;
	BOOL _incomingMailServerUseSSL;
	NSString* _incomingMailServerUsername;
	NSString* _incomingMailServerIMAPPathPrefix;
	NSString* _incomingPassword;
	NSString* _outgoingPassword;
	BOOL _outgoingPasswordSameAsIncomingPassword;
	NSString* _outgoingMailServerAuthentication;
	NSString* _outgoingMailServerHostname;
	NSNumber* _outgoingMailServerPortNumber;
	BOOL _outgoingMailServerUseSSL;
	NSString* _outgoingMailServerUsername;
	NSString* _incomingACAccountIdentifier;
	NSString* _outgoingACAccountIdentifier;
	NSNumber* _incomingMailServerUseSSLNum;
	NSNumber* _outgoingPasswordSameAsIncomingPasswordNum;
	NSNumber* _outgoingMailServerUseSSLNum;

}

@property (nonatomic,readonly) NSNumber * incomingMailServerUseSSLNum;                            //@synthesize incomingMailServerUseSSLNum=_incomingMailServerUseSSLNum - In the implementation block
@property (nonatomic,readonly) NSNumber * outgoingPasswordSameAsIncomingPasswordNum;              //@synthesize outgoingPasswordSameAsIncomingPasswordNum=_outgoingPasswordSameAsIncomingPasswordNum - In the implementation block
@property (nonatomic,readonly) NSNumber * outgoingMailServerUseSSLNum;                            //@synthesize outgoingMailServerUseSSLNum=_outgoingMailServerUseSSLNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * emailAccountDescription;                         //@synthesize emailAccountDescription=_emailAccountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * emailAccountName;                                //@synthesize emailAccountName=_emailAccountName - In the implementation block
@property (nonatomic,retain,readonly) NSString * emailAccountType;                                //@synthesize emailAccountType=_emailAccountType - In the implementation block
@property (nonatomic,retain,readonly) NSString * emailAddress;                                    //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain,readonly) NSString * incomingMailServerAuthentication;                //@synthesize incomingMailServerAuthentication=_incomingMailServerAuthentication - In the implementation block
@property (nonatomic,retain,readonly) NSString * incomingMailServerHostname;                      //@synthesize incomingMailServerHostname=_incomingMailServerHostname - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * incomingMailServerPortNumber;                    //@synthesize incomingMailServerPortNumber=_incomingMailServerPortNumber - In the implementation block
@property (nonatomic,readonly) BOOL incomingMailServerUseSSL;                                     //@synthesize incomingMailServerUseSSL=_incomingMailServerUseSSL - In the implementation block
@property (nonatomic,retain,readonly) NSString * incomingMailServerUsername;                      //@synthesize incomingMailServerUsername=_incomingMailServerUsername - In the implementation block
@property (nonatomic,retain,readonly) NSString * incomingMailServerIMAPPathPrefix;                //@synthesize incomingMailServerIMAPPathPrefix=_incomingMailServerIMAPPathPrefix - In the implementation block
@property (nonatomic,retain,readonly) NSString * incomingPassword;                                //@synthesize incomingPassword=_incomingPassword - In the implementation block
@property (nonatomic,retain) NSString * incomingACAccountIdentifier;                              //@synthesize incomingACAccountIdentifier=_incomingACAccountIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * outgoingPassword;                                //@synthesize outgoingPassword=_outgoingPassword - In the implementation block
@property (nonatomic,readonly) BOOL outgoingPasswordSameAsIncomingPassword;                       //@synthesize outgoingPasswordSameAsIncomingPassword=_outgoingPasswordSameAsIncomingPassword - In the implementation block
@property (nonatomic,retain,readonly) NSString * outgoingMailServerAuthentication;                //@synthesize outgoingMailServerAuthentication=_outgoingMailServerAuthentication - In the implementation block
@property (nonatomic,retain,readonly) NSString * outgoingMailServerHostname;                      //@synthesize outgoingMailServerHostname=_outgoingMailServerHostname - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * outgoingMailServerPortNumber;                    //@synthesize outgoingMailServerPortNumber=_outgoingMailServerPortNumber - In the implementation block
@property (nonatomic,readonly) BOOL outgoingMailServerUseSSL;                                     //@synthesize outgoingMailServerUseSSL=_outgoingMailServerUseSSL - In the implementation block
@property (nonatomic,retain,readonly) NSString * outgoingMailServerUsername;                      //@synthesize outgoingMailServerUsername=_outgoingMailServerUsername - In the implementation block
@property (nonatomic,retain) NSString * outgoingACAccountIdentifier;                              //@synthesize outgoingACAccountIdentifier=_outgoingACAccountIdentifier - In the implementation block
+(id)profileNameFromAccountTag:(id)arg1 ;
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSString *)emailAddress;
-(NSString *)emailAccountType;
-(id)_emailAccountTypeLocalizedString;
-(NSString *)incomingMailServerHostname;
-(id)_authenticationTypeLocalizedString:(id)arg1 ;
-(BOOL)containsSensitiveUserInformation;
-(NSString *)incomingPassword;
-(NSString *)outgoingPassword;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)emailAccountDescription;
-(NSString *)emailAccountName;
-(NSString *)incomingMailServerAuthentication;
-(NSNumber *)incomingMailServerPortNumber;
-(BOOL)incomingMailServerUseSSL;
-(NSString *)incomingMailServerUsername;
-(NSString *)incomingMailServerIMAPPathPrefix;
-(NSString *)incomingACAccountIdentifier;
-(void)setIncomingACAccountIdentifier:(NSString *)arg1 ;
-(BOOL)outgoingPasswordSameAsIncomingPassword;
-(NSString *)outgoingMailServerAuthentication;
-(BOOL)outgoingMailServerUseSSL;
-(NSString *)outgoingMailServerHostname;
-(NSNumber *)outgoingMailServerPortNumber;
-(NSString *)outgoingMailServerUsername;
-(NSString *)outgoingACAccountIdentifier;
-(void)setOutgoingACAccountIdentifier:(NSString *)arg1 ;
-(NSNumber *)incomingMailServerUseSSLNum;
-(NSNumber *)outgoingPasswordSameAsIncomingPasswordNum;
-(NSNumber *)outgoingMailServerUseSSLNum;
-(id)mailAccountIdentifiers;
-(id)verboseDescription;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end
