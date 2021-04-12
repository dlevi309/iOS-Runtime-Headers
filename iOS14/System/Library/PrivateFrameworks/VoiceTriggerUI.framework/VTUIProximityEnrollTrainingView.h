/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class SUICOrbView, VTUIStyle, VTPreferences, UIButton, VTUICheckMarkView, VTUIPagedLabel, UIView, UILabel, NSArray;

@interface VTUIProximityEnrollTrainingView : VTUIProximityView {

	SUICOrbView* _orbView;
	VTUIStyle* _vtStyle;
	VTPreferences* _vtPrefs;
	UIButton* _skipButton;
	UIButton* _dismissButton;
	VTUICheckMarkView* _checkMark;
	VTUIPagedLabel* _instructionPagedLabel;
	UIView* _containerView;
	UILabel* _statusLabel;
	UILabel* _pageLabel;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                           //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                               //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                            //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) VTUICheckMarkView * checkMark;                       //@synthesize checkMark=_checkMark - In the implementation block
@property (nonatomic,retain) VTUIPagedLabel * instructionPagedLabel;              //@synthesize instructionPagedLabel=_instructionPagedLabel - In the implementation block
@property (nonatomic,retain) UIView * containerView;                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                               //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * pageLabel;                                 //@synthesize pageLabel=_pageLabel - In the implementation block
@property (nonatomic,retain) SUICOrbView * orbView;                               //@synthesize orbView=_orbView - In the implementation block
-(void)setContainerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UILabel *)statusLabel;
-(void)_setupViews;
-(UIButton *)dismissButton;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UIButton *)skipButton;
-(void)setSkipButton:(UIButton *)arg1 ;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)dealloc;
-(SUICOrbView *)orbView;
-(VTUICheckMarkView *)checkMark;
-(VTUIPagedLabel *)instructionPagedLabel;
-(UILabel *)pageLabel;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)setCheckMark:(VTUICheckMarkView *)arg1 ;
-(void)setInstructionPagedLabel:(VTUIPagedLabel *)arg1 ;
-(void)setPageLabel:(UILabel *)arg1 ;
-(void)setOrbView:(SUICOrbView *)arg1 ;
@end

