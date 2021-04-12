/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class NCMaterialButton, UIButton, MTMaterialView;

@interface NCMediaPlayPauseButton : UIControl {

	long long _type;
	NCMaterialButton* _button;
	UIButton* _invisibleButton;
	MTMaterialView* _backgroundCircle;

}

@property (nonatomic,retain) NCMaterialButton * button;                      //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIButton * invisibleButton;                     //@synthesize invisibleButton=_invisibleButton - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundCircle;              //@synthesize backgroundCircle=_backgroundCircle - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
-(void)_updateBackground;
-(void)_updateStyle;
-(NCMaterialButton *)button;
-(void)tintColorDidChange;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(void)setButton:(NCMaterialButton *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateSize;
-(void)layoutSubviews;
-(void)_updateType;
-(long long)type;
-(id)initWithFrame:(CGRect)arg1 type:(long long)arg2 ;
-(void)_updateSelected;
-(void)_updateBackgroundForAudioStyle;
-(void)_updateBackgroundForMovieStyle;
-(MTMaterialView *)backgroundCircle;
-(void)setBackgroundCircle:(MTMaterialView *)arg1 ;
-(void)_updateSizeForAudioStyle;
-(void)_updateSizeForMovieStyle;
-(UIButton *)invisibleButton;
-(void)_updateStyleForAudioStyle;
-(void)_updateStyleForMovieStyle;
-(void)_updateSelectedForAudioStyle;
-(void)_updateSelectedForMovieStyle;
-(void)setInvisibleButton:(UIButton *)arg1 ;
@end

