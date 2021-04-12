/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIView.h>

@protocol WFOverlayImageEditorOptionsViewDelegate;
@class UIButton, WFOverlayImageEditorOptionButton, UIView, UILabel;

@interface WFOverlayImageEditorOptionsView : UIView {

	UIButton* _cancelButton;
	UIButton* _nextButton;
	id<WFOverlayImageEditorOptionsViewDelegate> _delegate;
	WFOverlayImageEditorOptionButton* _rotationButton;
	WFOverlayImageEditorOptionButton* _resetButton;
	WFOverlayImageEditorOptionButton* _opacityButton;
	UIView* _topBorder;
	UILabel* _nextLabel;

}

@property (nonatomic,__weak,readonly) WFOverlayImageEditorOptionButton * rotationButton;               //@synthesize rotationButton=_rotationButton - In the implementation block
@property (nonatomic,__weak,readonly) WFOverlayImageEditorOptionButton * resetButton;                  //@synthesize resetButton=_resetButton - In the implementation block
@property (nonatomic,__weak,readonly) WFOverlayImageEditorOptionButton * opacityButton;                //@synthesize opacityButton=_opacityButton - In the implementation block
@property (nonatomic,__weak,readonly) UIView * topBorder;                                              //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * nextLabel;                                             //@synthesize nextLabel=_nextLabel - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * cancelButton;                                         //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * nextButton;                                           //@synthesize nextButton=_nextButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFOverlayImageEditorOptionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFOverlayImageEditorOptionsViewDelegate>)delegate;
-(void)setDelegate:(id<WFOverlayImageEditorOptionsViewDelegate>)arg1 ;
-(UIButton *)cancelButton;
-(UIButton *)nextButton;
-(WFOverlayImageEditorOptionButton *)resetButton;
-(UIView *)topBorder;
-(void)didTapResetButton;
-(void)didTapRotationButton;
-(void)didTapOpacityButton;
-(void)didTapCancelButton;
-(void)didTapNextButton;
-(WFOverlayImageEditorOptionButton *)rotationButton;
-(WFOverlayImageEditorOptionButton *)opacityButton;
-(UILabel *)nextLabel;
@end

