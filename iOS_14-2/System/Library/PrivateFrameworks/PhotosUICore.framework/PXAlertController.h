/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIAlertController.h>

@class _PXAlertContentViewController, UIActivityIndicatorView, UIProgressView, UIView;

@interface PXAlertController : UIAlertController {

	_PXAlertContentViewController* _contentViewController;
	UIActivityIndicatorView* _activityIndicatorView;
	UIProgressView* _progressView;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
+(id)progressAlertControllerWithMessage:(id)arg1 ;
+(id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIView *)contentView;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

