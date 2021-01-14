/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/


@class NSString;

@interface Common : NSObject {

	BOOL _accountInfoLoaded;
	BOOL _isRenewingAccountCredentials;
	BOOL _isTokenAccessible;
	BOOL _isAccountPresent;
	NSString* _personID;
	NSString* _appToken;
	NSString* _fmfHost;
	NSString* _username;

}

@property (nonatomic,retain) NSString * fmfHost;                             //@synthesize fmfHost=_fmfHost - In the implementation block
@property (assign,nonatomic) BOOL accountInfoLoaded;                         //@synthesize accountInfoLoaded=_accountInfoLoaded - In the implementation block
@property (assign,nonatomic) BOOL isRenewingAccountCredentials;              //@synthesize isRenewingAccountCredentials=_isRenewingAccountCredentials - In the implementation block
@property (assign,nonatomic) BOOL isTokenAccessible;                         //@synthesize isTokenAccessible=_isTokenAccessible - In the implementation block
@property (assign,nonatomic) BOOL isAccountPresent;                          //@synthesize isAccountPresent=_isAccountPresent - In the implementation block
@property (nonatomic,readonly) NSString * username;                          //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * personID;                          //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * appToken;                          //@synthesize appToken=_appToken - In the implementation block
@property (nonatomic,readonly) NSString * redirectedHost; 
+(id)sharedInstance;
+(id)defaultCountryCode;
-(BOOL)isLocked;
-(id)init;
-(id)productType;
-(id)osVersion;
-(NSString *)username;
-(id)deviceUDID;
-(id)buildVersion;
-(NSString *)personID;
-(NSString *)fmfHost;
-(void)dealloc;
-(BOOL)isFMFAllowed;
-(void)clearFMFAccount;
-(BOOL)hasFMFUser;
-(BOOL)tokenIsNotAccessible;
-(BOOL)isAppRestricted;
-(void)loadAccountInfo;
-(void)setIsRenewingAccountCredentials:(BOOL)arg1 ;
-(void)redirected:(id)arg1 ;
-(void)setIsAccountPresent:(BOOL)arg1 ;
-(void)setIsTokenAccessible:(BOOL)arg1 ;
-(void)setAccountInfoLoaded:(BOOL)arg1 ;
-(BOOL)accountInfoLoaded;
-(BOOL)isTokenAccessible;
-(BOOL)isAccountPresent;
-(id)completeNumberForPhoneNumber:(id)arg1 ;
-(NSString *)appToken;
-(NSString *)redirectedHost;
-(void)flushRedirection;
-(BOOL)isHandleEmail:(id)arg1 ;
-(id)handlesForSAPerson:(id)arg1 ;
-(void)setFmfHost:(NSString *)arg1 ;
-(BOOL)isRenewingAccountCredentials;
@end

