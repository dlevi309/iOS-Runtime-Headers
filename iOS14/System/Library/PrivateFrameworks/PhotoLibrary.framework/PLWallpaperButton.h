/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_UIBackdropViewObserver.h>

@class UIImageView, _UIBackdropView;

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver> {

	UIImageView* _titleMaskImageView;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) UIImageView * titleMaskImageView;              //@synthesize titleMaskImageView=_titleMaskImageView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                //@synthesize backdropView=_backdropView - In the implementation block
+(id)autoLayoutCommonWallpaperButton;
+(id)autoLayoutCommonWallpaperButtonWithStyle:(long long)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateContentEdgeInsets;
-(void)_setupBackdropView;
-(UIImageView *)titleMaskImageView;
-(void)setTitleMaskImageView:(UIImageView *)arg1 ;
@end

