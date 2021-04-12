/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class NSSet, NSString, NSAttributedString, UIFont, UIColor;


@protocol WFTextField <UITextInput>
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
@required
-(NSString *)text;
-(void)setText:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)setTextColor:(id)arg1;
-(void)setFont:(id)arg1;
-(void)setTextAlignment:(long long)arg1;
-(UIFont *)font;
-(void)setPlaceholder:(id)arg1;
-(void)setAttributedText:(id)arg1;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(void)setTextContentType:(id)arg1;
-(NSString *)placeholder;
-(NSString *)textContentType;
-(void)setEditable:(BOOL)arg1;
-(long long)textAlignment;
-(BOOL)isEditable;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id)arg1;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariablesDisabled:(BOOL)arg1;
-(void)setAllowedVariableTypes:(id)arg1;
-(void)setVariableUIDelegate:(id)arg1;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1;

@end

