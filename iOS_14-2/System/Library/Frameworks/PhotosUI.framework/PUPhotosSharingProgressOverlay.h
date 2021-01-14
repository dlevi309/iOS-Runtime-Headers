/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIWindow;

@interface PUPhotosSharingProgressOverlay : UIView {

	BOOL _isShowing;
	UIView* _progressView;
	UIWindow* _cachedMainWindow;

}

@property (nonatomic,retain) UIView * progressView;                           //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * cachedMainWindow;              //@synthesize cachedMainWindow=_cachedMainWindow - In the implementation block
-(void)willRemoveSubview:(id)arg1 ;
-(void)setShowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)addProgressView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(id)_mainWindow;
-(void)_installInStatusBarWindow;
-(id)_screenshotImage;
-(id)_grayScaleImageFromImage:(id)arg1 ;
-(void)_setupOverlayAnimated:(BOOL)arg1 ;
-(void)_tearDownOverlayAnimated:(BOOL)arg1 ;
-(UIWindow *)cachedMainWindow;
-(void)setCachedMainWindow:(UIWindow *)arg1 ;
@end

