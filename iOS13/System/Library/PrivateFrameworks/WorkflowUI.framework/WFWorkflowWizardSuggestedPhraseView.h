/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<WFWorkflowWizardSuggestedPhraseViewDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowWizardSuggestedPhraseViewDelegate>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(CGSize)intrinsicContentSize;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)unhighlight;
-(void)highlight;
-(NSString *)suggestedPhrase;
-(id)initWithSuggestedPhrase:(id)arg1 ;
-(void)fadeOutHighlight;
@end

