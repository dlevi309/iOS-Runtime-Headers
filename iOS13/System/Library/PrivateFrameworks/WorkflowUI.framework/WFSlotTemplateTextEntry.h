/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class UIFont, UIView;


@protocol WFSlotTemplateTextEntry <WFInputViewMutable,WFInputHintProvider,UITextInput>
@property (assign,nonatomic) BOOL clearsZeroWhenTyping; 
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,retain) UIView * inputHintView; 
@required
-(UIFont *)font;
-(void)insertAttributedText:(id)arg1;
-(UIView *)inputHintView;
-(BOOL)clearsZeroWhenTyping;
-(void)setClearsZeroWhenTyping:(BOOL)arg1;
-(void)setInputHintView:(id)arg1;

@end

