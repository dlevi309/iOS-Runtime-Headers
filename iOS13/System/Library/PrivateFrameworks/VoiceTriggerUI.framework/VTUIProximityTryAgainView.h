/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class VTUIButton, UIButton, UILabel, VTUIStyle, VTPreferences, VTUIProximityContainerView, NSArray;

@interface VTUIProximityTryAgainView : VTUIProximityView {

	VTUIButton* _continueButton;
	UIButton* _dismissButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	VTUIStyle* _vtStyle;
	VTPreferences* _vtPrefs;
	VTUIProximityContainerView* _containerView;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) VTUIButton * continueButton;                             //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) VTUIStyle * vtStyle;                                     //@synthesize vtStyle=_vtStyle - In the implementation block
@property (nonatomic,retain) VTPreferences * vtPrefs;                                 //@synthesize vtPrefs=_vtPrefs - In the implementation block
@property (nonatomic,retain) VTUIProximityContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * viewConstraints;                               //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                              //@synthesize dismissButton=_dismissButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(VTUIProximityContainerView *)containerView;
-(void)setContainerView:(VTUIProximityContainerView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContinueButton:(VTUIButton *)arg1 ;
-(VTUIButton *)continueButton;
-(UIButton *)dismissButton;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_setupViews;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(VTUIStyle *)vtStyle;
-(void)setVtStyle:(VTUIStyle *)arg1 ;
-(VTPreferences *)vtPrefs;
-(void)setVtPrefs:(VTPreferences *)arg1 ;
@end

