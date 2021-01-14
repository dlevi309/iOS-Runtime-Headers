/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACFMessage.h>

@class NSNumber;

@interface ACMMessage : ACFMessage

@property (nonatomic,retain) NSNumber * certificateDuration; 
-(id)realm;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)applicationName;
-(id)appID;
-(id)userName;
-(void)setUserName:(id)arg1 ;
-(void)setSessionToken:(id)arg1 ;
-(id)sessionToken;
-(void)setPersonId:(id)arg1 ;
-(void)setToken:(id)arg1 ;
-(id)personId;
-(void)setPrincipal:(id)arg1 ;
-(id)serviceName;
-(id)rawResponseData;
-(id)personID;
-(id)principal;
-(void)setRealm:(id)arg1 ;
-(void)setPersonID:(id)arg1 ;
-(id)token;
-(void)setServiceName:(id)arg1 ;
-(void)setApplicationName:(id)arg1 ;
-(id)publicKeyVersion;
-(void)setPublicKeyVersion:(id)arg1 ;
-(void)setRawResponseData:(id)arg1 ;
-(void)setAppID:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)serviceHost;
-(void)setServiceHost:(id)arg1 ;
-(void)setAppIDKey:(id)arg1 ;
-(BOOL)useAlertView;
-(id)appIDKey;
-(void)setGeneratedWithTouchID:(BOOL)arg1 ;
-(BOOL)automaticallyCancelWhenSwitchingToBackground;
-(BOOL)generatedWithTouchID;
-(void)setUserNameFieldEditable:(BOOL)arg1 ;
-(id)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1 ;
-(void)setUseAlertView:(BOOL)arg1 ;
-(BOOL)userNameFieldEditable;
-(id)alertViewPrompt;
-(void)setAlertViewPrompt:(id)arg1 ;
-(void)setAutomaticallyCancelWhenSwitchingToBackground:(BOOL)arg1 ;
-(BOOL)canUseTouchID;
-(void)setCanUseTouchID:(BOOL)arg1 ;
-(id)serviceTicketString;
-(void)setServiceTicketString:(id)arg1 ;
-(void)setPersonDSID:(id)arg1 ;
-(id)serviceApplicationId;
-(void)setServiceApplicationId:(id)arg1 ;
-(id)serviceApplicationIdKey;
-(void)setServiceApplicationIdKey:(id)arg1 ;
-(id)encryptedContent;
-(void)setEncryptedContent:(id)arg1 ;
-(id)encryptedContentHMAC;
-(void)setEncryptedContentHMAC:(id)arg1 ;
-(id)shouldUseHSAToken;
-(void)setShouldUseHSAToken:(id)arg1 ;
-(id)app2SVRequired;
-(void)setApp2SVRequired:(id)arg1 ;
-(id)user2SVEnrolled;
-(void)setUser2SVEnrolled:(id)arg1 ;
-(BOOL)isInApp2SVEnabledOption;
-(void)setIsInApp2SVEnabledOption:(BOOL)arg1 ;
-(BOOL)ignoreHSASessionInKeychain;
-(void)setIgnoreHSASessionInKeychain:(BOOL)arg1 ;
-(BOOL)doNotSaveHSASessionInKeychain;
-(void)setDoNotSaveHSASessionInKeychain:(BOOL)arg1 ;
-(BOOL)managerSignIn;
-(void)setManagerSignIn:(BOOL)arg1 ;
-(BOOL)cancelAllowed;
-(void)setCancelAllowed:(BOOL)arg1 ;
-(BOOL)disableSingleSignOn;
-(void)setDisableSingleSignOn:(BOOL)arg1 ;
-(id)idleExpirationTimeout;
-(void)setIdleExpirationTimeout:(id)arg1 ;
-(id)managerSignInPromptString;
-(void)setManagerSignInPromptString:(id)arg1 ;
-(BOOL)lavaForceUseFailoverServerAddress;
-(void)setLavaForceUseFailoverServerAddress:(BOOL)arg1 ;
-(id)lavaFailoverRetrieveSaltAPIAddress;
-(void)setLavaFailoverRetrieveSaltAPIAddress:(id)arg1 ;
-(id)lavaFailoverAuthenticateAPIAddress;
-(void)setLavaFailoverAuthenticateAPIAddress:(id)arg1 ;
-(NSNumber *)certificateDuration;
-(void)setCertificateDuration:(NSNumber *)arg1 ;
-(id)personDSID;
@end

