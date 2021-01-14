/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol PXSurveyQuestionConfiguration, PXSurveyQuestionsGadgetContentViewDelegate;
@class UILabel, PXCapsuleButton, UISelectionFeedbackGenerator;

@interface PXSurveyQuestionsGadgetContentView : UICollectionViewCell {

	BOOL _contentHidden;
	BOOL _isInvalid;
	id<PXSurveyQuestionConfiguration> _configuration;
	id<PXSurveyQuestionsGadgetContentViewDelegate> _delegate;
	UILabel* _titleLabel;
	PXCapsuleButton* _yesButton;
	PXCapsuleButton* _noButton;
	PXCapsuleButton* _skipButton;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	CGRect _contentRect;

}

@property (assign,nonatomic) BOOL isInvalid;                                                              //@synthesize isInvalid=_isInvalid - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) PXCapsuleButton * yesButton;                                                 //@synthesize yesButton=_yesButton - In the implementation block
@property (nonatomic,retain) PXCapsuleButton * noButton;                                                  //@synthesize noButton=_noButton - In the implementation block
@property (nonatomic,retain) PXCapsuleButton * skipButton;                                                //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,readonly) UISelectionFeedbackGenerator * selectionFeedbackGenerator;                 //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,retain) id<PXSurveyQuestionConfiguration> configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<PXSurveyQuestionsGadgetContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect contentRect;                                                        //@synthesize contentRect=_contentRect - In the implementation block
@property (assign,nonatomic) BOOL contentHidden;                                                          //@synthesize contentHidden=_contentHidden - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setIsInvalid:(BOOL)arg1 ;
-(BOOL)isInvalid;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)contentRect;
-(id<PXSurveyQuestionsGadgetContentViewDelegate>)delegate;
-(PXCapsuleButton *)noButton;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(void)setDelegate:(id<PXSurveyQuestionsGadgetContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PXSurveyQuestionConfiguration>)configuration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_calculateLayoutWithInputSize:(CGSize)arg1 apply:(BOOL)arg2 ;
-(void)setYesButton:(PXCapsuleButton *)arg1 ;
-(void)setNoButton:(PXCapsuleButton *)arg1 ;
-(CGRect)contentBoundsInCoordinateSpace:(id)arg1 ;
-(PXCapsuleButton *)yesButton;
-(PXCapsuleButton *)skipButton;
-(void)updateButtonsWithAnswerState:(unsigned long long)arg1 ;
-(CGRect)_contentFrameInBounds:(CGRect)arg1 ;
-(id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 buttonColor:(id)arg3 titleColor:(id)arg4 ;
-(void)_didAnswerYes;
-(void)_didAnswerNo;
-(void)_didAnswerSkip;
-(void)_didAnswer:(unsigned long long)arg1 ;
-(void)_askForAdditionalReasonForAnswer:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)contentHidden;
-(void)setSkipButton:(PXCapsuleButton *)arg1 ;
-(void)setConfiguration:(id<PXSurveyQuestionConfiguration>)arg1 ;
@end

