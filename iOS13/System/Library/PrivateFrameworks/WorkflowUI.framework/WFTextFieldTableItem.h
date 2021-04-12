/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCustomTableItem.h>

@class NSString, UITextField;

@interface WFTextFieldTableItem : WFCustomTableItem {

	BOOL _becomeFirstResponderOnNextConfigure;
	NSString* _primaryText;
	/*^block*/id _textFieldSetup;
	UITextField* _lastConfiguredTextField;

}

@property (nonatomic,readonly) id textFieldSetup;                                       //@synthesize textFieldSetup=_textFieldSetup - In the implementation block
@property (assign,nonatomic,__weak) UITextField * lastConfiguredTextField;              //@synthesize lastConfiguredTextField=_lastConfiguredTextField - In the implementation block
@property (assign,nonatomic) BOOL becomeFirstResponderOnNextConfigure;                  //@synthesize becomeFirstResponderOnNextConfigure=_becomeFirstResponderOnNextConfigure - In the implementation block
@property (nonatomic,readonly) NSString * primaryText;                                  //@synthesize primaryText=_primaryText - In the implementation block
+(id)itemWithPrimaryText:(id)arg1 initialValue:(id)arg2 textFieldSetup:(/*^block*/id)arg3 ;
-(void)activate;
-(NSString *)primaryText;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)configureCell:(id)arg1 ;
-(void)activateNextItemIfPossible;
-(id)textFieldSetup;
-(UITextField *)lastConfiguredTextField;
-(void)setLastConfiguredTextField:(UITextField *)arg1 ;
-(BOOL)becomeFirstResponderOnNextConfigure;
-(void)setBecomeFirstResponderOnNextConfigure:(BOOL)arg1 ;
@end

