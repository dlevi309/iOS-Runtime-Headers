/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_buttonImageNamed:(id)arg1 size:(CGSize)arg2 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NCMaterialButton *)button;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)_updateStyle;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateBackground;
-(void)setButton:(NCMaterialButton *)arg1 ;
-(void)_updateSize;
-(void)_updateType;
-(void)_buttonTouchUpInside:(id)arg1 ;
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

