/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIBackdropView *)backdropView;
-(void)viewWillLayoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(double)progress;
-(BOOL)showsProgress;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(UIView *)hudView;
-(void)viewDidLoad;
-(void)setShowsProgress:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)_rotateToInterfaceOrientation:(long long)arg1 ;
-(void)_updateBlockView;
-(void)_updateBackdropMask;
-(BOOL)displaysLabel;
-(UIImageView *)backdropMaskImageView;
-(UIView *)blockView;
-(id)_blockColorForValue:(float)arg1 ;
-(BOOL)definesAnimatedDismissal;
-(void)dismissAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(double)visibilityProgress;
-(void)setVisibilityProgress:(double)arg1 ;
@end

