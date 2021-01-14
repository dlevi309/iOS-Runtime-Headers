/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFWorkflowWizardSuggestedPhraseViewDelegate;
@class NSString, UILabel;

@interface WFWorkflowWizardSuggestedPhraseView : UIView {

	id<WFWorkflowWizardSuggestedPhraseViewDelegate> _delegate;
	NSString* _suggestedPhrase;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) UILabel * label;                                                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowWizardSuggestedPhraseViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestedPhrase;                                            //@synthesize suggestedPhrase=_suggestedPhrase - In the implementation block
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(id<WFWorkflowWizardSuggestedPhraseViewDelegate>)delegate;
-(void)highlight;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<WFWorkflowWizardSuggestedPhraseViewDelegate>)arg1 ;
-(void)unhighlight;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)suggestedPhrase;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)fadeOutHighlight;
-(id)initWithSuggestedPhrase:(id)arg1 ;
@end

