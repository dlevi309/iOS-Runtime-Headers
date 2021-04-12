/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFWorkflowWizardSuggestedPhraseViewDelegate.h>

@protocol WFWorkflowWizardNameSuggestionCellDelegate;
@class NSArray, UIStackView, UILabel, NSString;

@interface WFWorkflowWizardNameSuggestionCell : UITableViewCell <WFWorkflowWizardSuggestedPhraseViewDelegate> {

	id<WFWorkflowWizardNameSuggestionCellDelegate> _delegate;
	NSArray* _suggestedPhrases;
	UIStackView* _stackView;
	UILabel* _infoLabel;
	NSArray* _suggestionsViews;

}

@property (nonatomic,retain) UIStackView * stackView;                                                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                         //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) NSArray * suggestionsViews;                                                  //@synthesize suggestionsViews=_suggestionsViews - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowWizardNameSuggestionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * infoText; 
@property (nonatomic,copy) NSArray * suggestedPhrases;                                                    //@synthesize suggestedPhrases=_suggestedPhrases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionsFont;
+(id)suggestionsText;
+(double)preferredHeightForWidth:(double)arg1 infoText:(id)arg2 suggestedPhrases:(id)arg3 ;
+(id)infoFont;
-(void)setInfoText:(NSString *)arg1 ;
-(id<WFWorkflowWizardNameSuggestionCellDelegate>)delegate;
-(UIStackView *)stackView;
-(void)setDelegate:(id<WFWorkflowWizardNameSuggestionCellDelegate>)arg1 ;
-(UILabel *)infoLabel;
-(NSString *)infoText;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)suggestedPhrases;
-(void)workflowWizardSuggestedPhraseViewDidSelectSuggestedPhrase:(id)arg1 ;
-(void)setSuggestedPhrases:(NSArray *)arg1 ;
-(NSArray *)suggestionsViews;
-(void)setSuggestionsViews:(NSArray *)arg1 ;
@end

