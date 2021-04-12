/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

@class NSSet, NSString, NSAttributedString, UIFont, UIColor;


@protocol WFTextField <NSObject>
@property (assign,nonatomic) BOOL variablesDisabled; 
@property (nonatomic,copy) NSSet * allowedVariableTypes; 
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider; 
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) unsigned long long syntaxHighlightingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@required
-(BOOL)isEditable;
-(long long)autocapitalizationType;
-(void)setTextContentType:(id)arg1;
-(void)setKeyboardAppearance:(long long)arg1;
-(long long)keyboardType;
-(void)setSmartDashesType:(long long)arg1;
-(NSAttributedString *)attributedText;
-(void)setAutocorrectionType:(long long)arg1;
-(long long)smartDashesType;
-(UIColor *)textColor;
-(void)setSmartQuotesType:(long long)arg1;
-(void)setSecureTextEntry:(BOOL)arg1;
-(long long)autocorrectionType;
-(void)setAttributedText:(id)arg1;
-(long long)keyboardAppearance;
-(void)setKeyboardType:(long long)arg1;
-(void)setAutocapitalizationType:(long long)arg1;
-(long long)smartQuotesType;
-(NSString *)textContentType;
-(void)setFont:(id)arg1;
-(void)setText:(id)arg1;
-(BOOL)isSecureTextEntry;
-(void)setBackgroundColor:(id)arg1;
-(long long)textAlignment;
-(UIColor *)backgroundColor;
-(void)setTextColor:(id)arg1;
-(void)setPlaceholder:(id)arg1;
-(NSString *)text;
-(void)setEditable:(BOOL)arg1;
-(NSString *)placeholder;
-(void)setTextAlignment:(long long)arg1;
-(UIFont *)font;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id)arg1;
-(void)setAllowedVariableTypes:(id)arg1;
-(void)setVariableUIDelegate:(id)arg1;
-(void)setVariablesDisabled:(BOOL)arg1;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1;

@end

