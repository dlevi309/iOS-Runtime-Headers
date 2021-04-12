/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UIButton* _fileResizingButton;

}

@property (assign,nonatomic) long long backgroundStyle;                    //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * playbackButton;                  //@synthesize playbackButton=_playbackButton - In the implementation block
@property (nonatomic,readonly) UIButton * fileResizingButton;              //@synthesize fileResizingButton=_fileResizingButton - In the implementation block
-(UIButton *)doneButton;
-(UIButton *)cancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(UIButton *)playbackButton;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)_updateBackgroundStyle;
-(void)dealloc;
-(void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
-(UIButton *)fileResizingButton;
@end

