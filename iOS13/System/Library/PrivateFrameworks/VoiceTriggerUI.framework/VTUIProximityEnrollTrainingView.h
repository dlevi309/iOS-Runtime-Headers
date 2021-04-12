/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class VTUIStyle, VTPreferences, UIButton, VTUITickMarkView, VTUIPagedLabel, UIView, UILabel, SUICFlamesView, NSArray;

@interface VTUIProximityEnrollTrainingView : VTUIProximityView {

	VTUIStyle* _vtStyle;
	VTPreferences* _vtPrefs;
	UIButton* _endpointButton;
	UIButton* _skipButton;
	UIButton* _dismissButton;
	VTUITickMarkView* _tickMark;
	VTUIPagedLabel* _instructionPagedLabel;
	UIView* _containerView;
	UIView* _flamesContainerView;
	UILabel* _statusLabel;
	UILabel* _pageLabel;
	SUICFlamesView* _flamesView;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                           //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,retain) UIButton * endpointButton;                           //@synthesize endpointButton=_endpointButton - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                               //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                            //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) VTUITickMarkView * tickMark;                         //@synthesize tickMark=_tickMark - In the implementation block
@property (nonatomic,retain) VTUIPagedLabel * instructionPagedLabel;              //@synthesize instructionPagedLabel=_instructionPagedLabel - In the implementation block
@property (nonatomic,retain) UIView * containerView;                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * flamesContainerView;                        //@synthesize flamesContainerView=_flamesContainerView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                               //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * pageLabel;                                 //@synthesize pageLabel=_pageLabel - In the implementation block
@property (nonatomic,retain) SUICFlamesView * flamesView;                         //@synthesize flamesView=_flamesView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(UIButton *)endpointButton;
-(void)_setupViews;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(UIView *)flamesContainerView;
-(UILabel *)pageLabel;
-(void)setPageLabel:(UILabel *)arg1 ;
-(SUICFlamesView *)flamesView;
-(VTUIPagedLabel *)instructionPagedLabel;
-(VTUITickMarkView *)tickMark;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)setFlamesContainerView:(UIView *)arg1 ;
-(void)setFlamesView:(SUICFlamesView *)arg1 ;
-(void)setEndpointButton:(UIButton *)arg1 ;
-(void)setTickMark:(VTUITickMarkView *)arg1 ;
-(void)setInstructionPagedLabel:(VTUIPagedLabel *)arg1 ;
@end

