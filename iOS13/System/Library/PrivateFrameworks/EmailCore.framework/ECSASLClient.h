/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol ECAuthenticationCredentials;
@class NSError, NSString, NSArray;

@interface ECSASLClient : NSObject <EFLoggable> {

	char* _userLanguageCode;
	char* _authenticationName;
	char* _authorizationName;
	sasl_secret* _password;
	char* _authenticationPersonID;
	char* _authorizationPersonID;
	char* _appleToken;
	char* _machineID;
	char* _oneTimePassword;
	char* _clientInfo;
	char* _oauthToken;
	BOOL _excludeAuthorizationName;
	BOOL _excludeInitialResponse;
	BOOL _mechanismUsesPlainText;
	BOOL _lastResponseIncludesCredential;
	unsigned _encryptionBufferSize;
	id<ECAuthenticationCredentials> _credentials;
	long long _saslStatus;
	NSError* _saslError;
	NSString* _selectedMechanismName;
	NSArray* _mechanismNames;
	sasl_callback* _callbacks;
	sasl_connRef _saslConnection;

}

@property (nonatomic,copy) NSString * selectedMechanismName;                                  //@synthesize selectedMechanismName=_selectedMechanismName - In the implementation block
@property (assign,nonatomic) long long saslStatus;                                            //@synthesize saslStatus=_saslStatus - In the implementation block
@property (nonatomic,retain) NSError * saslError;                                             //@synthesize saslError=_saslError - In the implementation block
@property (assign,nonatomic) unsigned encryptionBufferSize;                                   //@synthesize encryptionBufferSize=_encryptionBufferSize - In the implementation block
@property (nonatomic,copy) NSArray * mechanismNames;                                          //@synthesize mechanismNames=_mechanismNames - In the implementation block
@property (nonatomic,readonly) sasl_callback* callbacks;                                      //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,readonly) sasl_connRef saslConnection;                                   //@synthesize saslConnection=_saslConnection - In the implementation block
@property (assign,nonatomic) BOOL mechanismUsesPlainText;                                     //@synthesize mechanismUsesPlainText=_mechanismUsesPlainText - In the implementation block
@property (assign,nonatomic) BOOL lastResponseIncludesCredential;                             //@synthesize lastResponseIncludesCredential=_lastResponseIncludesCredential - In the implementation block
@property (assign,nonatomic,__weak) id<ECAuthenticationCredentials> credentials;              //@synthesize credentials=_credentials - In the implementation block
@property (assign,nonatomic) BOOL excludeAuthorizationName;                                   //@synthesize excludeAuthorizationName=_excludeAuthorizationName - In the implementation block
@property (assign,nonatomic) BOOL excludeInitialResponse;                                     //@synthesize excludeInitialResponse=_excludeInitialResponse - In the implementation block
@property (nonatomic,readonly) BOOL lastResponseIncludesPlainTextCredential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)installedMechanisms;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)start;
-(sasl_callback*)callbacks;
-(void)setCredentials:(id<ECAuthenticationCredentials>)arg1 ;
-(id<ECAuthenticationCredentials>)credentials;
-(unsigned)encryptionBufferSize;
-(id)responseForServerData:(id)arg1 ;
-(BOOL)_logGenericError:(int)arg1 saslConnection:(sasl_connRef)arg2 description:(id)arg3 error:(id*)arg4 ;
-(long long)saslStatus;
-(NSError *)saslError;
-(NSString *)selectedMechanismName;
-(NSArray *)mechanismNames;
-(sasl_connRef)saslConnection;
-(BOOL)excludeInitialResponse;
-(void)setSelectedMechanismName:(NSString *)arg1 ;
-(void)_clearAuthenticationCallbackBuffers;
-(void)setSaslStatus:(long long)arg1 ;
-(void)_retrieveEncryptionBufferSize;
-(void)_handleGenericError:(int)arg1 description:(id)arg2 ;
-(void)_handleNeedsUserInteraction:(sasl_interact*)arg1 ;
-(void)_handleStartFailure:(int)arg1 ;
-(void)setLastResponseIncludesCredential:(BOOL)arg1 ;
-(BOOL)lastResponseIncludesCredential;
-(BOOL)mechanismUsesPlainText;
-(void)setEncryptionBufferSize:(unsigned)arg1 ;
-(void)setSaslError:(NSError *)arg1 ;
-(id)initWithMechanismNames:(id)arg1 credentials:(id)arg2 externalSecurityLayer:(unsigned)arg3 allowPlainText:(BOOL)arg4 ;
-(BOOL)lastResponseIncludesPlainTextCredential;
-(id)newEncryptedDataForBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(id)newDecryptedDataForBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(BOOL)excludeAuthorizationName;
-(void)setExcludeAuthorizationName:(BOOL)arg1 ;
-(void)setExcludeInitialResponse:(BOOL)arg1 ;
-(void)setMechanismNames:(NSArray *)arg1 ;
-(void)setMechanismUsesPlainText:(BOOL)arg1 ;
@end

