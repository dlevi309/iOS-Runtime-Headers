/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIViewController.h>

@protocol DCProgressViewControllerDelegate;
@class NSProgress, UILabel, UIActivityIndicatorView, DCCircularProgressView;

@interface DCProgressViewController : UIViewController {

	BOOL _showsCancel;
	NSProgress* _observedProgress;
	id<DCProgressViewControllerDelegate> _progressDelegate;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	DCCircularProgressView* _circularProgressView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) DCCircularProgressView * circularProgressView;                             //@synthesize circularProgressView=_circularProgressView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;                                             //@synthesize observedProgress=_observedProgress - In the implementation block
@property (assign,nonatomic) BOOL showsCancel;                                                          //@synthesize showsCancel=_showsCancel - In the implementation block
@property (assign,nonatomic,__weak) id<DCProgressViewControllerDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSProgress *)observedProgress;
-(id)initWithDelegate:(id)arg1 ;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id<DCProgressViewControllerDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<DCProgressViewControllerDelegate>)arg1 ;
-(DCCircularProgressView *)circularProgressView;
-(BOOL)showsCancel;
-(void)setShowsCancel:(BOOL)arg1 ;
-(void)setCircularProgressView:(DCCircularProgressView *)arg1 ;
@end

