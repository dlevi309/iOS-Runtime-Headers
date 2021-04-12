/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VTUIEnrollTrainingViewDelegateSUICFlamesViewDelegate;
@class VTUIStyle, VTPreferences, UILabel, UIButton, UIView, SUICFlamesView, VTUITickMarkView, VTUIPagedLabel, SiriUIContentButton, NSLayoutConstraint;

@interface VTUIEnrollTrainingView : UIView {

	VTUIStyle* _vtStyle;
	VTPreferences* _vtPrefs;
	BOOL _flamesViewHidden;
	BOOL _skipButtonHidden;
	BOOL _endpointButtonEnabled;
	BOOL _tickMarkViewHidden;
	BOOL _radarButtonHidden;
	id<VTUIEnrollTrainingViewDelegate><SUICFlamesViewDelegate> _delegate;
	long long _flamesViewState;
	UILabel* _statusLabel;
	UIButton* _radarExitButton;
	UIView* _flamesContainerView;
	SUICFlamesView* _flamesView;
	UIButton* _skipButton;
	UIButton* _endpointButton;
	VTUITickMarkView* _tickMark;
	VTUIPagedLabel* _instructionPagedLabel;
	UIView* _containerView;
	UILabel* _pageLabel;
	SiriUIContentButton* _radarButton;
	NSLayoutConstraint* _flamesContainerViewTopConstraint;
	NSLayoutConstraint* _flamesContainerViewHeightConstraint;
	NSLayoutConstraint* _skipButtonBottomConstraint;

}

@property (nonatomic,retain) UIView * flamesContainerView;                                                            //@synthesize flamesContainerView=_flamesContainerView - In the implementation block
@property (nonatomic,retain) SUICFlamesView * flamesView;                                                             //@synthesize flamesView=_flamesView - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                                                   //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) UIButton * endpointButton;                                                               //@synthesize endpointButton=_endpointButton - In the implementation block
@property (nonatomic,retain) VTUITickMarkView * tickMark;                                                             //@synthesize tickMark=_tickMark - In the implementation block
@property (nonatomic,retain) VTUIPagedLabel * instructionPagedLabel;                                                  //@synthesize instructionPagedLabel=_instructionPagedLabel - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * pageLabel;                                                                     //@synthesize pageLabel=_pageLabel - In the implementation block
@property (nonatomic,retain) SiriUIContentButton * radarButton;                                                       //@synthesize radarButton=_radarButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * flamesContainerViewTopConstraint;                                   //@synthesize flamesContainerViewTopConstraint=_flamesContainerViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * flamesContainerViewHeightConstraint;                                //@synthesize flamesContainerViewHeightConstraint=_flamesContainerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * skipButtonBottomConstraint;                                         //@synthesize skipButtonBottomConstraint=_skipButtonBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<VTUIEnrollTrainingViewDelegate><SUICFlamesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long flamesViewState;                                                               //@synthesize flamesViewState=_flamesViewState - In the implementation block
@property (assign,nonatomic) BOOL flamesViewHidden;                                                                   //@synthesize flamesViewHidden=_flamesViewHidden - In the implementation block
@property (assign,nonatomic) BOOL skipButtonHidden;                                                                   //@synthesize skipButtonHidden=_skipButtonHidden - In the implementation block
@property (assign,nonatomic) BOOL endpointButtonEnabled;                                                              //@synthesize endpointButtonEnabled=_endpointButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL tickMarkViewHidden;                                                                 //@synthesize tickMarkViewHidden=_tickMarkViewHidden - In the implementation block
@property (assign,nonatomic) BOOL radarButtonHidden;                                                                  //@synthesize radarButtonHidden=_radarButtonHidden - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                                                                 //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIButton * radarExitButton;                                                            //@synthesize radarExitButton=_radarExitButton - In the implementation block
-(id<VTUIEnrollTrainingViewDelegate><SUICFlamesViewDelegate>)delegate;
-(void)setDelegate:(id<VTUIEnrollTrainingViewDelegate><SUICFlamesViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)updateConstraints;
-(UIButton *)endpointButton;
-(UILabel *)statusLabel;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(UIView *)flamesContainerView;
-(UILabel *)pageLabel;
-(void)setPageLabel:(UILabel *)arg1 ;
-(void)clearInstructionLabel;
-(void)setFlamesViewHidden:(BOOL)arg1 ;
-(void)setTickMarkViewHidden:(BOOL)arg1 ;
-(void)startTickMarkAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSkipButtonHidden:(BOOL)arg1 ;
-(void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFlamesViewState:(long long)arg1 ;
-(void)setEndpointButtonEnabled:(BOOL)arg1 ;
-(void)showRadarExitButton:(id)arg1 ;
-(UIButton *)radarExitButton;
-(void)setRadarButtonHidden:(BOOL)arg1 ;
-(SUICFlamesView *)flamesView;
-(VTUIPagedLabel *)instructionPagedLabel;
-(VTUITickMarkView *)tickMark;
-(void)_setupViews:(id)arg1 vtPrefs:(id)arg2 ;
-(BOOL)_shouldShowRadarButton;
-(id)_siriUIDebugBundle;
-(NSLayoutConstraint *)flamesContainerViewTopConstraint;
-(NSLayoutConstraint *)flamesContainerViewHeightConstraint;
-(NSLayoutConstraint *)skipButtonBottomConstraint;
-(long long)flamesViewState;
-(BOOL)flamesViewHidden;
-(BOOL)skipButtonHidden;
-(BOOL)endpointButtonEnabled;
-(BOOL)tickMarkViewHidden;
-(BOOL)radarButtonHidden;
-(void)setFlamesContainerView:(UIView *)arg1 ;
-(void)setFlamesView:(SUICFlamesView *)arg1 ;
-(void)setEndpointButton:(UIButton *)arg1 ;
-(void)setTickMark:(VTUITickMarkView *)arg1 ;
-(void)setInstructionPagedLabel:(VTUIPagedLabel *)arg1 ;
-(SiriUIContentButton *)radarButton;
-(void)setRadarButton:(SiriUIContentButton *)arg1 ;
-(void)setFlamesContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFlamesContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSkipButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

