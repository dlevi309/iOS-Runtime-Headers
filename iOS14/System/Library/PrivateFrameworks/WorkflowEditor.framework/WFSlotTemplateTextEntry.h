/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

@class UIFont, UIView;


@protocol WFSlotTemplateTextEntry <WFInputViewMutable,WFInputHintProvider,UITextInput>
@property (assign,nonatomic) BOOL clearsZeroWhenTyping; 
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,retain) UIView * inputHintView; 
@required
-(void)insertAttributedText:(id)arg1;
-(UIFont *)font;
-(void)setInputHintView:(id)arg1;
-(BOOL)clearsZeroWhenTyping;
-(void)setClearsZeroWhenTyping:(BOOL)arg1;
-(UIView *)inputHintView;

@end

