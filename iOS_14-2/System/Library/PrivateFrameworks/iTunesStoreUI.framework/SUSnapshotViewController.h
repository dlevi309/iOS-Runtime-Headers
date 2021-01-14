/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(UIImageView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(UIImageView *)imageView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setOriginalOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(long long)_currentOrientation;
-(long long)originalOrientation;
-(void)setOriginalViewController:(UIViewController *)arg1 ;
-(UIViewController *)originalViewController;
-(void)_startActivityIndicator;
-(void)_stopActivityIndicator;
-(id)_snapshotOfView:(id)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
@end

