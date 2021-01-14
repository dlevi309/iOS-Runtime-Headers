/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cancelButton;
-(void)setCancelButton:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(NSString *)password;
-(UIColor *)backgroundColor;
-(void)setLogoImage:(id)arg1;
-(void)setPassword:(id)arg1;
-(UIImage *)logoImage;
-(id)signInButton;
-(void)setSignInButton:(id)arg1;
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

