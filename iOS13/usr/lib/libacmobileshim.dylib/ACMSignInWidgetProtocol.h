/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class UIView, UITextField, NSString, UIColor, NSDictionary;


@protocol ACMSignInWidgetProtocol <NSObject>
@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UITextField * accountField; 
@property (nonatomic,readonly) UITextField * passwordField; 
@property (nonatomic,retain) NSString * accountLabelText; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSDictionary * placeholderAttributes; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint position; 
@required
-(id<ACMSignInWidgetDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1;
-(UIView *)view;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(UITextField *)passwordField;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(id)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(NSDictionary *)placeholderAttributes;
-(void)disableControls:(BOOL)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setPlaceholderAttributes:(id)arg1;

@end

