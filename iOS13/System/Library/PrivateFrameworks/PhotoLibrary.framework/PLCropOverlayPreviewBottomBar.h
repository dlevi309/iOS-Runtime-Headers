/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView {

	long long _backgroundStyle;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UIButton* _playbackButton;

}

@property (assign,nonatomic) long long backgroundStyle;                //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * playbackButton;              //@synthesize playbackButton=_playbackButton - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(UIButton *)cancelButton;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(UIButton *)doneButton;
-(void)_updateBackgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(UIButton *)playbackButton;
-(void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
@end

