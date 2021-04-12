/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class UIImage, UIColor, NSString;


@protocol ACMExternalUIControllerProtocol <ACMUIControllerProtocol>
@property (assign,nonatomic) unsigned long long signInStyle; 
@property (nonatomic,retain) UIImage * logoImage; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder; 
@property (assign,nonatomic) CGPoint widgetPosition; 
@property (nonatomic,retain) NSString * widgetAccountLabel; 
@property (nonatomic,retain) id signInButton; 
@property (nonatomic,retain) id cancelButton; 
@property (assign,nonatomic) long long widgetPasswordReturnKeyType; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) NSString * password; 
@required
-(NSString *)password;
-(void)setPassword:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1;
-(id)signInButton;
-(void)setSignInButton:(id)arg1;
-(UIImage *)logoImage;
-(void)setLogoImage:(id)arg1;
-(void)setWidgetPosition:(CGPoint)arg1;
-(void)setWidgetAccountLabel:(id)arg1;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(void)setAccountNameFieldPlaceholder:(id)arg1;
-(void)setSignInStyle:(unsigned long long)arg1;
-(unsigned long long)signInStyle;
-(NSString *)accountNameFieldPlaceholder;
-(CGPoint)widgetPosition;
-(long long)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(BOOL)shouldAuthenticateOnUserInput;

@end

