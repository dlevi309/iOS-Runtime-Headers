/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL, NSString;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	BOOL _loginDisabled;
	BOOL _passwordChangeRequired;
	BOOL _shouldShowLinkAccountsUI;
	BOOL _useNewDashboardUI;
	BOOL _accessPointIsOnAutomatically;
	BOOL _accessPointShowHighlights;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;
	NSString* _lastProfilePrivacyVersionDisplayed;
	long long _accessPointLocation;

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
@property (nonatomic,retain) NSString * lastProfilePrivacyVersionDisplayed;                     //@synthesize lastProfilePrivacyVersionDisplayed=_lastProfilePrivacyVersionDisplayed - In the implementation block
@property (assign,nonatomic) BOOL useNewDashboardUI;                                            //@synthesize useNewDashboardUI=_useNewDashboardUI - In the implementation block
@property (assign,nonatomic) BOOL accessPointIsOnAutomatically;                                 //@synthesize accessPointIsOnAutomatically=_accessPointIsOnAutomatically - In the implementation block
@property (assign,nonatomic) BOOL accessPointShowHighlights;                                    //@synthesize accessPointShowHighlights=_accessPointShowHighlights - In the implementation block
@property (assign,nonatomic) long long accessPointLocation;                                     //@synthesize accessPointLocation=_accessPointLocation - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKPlayerCredential *)credential;
-(void)setAlertMessage:(NSString *)arg1 ;
-(id)init;
-(BOOL)loginDisabled;
-(void)setAlertTitle:(NSString *)arg1 ;
-(void)setAccessPointShowHighlights:(BOOL)arg1 ;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(long long)accessPointLocation;
-(BOOL)accessPointIsOnAutomatically;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(BOOL)accessPointShowHighlights;
-(NSString *)alertTitle;
-(NSURL *)passwordChangeURL;
-(BOOL)shouldShowLinkAccountsUI;
-(BOOL)passwordChangeRequired;
-(NSString *)alertMessage;
-(void)setAccessPointIsOnAutomatically:(BOOL)arg1 ;
-(void)setAccessPointLocation:(long long)arg1 ;
-(void)setUseNewDashboardUI:(BOOL)arg1 ;
-(void)setLoginDisabled:(BOOL)arg1 ;
-(void)setPasswordChangeRequired:(BOOL)arg1 ;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(void)setShouldShowLinkAccountsUI:(BOOL)arg1 ;
-(NSString *)lastPersonalizationVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
-(NSString *)lastProfilePrivacyVersionDisplayed;
-(void)setLastProfilePrivacyVersionDisplayed:(NSString *)arg1 ;
-(BOOL)useNewDashboardUI;
@end

