/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

@class NSString, UITextInputPasswordRules;


@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@optional
-(long long)autocapitalizationType;
-(long long)smartInsertDeleteType;
-(void)setTextContentType:(id)arg1;
-(void)setKeyboardAppearance:(long long)arg1;
-(void)setSpellCheckingType:(long long)arg1;
-(long long)keyboardType;
-(void)setReturnKeyType:(long long)arg1;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setSmartDashesType:(long long)arg1;
-(long long)spellCheckingType;
-(long long)returnKeyType;
-(void)setAutocorrectionType:(long long)arg1;
-(long long)smartDashesType;
-(void)setSmartQuotesType:(long long)arg1;
-(void)setSecureTextEntry:(BOOL)arg1;
-(long long)autocorrectionType;
-(void)setSmartInsertDeleteType:(long long)arg1;
-(long long)keyboardAppearance;
-(void)setKeyboardType:(long long)arg1;
-(void)setAutocapitalizationType:(long long)arg1;
-(long long)smartQuotesType;
-(NSString *)textContentType;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
-(BOOL)isSecureTextEntry;
-(UITextInputPasswordRules *)passwordRules;
-(void)setPasswordRules:(id)arg1;

@end

