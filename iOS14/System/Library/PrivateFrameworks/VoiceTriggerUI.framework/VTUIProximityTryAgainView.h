/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class UIButton, UILabel, VTUIStyle, VTPreferences, VTUIProximityContainerView, NSArray;

@interface VTUIProximityTryAgainView : VTUIProximityView {

	UIButton* _dismissButton;
	UILabel* _titleLabel;
	VTUIStyle* _vtStyle;
	VTPreferences* _vtPrefs;
	VTUIProximityContainerView* _containerView;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VTUIStyle * vtStyle;                                     //@synthesize vtStyle=_vtStyle - In the implementation block
@property (nonatomic,retain) VTPreferences * vtPrefs;                                 //@synthesize vtPrefs=_vtPrefs - In the implementation block
@property (nonatomic,retain) VTUIProximityContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * viewConstraints;                               //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                              //@synthesize dismissButton=_dismissButton - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContainerView:(VTUIProximityContainerView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIProximityContainerView *)containerView;
-(void)_setupViews;
-(UIButton *)dismissButton;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(VTUIStyle *)vtStyle;
-(VTPreferences *)vtPrefs;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)setVtStyle:(VTUIStyle *)arg1 ;
-(void)setVtPrefs:(VTPreferences *)arg1 ;
@end

