/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSString, VTUIProximityContainerView, UILabel, UIImageView, UIView, VTUIStyle, VTUIButton, UIButton, NSArray;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {

	NSString* _languageCode;
	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	UIView* _imageViewContainer;
	UILabel* _subtitleLabel;
	VTUIStyle* _vtStyle;
	VTUIButton* _continueButton;
	UIButton* _dismissButton;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                  //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) VTUIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                   //@synthesize dismissButton=_dismissButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)continueButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(void)_setImage:(id)arg1 ;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
@end

