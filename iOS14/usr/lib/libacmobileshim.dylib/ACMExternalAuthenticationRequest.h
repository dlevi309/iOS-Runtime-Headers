/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACMExternalAuthenticationRequest <ACMBaseAuthenticationRequest>
@property (assign) BOOL useAlertView; 
@property (assign) BOOL userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) BOOL automaticallyCancelWhenSwitchingToBackground; 
@property (assign) BOOL canUseTouchID; 
@required
-(BOOL)useAlertView;
-(BOOL)automaticallyCancelWhenSwitchingToBackground;
-(void)setUserNameFieldEditable:(BOOL)arg1;
-(void)setUseAlertView:(BOOL)arg1;
-(BOOL)userNameFieldEditable;
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(id)arg1;
-(void)setAutomaticallyCancelWhenSwitchingToBackground:(BOOL)arg1;
-(BOOL)canUseTouchID;
-(void)setCanUseTouchID:(BOOL)arg1;

@end

