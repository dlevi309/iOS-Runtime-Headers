/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
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
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(id<DCProgressViewControllerDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<DCProgressViewControllerDelegate>)arg1 ;
-(DCCircularProgressView *)circularProgressView;
-(BOOL)showsCancel;
-(void)setShowsCancel:(BOOL)arg1 ;
-(void)setCircularProgressView:(DCCircularProgressView *)arg1 ;
@end

