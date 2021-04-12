/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

