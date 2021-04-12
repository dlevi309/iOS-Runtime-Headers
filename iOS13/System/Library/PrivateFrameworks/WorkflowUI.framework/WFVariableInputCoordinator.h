/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/WFVariableShortcutsBarDelegate.h>
#import <libobjc.A.dylib/WFVariableShortcutsTrayDelegate.h>
#import <libobjc.A.dylib/WFVariableSuggesterDelegate.h>
#import <libobjc.A.dylib/WFVariableObserver.h>

@protocol WFInputViewMutable, WFVariableTypingContext, WFVariableProvider, WFVariableUIDelegate;
@class UIResponder, NSSet, NSString, UIView, UIColor, WFVariableShortcutsBar, WFVariableShortcutsTray, WFVariableSuggester;

@interface WFVariableInputCoordinator : NSObject <WFVariableShortcutsBarDelegate, WFVariableShortcutsTrayDelegate, WFVariableSuggesterDelegate, WFVariableObserver> {

	BOOL _showsDoneButton;
	BOOL _undocked;
	UIResponder*<WFInputViewMutable> _responder;
	id<WFVariableTypingContext> _variableTypingContext;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	NSString* _customButtonTitle;
	UIView* _inputViewWhenTrayCollapsed;
	UIColor* _tintColor;
	/*^block*/id _variableBlock;
	/*^block*/id _customButtonBlock;
	WFVariableShortcutsBar* _shortcutsBar;
	WFVariableShortcutsTray* _shortcutsTray;
	WFVariableSuggester* _variableSuggester;
	CGRect _previousFrame;

}

@property (nonatomic,retain) WFVariableShortcutsBar * shortcutsBar;                                 //@synthesize shortcutsBar=_shortcutsBar - In the implementation block
@property (nonatomic,retain) WFVariableShortcutsTray * shortcutsTray;                               //@synthesize shortcutsTray=_shortcutsTray - In the implementation block
@property (nonatomic,retain) WFVariableSuggester * variableSuggester;                               //@synthesize variableSuggester=_variableSuggester - In the implementation block
@property (assign,nonatomic) BOOL undocked;                                                         //@synthesize undocked=_undocked - In the implementation block
@property (assign,nonatomic) CGRect previousFrame;                                                  //@synthesize previousFrame=_previousFrame - In the implementation block
@property (assign,nonatomic,__weak) UIResponder*<WFInputViewMutable> responder;                     //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableTypingContext> variableTypingContext;              //@synthesize variableTypingContext=_variableTypingContext - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                        //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                    //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                            //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                  //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (nonatomic,copy) NSString * customButtonTitle;                                            //@synthesize customButtonTitle=_customButtonTitle - In the implementation block
@property (assign,nonatomic,__weak) UIView * inputViewWhenTrayCollapsed;                            //@synthesize inputViewWhenTrayCollapsed=_inputViewWhenTrayCollapsed - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                   //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                        //@synthesize variableBlock=_variableBlock - In the implementation block
@property (nonatomic,copy) id customButtonBlock;                                                    //@synthesize customButtonBlock=_customButtonBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIResponder*<WFInputViewMutable>)responder;
-(void)setResponder:(UIResponder*<WFInputViewMutable>)arg1 ;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)setCustomButtonTitle:(NSString *)arg1 ;
-(NSString *)customButtonTitle;
-(id<WFVariableProvider>)variableProvider;
-(void)availableVariablesDidChange;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)variableSuggesterSuggestionsDidChange:(id)arg1 ;
-(CGRect)previousFrame;
-(void)setPreviousFrame:(CGRect)arg1 ;
-(id)variableBlock;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setVariableBlock:(id)arg1 ;
-(BOOL)showsUserDefinedVariables;
-(id)specialVariables;
-(void)variableShortcutsTray:(id)arg1 didSelectVariable:(id)arg2 ;
-(void)variableShortcutsTrayDidSelectMagicVariable:(id)arg1 ;
-(void)shortcutsBarDidDismiss:(id)arg1 ;
-(void)shortcutsBarDidOpenTray:(id)arg1 ;
-(void)shortcutsBar:(id)arg1 didSelectVariable:(id)arg2 ;
-(void)shortcutsBarDidSelectMagicVariable:(id)arg1 ;
-(void)shortcutsBarDidSelectCustomButton:(id)arg1 ;
-(BOOL)showsMagicVariables;
-(WFVariableShortcutsBar *)shortcutsBar;
-(WFVariableShortcutsTray *)shortcutsTray;
-(void)updateInputViews;
-(void)revealTray;
-(void)collapseTrayAnimated:(BOOL)arg1 ;
-(void)showActionOutputPicker;
-(void)reloadCurrentVariables;
-(id<WFVariableTypingContext>)variableTypingContext;
-(void)setVariableTypingContext:(id<WFVariableTypingContext>)arg1 ;
-(UIView *)inputViewWhenTrayCollapsed;
-(void)setInputViewWhenTrayCollapsed:(UIView *)arg1 ;
-(id)customButtonBlock;
-(void)setCustomButtonBlock:(id)arg1 ;
-(void)setShortcutsBar:(WFVariableShortcutsBar *)arg1 ;
-(void)setShortcutsTray:(WFVariableShortcutsTray *)arg1 ;
-(WFVariableSuggester *)variableSuggester;
-(void)setVariableSuggester:(WFVariableSuggester *)arg1 ;
-(BOOL)undocked;
-(void)setUndocked:(BOOL)arg1 ;
@end

