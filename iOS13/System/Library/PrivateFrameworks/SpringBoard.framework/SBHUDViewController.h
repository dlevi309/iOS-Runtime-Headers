/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/SBHUDViewControlling.h>

@class UIImage, NSString, UIView, _UIBackdropView, UIImageView;

@interface SBHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBHUDViewControlling> {

	BOOL _showsProgress;
	UIImage* _image;
	double _progress;
	NSString* _title;
	NSString* _subtitle;
	double _visibilityProgress;
	UIView* _hudView;
	UIView* _blockView;
	_UIBackdropView* _backdropView;
	UIImageView* _backdropMaskImageView;

}

@property (nonatomic,readonly) UIView * hudView;                                 //@synthesize hudView=_hudView - In the implementation block
@property (nonatomic,readonly) UIView * blockView;                               //@synthesize blockView=_blockView - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backdropView;                   //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UIImageView * backdropMaskImageView;              //@synthesize backdropMaskImageView=_backdropMaskImageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL showsProgress;                                 //@synthesize showsProgress=_showsProgress - In the implementation block
@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double visibilityProgress;                          //@synthesize visibilityProgress=_visibilityProgress - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)progressIndicatorStep;
-(double)progress;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(void)setProgress:(double)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(_UIBackdropView *)backdropView;
-(BOOL)showsProgress;
-(void)_rotateToInterfaceOrientation:(long long)arg1 ;
-(void)_updateBlockView;
-(void)_updateBackdropMask;
-(UIView *)hudView;
-(BOOL)displaysLabel;
-(UIImageView *)backdropMaskImageView;
-(UIView *)blockView;
-(id)_blockColorForValue:(float)arg1 ;
-(BOOL)definesAnimatedDismissal;
-(void)dismissAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)setShowsProgress:(BOOL)arg1 ;
-(double)visibilityProgress;
-(void)setVisibilityProgress:(double)arg1 ;
@end

