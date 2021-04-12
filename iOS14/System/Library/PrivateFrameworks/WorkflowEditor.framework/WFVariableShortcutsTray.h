/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIInputView.h>
#import <libobjc.A.dylib/WFVariablesViewControllerDelegate.h>

@protocol WFVariableShortcutsTrayDelegate;
@class WFVariablesViewController, UIImageView, NSArray, NSString;

@interface WFVariableShortcutsTray : UIInputView <WFVariablesViewControllerDelegate> {

	id<WFVariableShortcutsTrayDelegate> _delegate;
	WFVariablesViewController* _variablesViewController;
	WFVariablesViewController* _specialVariablesViewController;
	UIImageView* _keyboardImageView;

}

@property (nonatomic,retain) WFVariablesViewController * variablesViewController;                     //@synthesize variablesViewController=_variablesViewController - In the implementation block
@property (nonatomic,retain) WFVariablesViewController * specialVariablesViewController;              //@synthesize specialVariablesViewController=_specialVariablesViewController - In the implementation block
@property (nonatomic,retain) UIImageView * keyboardImageView;                                         //@synthesize keyboardImageView=_keyboardImageView - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableShortcutsTrayDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider; 
@property (assign,nonatomic) BOOL showsUserDefinedVariables; 
@property (assign,nonatomic) BOOL showsMagicVariableButton; 
@property (nonatomic,copy) NSArray * userDefinedVariableNames; 
@property (nonatomic,copy) NSArray * specialVariables; 
@property (nonatomic,copy) NSArray * suggestedVariables; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFVariableShortcutsTrayDelegate>)delegate;
-(void)reveal;
-(void)setDelegate:(id<WFVariableShortcutsTrayDelegate>)arg1 ;
-(id)keyboardWindow;
-(id)initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2 ;
-(id<WFVariableProvider>)variableProvider;
-(void)setSuggestedVariables:(NSArray *)arg1 ;
-(void)setUserDefinedVariableNames:(NSArray *)arg1 ;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(NSArray *)suggestedVariables;
-(NSArray *)userDefinedVariableNames;
-(BOOL)showsUserDefinedVariables;
-(NSArray *)specialVariables;
-(void)setShowsMagicVariableButton:(BOOL)arg1 ;
-(void)obsureWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareReveal;
-(void)setShowsUserDefinedVariables:(BOOL)arg1 ;
-(void)setSpecialVariables:(NSArray *)arg1 ;
-(BOOL)showsMagicVariableButton;
-(void)variablesViewController:(id)arg1 didSelectVariable:(id)arg2 ;
-(void)variablesViewControllerDidSelectMagicVariable:(id)arg1 ;
-(WFVariablesViewController *)variablesViewController;
-(void)setVariablesViewController:(WFVariablesViewController *)arg1 ;
-(WFVariablesViewController *)specialVariablesViewController;
-(void)setSpecialVariablesViewController:(WFVariablesViewController *)arg1 ;
-(UIImageView *)keyboardImageView;
-(void)setKeyboardImageView:(UIImageView *)arg1 ;
@end

