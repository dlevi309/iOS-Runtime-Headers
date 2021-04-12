/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIInputView.h>

@protocol WFVariableConfigurationAccessoryViewDelegate;
@class UIButton;

@interface WFVariableConfigurationAccessoryView : UIInputView {

	id<WFVariableConfigurationAccessoryViewDelegate> _delegate;
	unsigned long long _exitAccessory;
	UIButton* _keyboardButton;
	UIButton* _clearButton;
	UIButton* _renameButton;
	UIButton* _revealActionButton;
	UIButton* _doneButton;

}

@property (assign,nonatomic,__weak) UIButton * keyboardButton;                                              //@synthesize keyboardButton=_keyboardButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * clearButton;                                                 //@synthesize clearButton=_clearButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * renameButton;                                                //@synthesize renameButton=_renameButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * revealActionButton;                                          //@synthesize revealActionButton=_revealActionButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * doneButton;                                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableConfigurationAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canRename; 
@property (assign,nonatomic) BOOL canRevealAction; 
@property (assign,nonatomic) unsigned long long exitAccessory;                                              //@synthesize exitAccessory=_exitAccessory - In the implementation block
-(id<WFVariableConfigurationAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<WFVariableConfigurationAccessoryViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(UIButton *)clearButton;
-(void)donePressed;
-(void)setClearButton:(UIButton *)arg1 ;
-(void)setExitAccessory:(unsigned long long)arg1 ;
-(unsigned long long)exitAccessory;
-(void)clearPressed;
-(void)returnToKeyboardPressed;
-(void)renamePressed;
-(void)revealActionPressed;
-(BOOL)canRename;
-(void)setCanRename:(BOOL)arg1 ;
-(BOOL)canRevealAction;
-(void)setCanRevealAction:(BOOL)arg1 ;
-(UIButton *)keyboardButton;
-(void)setKeyboardButton:(UIButton *)arg1 ;
-(UIButton *)renameButton;
-(void)setRenameButton:(UIButton *)arg1 ;
-(UIButton *)revealActionButton;
-(void)setRevealActionButton:(UIButton *)arg1 ;
@end

