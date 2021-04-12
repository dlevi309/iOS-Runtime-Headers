/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/WFVariableConfigurationResponderDelegate.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>

@class WFVariable, WFVariableConfigurationResponder, NSString;

@interface WFVariableConfigurationButton : UIButton <WFVariableConfigurationResponderDelegate, WFVariableDelegate> {

	BOOL _showsVariableAccessoryActions;
	WFVariable* _variable;
	/*^block*/id _revealBlock;
	unsigned long long _resultType;
	WFVariableConfigurationResponder* _variableResponder;

}

@property (nonatomic,retain) WFVariableConfigurationResponder * variableResponder;              //@synthesize variableResponder=_variableResponder - In the implementation block
@property (nonatomic,retain) WFVariable * variable;                                             //@synthesize variable=_variable - In the implementation block
@property (nonatomic,copy) id revealBlock;                                                      //@synthesize revealBlock=_revealBlock - In the implementation block
@property (assign,nonatomic) BOOL showsVariableAccessoryActions;                                //@synthesize showsVariableAccessoryActions=_showsVariableAccessoryActions - In the implementation block
@property (assign,nonatomic) unsigned long long resultType;                                     //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleFont;
+(CGSize)sizeForVariable:(id)arg1 ;
-(void)dealloc;
-(WFVariable *)variable;
-(unsigned long long)resultType;
-(void)setVariable:(WFVariable *)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)variableDidChange:(id)arg1 ;
-(void)variableResponderDidBeginEditing:(id)arg1 ;
-(void)variableResponderDidEndEditing:(id)arg1 ;
-(BOOL)variableResponderHasText:(id)arg1 ;
-(void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2 ;
-(void)variableResponderDidRevealAction:(id)arg1 ;
-(void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2 ;
-(void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(/*^block*/id)arg4 commitHandler:(/*^block*/id)arg5 ;
-(void)buttonTapped;
-(void)setShowsVariableAccessoryActions:(BOOL)arg1 ;
-(void)updateVariableImage;
-(void)showVariableConfiguration;
-(void)hideVariableConfiguration;
-(id)revealBlock;
-(void)setRevealBlock:(id)arg1 ;
-(BOOL)showsVariableAccessoryActions;
-(WFVariableConfigurationResponder *)variableResponder;
-(void)setVariableResponder:(WFVariableConfigurationResponder *)arg1 ;
@end

