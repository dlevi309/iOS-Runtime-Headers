/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSAuthenticationContext, ISDialog, ISDialogButton, NSURL;

@interface ISServerAuthenticationOperation : ISOperation {

	unsigned long long _authenticatedAccountCredentialSource;
	NSNumber* _authenticatedAccountDSID;
	SSAuthenticationContext* _authenticationContext;
	ISDialog* _dialog;
	BOOL _performsButtonAction;
	ISDialogButton* _performedButton;
	NSURL* _redirectURL;
	ISDialogButton* _selectedButton;

}

@property (retain) NSNumber * authenticatedAccountDSID;                                  //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) NSURL * redirectURL;                                                  //@synthesize redirectURL=_redirectURL - In the implementation block
@property (retain) ISDialogButton * selectedButton;                                      //@synthesize selectedButton=_selectedButton - In the implementation block
@property (retain) ISDialogButton * performedButton;                                     //@synthesize performedButton=_performedButton - In the implementation block
@property (retain) SSAuthenticationContext * authenticationContext;                      //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) ISDialog * dialog;                                                    //@synthesize dialog=_dialog - In the implementation block
@property (assign) BOOL performsButtonAction;                                            //@synthesize performsButtonAction=_performsButtonAction - In the implementation block
@property (assign) unsigned long long authenticatedAccountCredentialSource;              //@synthesize authenticatedAccountCredentialSource=_authenticatedAccountCredentialSource - In the implementation block
-(id)init;
-(void)dealloc;
-(void)run;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(ISDialog *)dialog;
-(void)setDialog:(ISDialog *)arg1 ;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(NSNumber *)authenticatedAccountDSID;
-(ISDialogButton *)selectedButton;
-(void)setSelectedButton:(ISDialogButton *)arg1 ;
-(void)setAuthenticatedAccountDSID:(NSNumber *)arg1 ;
-(unsigned long long)authenticatedAccountCredentialSource;
-(void)setAuthenticatedAccountCredentialSource:(unsigned long long)arg1 ;
-(void)setPerformsButtonAction:(BOOL)arg1 ;
-(BOOL)performsButtonAction;
-(ISDialogButton *)performedButton;
-(void)setPerformedButton:(ISDialogButton *)arg1 ;
@end

