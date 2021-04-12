/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, AMSProcessInfo, NSURL;

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _authenticationType;
	BOOL _allowServerDialogs;
	BOOL _canMakeAccountActive;
	BOOL _enableAccountCreation;
	BOOL _ignoreAccountConversion;
	BOOL _usernameEditable;
	BOOL _allowSecondaryCredentialSource;
	BOOL _demoAccountSetup;
	BOOL _ephemeral;
	BOOL _remoteProxyAuthentication;
	NSString* _appProvidedContext;
	NSDictionary* _appProvidedData;
	NSString* _cancelButtonString;
	NSDictionary* _createAccountQueryParams;
	AMSProcessInfo* _clientInfo;
	unsigned long long _credentialSource;
	NSString* _debugReason;
	NSString* _defaultButtonString;
	NSDictionary* _HTTPHeaders;
	NSURL* _iconBundleURL;
	NSString* _logKey;
	NSString* _promptTitle;
	NSString* _proxyAppBundleID;
	NSString* _proxyAppName;
	NSString* _reason;
	NSString* _userAgent;
	NSString* _userAgentSuffix;
	NSString* _companionDeviceClientInfo;
	NSString* _companionDeviceUDID;
	long long _serviceType;
	NSString* _serviceIdentifier;

}

@property (assign,nonatomic) BOOL allowSecondaryCredentialSource;                                              //@synthesize allowSecondaryCredentialSource=_allowSecondaryCredentialSource - In the implementation block
@property (nonatomic,retain) NSString * companionDeviceClientInfo;                                             //@synthesize companionDeviceClientInfo=_companionDeviceClientInfo - In the implementation block
@property (nonatomic,retain) NSString * companionDeviceUDID;                                                   //@synthesize companionDeviceUDID=_companionDeviceUDID - In the implementation block
@property (assign,getter=isDemoAccountSetup,nonatomic) BOOL demoAccountSetup;                                  //@synthesize demoAccountSetup=_demoAccountSetup - In the implementation block
@property (assign,nonatomic) BOOL ephemeral;                                                                   //@synthesize ephemeral=_ephemeral - In the implementation block
@property (assign,nonatomic) long long serviceType;                                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (getter=isRemoteProxyAuthentication,nonatomic,readonly) BOOL remoteProxyAuthentication;              //@synthesize remoteProxyAuthentication=_remoteProxyAuthentication - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                                                     //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowServerDialogs;                                                          //@synthesize allowServerDialogs=_allowServerDialogs - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationType; 
@property (nonatomic,copy) NSString * appProvidedContext;                                                      //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                                                     //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (nonatomic,retain) NSString * cancelButtonString;                                                    //@synthesize cancelButtonString=_cancelButtonString - In the implementation block
@property (assign,nonatomic) BOOL canMakeAccountActive;                                                        //@synthesize canMakeAccountActive=_canMakeAccountActive - In the implementation block
@property (nonatomic,retain) NSDictionary * createAccountQueryParams;                                          //@synthesize createAccountQueryParams=_createAccountQueryParams - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                                      //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) unsigned long long credentialSource;                                              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,retain) NSString * debugReason;                                                           //@synthesize debugReason=_debugReason - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonString;                                                   //@synthesize defaultButtonString=_defaultButtonString - In the implementation block
@property (assign,nonatomic) BOOL enableAccountCreation;                                                       //@synthesize enableAccountCreation=_enableAccountCreation - In the implementation block
@property (nonatomic,retain) NSDictionary * HTTPHeaders;                                                       //@synthesize HTTPHeaders=_HTTPHeaders - In the implementation block
@property (nonatomic,retain) NSURL * iconBundleURL;                                                            //@synthesize iconBundleURL=_iconBundleURL - In the implementation block
@property (assign,nonatomic) BOOL ignoreAccountConversion;                                                     //@synthesize ignoreAccountConversion=_ignoreAccountConversion - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                                                //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSString * promptTitle;                                                           //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,retain) NSString * proxyAppBundleID;                                                      //@synthesize proxyAppBundleID=_proxyAppBundleID - In the implementation block
@property (nonatomic,retain) NSString * proxyAppName;                                                          //@synthesize proxyAppName=_proxyAppName - In the implementation block
@property (nonatomic,retain) NSString * reason;                                                                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * userAgentSuffix;                                                       //@synthesize userAgentSuffix=_userAgentSuffix - In the implementation block
@property (assign,nonatomic) BOOL usernameEditable;                                                            //@synthesize usernameEditable=_usernameEditable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)ignoreAccountConversion;
-(void)setEnableAccountCreation:(BOOL)arg1 ;
-(NSString *)cancelButtonString;
-(BOOL)canMakeAccountActive;
-(NSString *)defaultButtonString;
-(void)setMediaType:(id)arg1 ;
-(id)mediaType;
-(void)setDemoAccountSetup:(BOOL)arg1 ;
-(id)init;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(void)setCredentialSource:(unsigned long long)arg1 ;
-(NSDictionary *)HTTPHeaders;
-(AMSProcessInfo *)clientInfo;
-(void)setCompanionDeviceClientInfo:(NSString *)arg1 ;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(unsigned long long)authenticationType;
-(NSString *)companionDeviceClientInfo;
-(id)authKitData;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setAuthKitData:(id)arg1 ;
-(NSString *)appProvidedContext;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userAgentSuffix;
-(void)setCancelButtonString:(NSString *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(BOOL)isDemoAccountSetup;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(void)setIconBundleURL:(NSURL *)arg1 ;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(void)setDebugReason:(NSString *)arg1 ;
-(NSDictionary *)appProvidedData;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)enableAccountCreation;
-(void)setCompanionDeviceUDID:(NSString *)arg1 ;
-(BOOL)allowServerDialogs;
-(id)presentingViewController;
-(void)setServiceType:(long long)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(void)setProxyAppName:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(id)description;
-(NSString *)debugReason;
-(void)setUserAgentSuffix:(NSString *)arg1 ;
-(void)setPresentingViewController:(id)arg1 ;
-(NSString *)promptTitle;
-(void)setAllowSecondaryCredentialSource:(BOOL)arg1 ;
-(BOOL)isRemoteProxyAuthentication;
-(NSString *)reason;
-(void)setCanMakeAccountActive:(BOOL)arg1 ;
-(id)optionsDictionary;
-(void)setHTTPHeaders:(NSDictionary *)arg1 ;
-(BOOL)usernameEditable;
-(id)initWithCoder:(id)arg1 ;
-(void)setIgnoreAccountConversion:(BOOL)arg1 ;
-(NSString *)userAgent;
-(NSDictionary *)createAccountQueryParams;
-(void)setPromptTitle:(NSString *)arg1 ;
-(void)setUsernameEditable:(BOOL)arg1 ;
-(NSURL *)iconBundleURL;
-(NSString *)companionDeviceUDID;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setCreateAccountQueryParams:(NSDictionary *)arg1 ;
-(long long)serviceType;
-(NSString *)proxyAppBundleID;
-(NSString *)proxyAppName;
-(void)setAllowServerDialogs:(BOOL)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)ephemeral;
-(id)optionsDictionaryForRemoteProxyAuthentication;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)credentialSource;
-(void)setProxyAppBundleID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)logKey;
-(BOOL)allowSecondaryCredentialSource;
-(void)setEphemeral:(BOOL)arg1 ;
@end

