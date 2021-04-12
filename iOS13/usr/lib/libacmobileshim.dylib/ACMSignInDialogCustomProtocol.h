/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class UIColor, NSString, UIButton, UIBarButtonItem;


@protocol ACMSignInDialogCustomProtocol <ACMSignInDialogProtocol>
@property (nonatomic,retain) Class widgetClass; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) BOOL userNameFieldEditable; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint widgetPosition; 
@property (assign,nonatomic) NSString * widgetAccountLabel; 
@property (assign,nonatomic) long long widgetPasswordReturnKeyType; 
@property (nonatomic,retain) UIButton * signInButton; 
@property (nonatomic,retain) UIBarButtonItem * signInBarButton; 
@property (nonatomic,retain) UIButton * cancelButton; 
@property (nonatomic,retain) UIBarButtonItem * cancelBarButton; 
@required
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(UIButton *)cancelButton;
-(void)setCancelButton:(id)arg1;
-(UIBarButtonItem *)cancelBarButton;
-(UIButton *)signInButton;
-(void)setSignInButton:(id)arg1;
-(UIBarButtonItem *)signInBarButton;
-(void)setWidgetPosition:(CGPoint)arg1;
-(void)setWidgetAccountLabel:(id)arg1;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(void)setUserNameFieldEditable:(BOOL)arg1;
-(BOOL)userNameFieldEditable;
-(Class)widgetClass;
-(void)setWidgetClass:(Class)arg1;
-(CGPoint)widgetPosition;
-(long long)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(void)setSignInBarButton:(id)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setCancelBarButton:(id)arg1;

@end

