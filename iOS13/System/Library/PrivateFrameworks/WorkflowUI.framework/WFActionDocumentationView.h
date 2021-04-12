/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>

@protocol WFActionDocumentationViewDelegate;
@class WFAction, WFActionDrawerButton, UIStackView, UITextView;

@interface WFActionDocumentationView : UIView {

	id<WFActionDocumentationViewDelegate> _delegate;
	WFAction* _action;
	WFActionDrawerButton* _favoriteButton;
	WFActionDrawerButton* _addToWorkflowButton;
	UIStackView* _buttonStackView;
	UITextView* _descriptionView;

}

@property (nonatomic,retain) WFAction * action;                                                  //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) WFActionDrawerButton * favoriteButton;                       //@synthesize favoriteButton=_favoriteButton - In the implementation block
@property (assign,nonatomic,__weak) WFActionDrawerButton * addToWorkflowButton;                  //@synthesize addToWorkflowButton=_addToWorkflowButton - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * buttonStackView;                               //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (assign,nonatomic,__weak) UITextView * descriptionView;                                //@synthesize descriptionView=_descriptionView - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDocumentationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFActionDocumentationViewDelegate>)delegate;
-(void)setDelegate:(id<WFActionDocumentationViewDelegate>)arg1 ;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)setDescriptionView:(UITextView *)arg1 ;
-(UITextView *)descriptionView;
-(void)updateButtonVisibility;
-(void)configureWithAction:(id)arg1 ;
-(void)didSelectFavorite;
-(void)didSelectAddToThisWorkflow;
-(void)updateFavoriteButton;
-(WFActionDrawerButton *)favoriteButton;
-(void)setFavoriteButton:(WFActionDrawerButton *)arg1 ;
-(WFActionDrawerButton *)addToWorkflowButton;
-(void)setAddToWorkflowButton:(WFActionDrawerButton *)arg1 ;
@end

