/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class VTUIProximityContainerView, UILabel, VTUIButton, UIButton;

@interface VTUIProximityDataSharingOptInView : VTUIProximityView {

	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	VTUIButton* _shareButton;
	VTUIButton* _notNowButton;
	UIButton* _dismissButton;
	UIButton* _aboutLink;

}

@property (nonatomic,retain) VTUIButton * shareButton;               //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) VTUIButton * notNowButton;              //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;               //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIButton * aboutLink;                   //@synthesize aboutLink=_aboutLink - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)notNowButton;
-(void)setNotNowButton:(VTUIButton *)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(VTUIButton *)shareButton;
-(UIButton *)dismissButton;
-(void)setShareButton:(VTUIButton *)arg1 ;
-(void)_setupContent;
-(void)_setupPortraitConstraints;
-(UIButton *)aboutLink;
-(void)setAboutLink:(UIButton *)arg1 ;
@end

