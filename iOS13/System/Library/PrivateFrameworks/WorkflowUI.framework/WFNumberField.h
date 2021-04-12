/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class WFTextTokenTextField, NSString, NSSet;

@interface WFNumberField : UIView <UITextFieldDelegate> {

	BOOL _allowsDecimalNumbers;
	BOOL _allowsNegatingNumbers;
	/*^block*/id _doneBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	WFTextTokenTextField* _textField;

}

@property (assign,nonatomic,__weak) WFTextTokenTextField * textField;                         //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL allowsDecimalNumbers;                                       //@synthesize allowsDecimalNumbers=_allowsDecimalNumbers - In the implementation block
@property (assign,nonatomic) BOOL allowsNegatingNumbers;                                      //@synthesize allowsNegatingNumbers=_allowsNegatingNumbers - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider; 
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate; 
@property (nonatomic,copy) NSSet * allowedVariableTypes; 
@property (nonatomic,copy) id doneBlock;                                                      //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                  //@synthesize variableBlock=_variableBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(WFTextTokenTextField *)textField;
-(BOOL)becomeFirstResponder;
-(NSString *)placeholder;
-(void)setEditable:(BOOL)arg1 ;
-(long long)textAlignment;
-(BOOL)isEditable;
-(void)textDidChange;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setTextField:(WFTextTokenTextField *)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)allowsDecimalNumbers;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(id)variableBlock;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setVariableBlock:(id)arg1 ;
-(void)negateText;
-(void)setAllowsDecimalNumbers:(BOOL)arg1 ;
-(void)setAllowsNegatingNumbers:(BOOL)arg1 ;
-(BOOL)allowsNegatingNumbers;
-(id)doneBlock;
-(void)setDoneBlock:(id)arg1 ;
@end

