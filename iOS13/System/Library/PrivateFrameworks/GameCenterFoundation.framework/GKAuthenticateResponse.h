/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL, NSString;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	BOOL _loginDisabled;
	BOOL _passwordChangeRequired;
	BOOL _shouldShowLinkAccountsUI;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;

}

@property (nonatomic,retain) GKPlayerCredential * credential;                                   //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL loginDisabled;                                                //@synthesize loginDisabled=_loginDisabled - In the implementation block
@property (assign,nonatomic) BOOL passwordChangeRequired;                                       //@synthesize passwordChangeRequired=_passwordChangeRequired - In the implementation block
@property (nonatomic,retain) NSURL * passwordChangeURL;                                         //@synthesize passwordChangeURL=_passwordChangeURL - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkAccountsUI;                                     //@synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI - In the implementation block
@property (nonatomic,retain) NSString * alertTitle;                                             //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,retain) NSString * alertMessage;                                           //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,retain) NSString * lastPersonalizationVersionDisplayed;                    //@synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;              //@synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKPlayerCredential *)credential;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(void)setAlertTitle:(NSString *)arg1 ;
-(NSString *)alertTitle;
-(BOOL)loginDisabled;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(NSString *)lastPersonalizationVersionDisplayed;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
-(BOOL)shouldShowLinkAccountsUI;
-(BOOL)passwordChangeRequired;
-(NSURL *)passwordChangeURL;
-(void)setLoginDisabled:(BOOL)arg1 ;
-(void)setPasswordChangeRequired:(BOOL)arg1 ;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(void)setShouldShowLinkAccountsUI:(BOOL)arg1 ;
@end

