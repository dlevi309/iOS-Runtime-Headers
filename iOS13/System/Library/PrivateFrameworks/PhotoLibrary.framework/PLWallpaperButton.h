/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)safeAreaInsetsDidChange;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)backdropViewDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateContentEdgeInsets;
-(void)_setupBackdropView;
-(UIImageView *)titleMaskImageView;
-(void)setTitleMaskImageView:(UIImageView *)arg1 ;
@end

