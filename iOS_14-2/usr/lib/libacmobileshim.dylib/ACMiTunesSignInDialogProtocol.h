/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACMiTunesSignInDialogProtocol <ACMSignInDialogProtocol>
@property (assign,nonatomic) BOOL isUserNameEditable; 
@property (nonatomic,retain) NSString * alertViewPrompt; 
@required
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(id)arg1;
-(BOOL)isUserNameEditable;
-(void)setIsUserNameEditable:(BOOL)arg1;

@end

