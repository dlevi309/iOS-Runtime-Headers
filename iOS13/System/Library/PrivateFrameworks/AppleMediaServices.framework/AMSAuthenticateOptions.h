/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _usernameEditable;
	BOOL _allowSecondaryCredentialSource;
	BOOL _demoAccountSetup;
	BOOL _remoteProxyAuthentication;
	NSString* _appProvidedContext;
	NSDictionary* _appProvidedData;
	NSDictionary* _createAccountQueryParams;
	AMSProcessInfo* _clientInfo;
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
	unsigned long long _credentialSource;

}

@property (assign,nonatomic) BOOL allowSecondaryCredentialSource;                                              //@synthesize allowSecondaryCredentialSource=_allowSecondaryCredentialSource - In the implementation block
@property (nonatomic,readonly) BOOL allowSilentAuthentication; 
@property (assign,nonatomic) unsigned long long credentialSource;                                              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (assign,getter=isDemoAccountSetup,nonatomic) BOOL demoAccountSetup;                                  //@synthesize demoAccountSetup=_demoAccountSetup - In the implementation block
@property (getter=isRemoteProxyAuthentication,nonatomic,readonly) BOOL remoteProxyAuthentication;              //@synthesize remoteProxyAuthentication=_remoteProxyAuthentication - In the implementation block
@property (assign,nonatomic) BOOL allowServerDialogs;                                                          //@synthesize allowServerDialogs=_allowServerDialogs - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationType; 
@property (nonatomic,copy) NSString * appProvidedContext;                                                      //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                                                     //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (assign,nonatomic) BOOL canMakeAccountActive;                                                        //@synthesize canMakeAccountActive=_canMakeAccountActive - In the implementation block
@property (nonatomic,retain) NSDictionary * createAccountQueryParams;                                          //@synthesize createAccountQueryParams=_createAccountQueryParams - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                                      //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonString;                                                   //@synthesize defaultButtonString=_defaultButtonString - In the implementation block
@property (nonatomic,retain) NSDictionary * HTTPHeaders;                                                       //@synthesize HTTPHeaders=_HTTPHeaders - In the implementation block
@property (nonatomic,retain) NSURL * iconBundleURL;                                                            //@synthesize iconBundleURL=_iconBundleURL - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                                                //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSString * promptTitle;                                                           //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,retain) NSString * proxyAppBundleID;                                                      //@synthesize proxyAppBundleID=_proxyAppBundleID - In the implementation block
@property (nonatomic,retain) NSString * proxyAppName;                                                          //@synthesize proxyAppName=_proxyAppName - In the implementation block
@property (nonatomic,retain) NSString * reason;                                                                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * userAgentSuffix;                                                       //@synthesize userAgentSuffix=_userAgentSuffix - In the implementation block
@property (assign,nonatomic) BOOL usernameEditable;                                                            //@synthesize usernameEditable=_usernameEditable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(id)mediaType;
-(unsigned long long)authenticationType;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setCanMakeAccountActive:(BOOL)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)presentingViewController;
-(void)setPresentingViewController:(id)arg1 ;
-(id)optionsDictionary;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(NSString *)proxyAppName;
-(void)setProxyAppName:(NSString *)arg1 ;
-(NSString *)appProvidedContext;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(NSDictionary *)appProvidedData;
-(NSString *)defaultButtonString;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(BOOL)allowSecondaryCredentialSource;
-(BOOL)allowServerDialogs;
-(BOOL)canMakeAccountActive;
-(NSDictionary *)createAccountQueryParams;
-(unsigned long long)credentialSource;
-(BOOL)isRemoteProxyAuthentication;
-(NSString *)logKey;
-(NSDictionary *)HTTPHeaders;
-(NSString *)promptTitle;
-(NSString *)proxyAppBundleID;
-(NSString *)userAgentSuffix;
-(BOOL)allowSilentAuthentication;
-(id)optionsDictionaryForRemoteProxyAuthentication;
-(id)authKitData;
-(void)setAuthKitData:(id)arg1 ;
-(void)setAllowServerDialogs:(BOOL)arg1 ;
-(void)setCreateAccountQueryParams:(NSDictionary *)arg1 ;
-(void)setHTTPHeaders:(NSDictionary *)arg1 ;
-(NSURL *)iconBundleURL;
-(void)setIconBundleURL:(NSURL *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setPromptTitle:(NSString *)arg1 ;
-(void)setProxyAppBundleID:(NSString *)arg1 ;
-(void)setUserAgentSuffix:(NSString *)arg1 ;
-(BOOL)usernameEditable;
-(void)setUsernameEditable:(BOOL)arg1 ;
-(void)setAllowSecondaryCredentialSource:(BOOL)arg1 ;
-(void)setCredentialSource:(unsigned long long)arg1 ;
-(BOOL)isDemoAccountSetup;
-(void)setDemoAccountSetup:(BOOL)arg1 ;
@end

