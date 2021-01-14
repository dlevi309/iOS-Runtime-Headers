/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/WFVariableConfigurationResponderDelegate.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>

@protocol WFVariableUIDelegate;
@class WFVariable, WFVariableConfigurationResponder, NSString;

@interface WFVariableConfigurationButton : UIButton <WFVariableConfigurationResponderDelegate, WFVariableDelegate> {

	BOOL _showsVariableAccessoryActions;
	WFVariable* _variable;
	id<WFVariableUIDelegate> _variableUIDelegate;
	unsigned long long _resultType;
	WFVariableConfigurationResponder* _variableResponder;

}

@property (nonatomic,retain) WFVariableConfigurationResponder * variableResponder;              //@synthesize variableResponder=_variableResponder - In the implementation block
@property (nonatomic,retain) WFVariable * variable;                                             //@synthesize variable=_variable - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsVariableAccessoryActions;                                //@synthesize showsVariableAccessoryActions=_showsVariableAccessoryActions - In the implementation block
@property (assign,nonatomic) unsigned long long resultType;                                     //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleFont;
+(CGSize)sizeForVariable:(id)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)resultType;
-(void)setVariable:(WFVariable *)arg1 ;
-(WFVariable *)variable;
-(void)dealloc;
-(void)variableDidChange:(id)arg1 ;
-(void)hideVariableConfiguration;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(void)setShowsVariableAccessoryActions:(BOOL)arg1 ;
-(void)variableResponderDidBeginEditing:(id)arg1 ;
-(void)variableResponderDidEndEditing:(id)arg1 ;
-(BOOL)variableResponderHasText:(id)arg1 ;
-(void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2 ;
-(void)variableResponderDidRevealAction:(id)arg1 ;
-(void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2 ;
-(void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(/*^block*/id)arg4 commitHandler:(/*^block*/id)arg5 ;
-(WFVariableConfigurationResponder *)variableResponder;
-(void)setVariableResponder:(WFVariableConfigurationResponder *)arg1 ;
-(void)buttonTapped;
-(void)updateVariableImage;
-(void)showVariableConfiguration;
-(BOOL)showsVariableAccessoryActions;
@end

