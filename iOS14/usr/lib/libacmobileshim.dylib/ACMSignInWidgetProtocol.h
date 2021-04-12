/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)position;
-(id<ACMSignInWidgetDelegate>)delegate;
-(void)setBackgroundColor:(id)arg1;
-(UITextField *)passwordField;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)setPosition:(CGPoint)arg1;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(id)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(NSDictionary *)placeholderAttributes;
-(void)disableControls:(BOOL)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setPlaceholderAttributes:(id)arg1;

@end

