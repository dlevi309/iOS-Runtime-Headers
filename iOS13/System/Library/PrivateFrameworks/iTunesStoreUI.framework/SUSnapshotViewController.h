/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, UIActivityIndicatorView, UIImageView;

@interface SUSnapshotViewController : UIViewController {

	UIViewController* _originalViewController;
	long long _originalOrientation;
	UIActivityIndicatorView* _activityIndicatorView;
	UIImageView* _imageView;

}

@property (assign,nonatomic) long long originalOrientation;                                //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIViewController * originalViewController;                    //@synthesize originalViewController=_originalViewController - In the implementation block
-(id)initWithOriginal:(id)arg1 ;
-(UIImageView *)imageView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(void)_startActivityIndicator;
-(void)_stopActivityIndicator;
-(long long)_currentOrientation;
-(UIViewController *)originalViewController;
-(id)_snapshotOfView:(id)arg1 ;
-(void)setOriginalViewController:(UIViewController *)arg1 ;
@end

