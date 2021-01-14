/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXSurveyQuestionCongratulationsGadgetContentViewDelegate, CKFullscreenEffectView;
@class UILabel, PXCapsuleButton, PXRoundedCornerOverlayView, UISelectionFeedbackGenerator, UIImpactFeedbackGenerator;

@interface PXSurveyQuestionsCongratulationsGadgetContentView : UIView {

	id<PXSurveyQuestionCongratulationsGadgetContentViewDelegate> _delegate;
	UILabel* _congratulationsLabel;
	UILabel* _messageLabel;
	PXCapsuleButton* _actionButton;
	PXRoundedCornerOverlayView* _roundedOverlayView;
	id<CKFullscreenEffectView> _effectView;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;

}

@property (nonatomic,readonly) UILabel * congratulationsLabel;                                                          //@synthesize congratulationsLabel=_congratulationsLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                                                                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) PXCapsuleButton * actionButton;                                                          //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) PXRoundedCornerOverlayView * roundedOverlayView;                                         //@synthesize roundedOverlayView=_roundedOverlayView - In the implementation block
@property (nonatomic,readonly) id<CKFullscreenEffectView> effectView;                                                   //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,readonly) UISelectionFeedbackGenerator * selectionFeedbackGenerator;                               //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) UIImpactFeedbackGenerator * impactFeedbackGenerator;                                     //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<PXSurveyQuestionCongratulationsGadgetContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CKFullscreenEffectView>)effectView;
-(id<PXSurveyQuestionCongratulationsGadgetContentViewDelegate>)delegate;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(id)initWithDetailMessage:(id)arg1 buttonTitle:(id)arg2 ;
-(void)_didSelectActionButton;
-(void)startConfettiAnimation;
-(UILabel *)congratulationsLabel;
-(PXRoundedCornerOverlayView *)roundedOverlayView;
-(UILabel *)messageLabel;
-(void)setDelegate:(id<PXSurveyQuestionCongratulationsGadgetContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(PXCapsuleButton *)actionButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

