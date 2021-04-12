/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/

#import <AppPredictionUI/AppPredictionUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionPresentable.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentationViewDelegate.h>

@protocol PLClickPresentationInteractionPresenting, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate;
@class UIView, SUICProgressEventViewController, UIActivityIndicatorView, PLExpandedPlatterView, UITapGestureRecognizer, NSString;

@interface APUILongLookViewController : UIViewController <PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentationViewDelegate> {

	SUICProgressEventViewController* _progressEventViewController;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _suppressSpinner;
	id<PLClickPresentationInteractionPresenting> _presenter;
	id<APUILongLookViewControllerDataSource> _dataSource;
	id<APUILongLookViewControllerDelegate> _delegate;
	PLExpandedPlatterView* _expandedPlatterView;
	UITapGestureRecognizer* _platterTapGestureRecognizer;

}

@property (nonatomic,retain) PLExpandedPlatterView * expandedPlatterView;                                //@synthesize expandedPlatterView=_expandedPlatterView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * platterTapGestureRecognizer;                       //@synthesize platterTapGestureRecognizer=_platterTapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<APUILongLookViewControllerDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<APUILongLookViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PLClickPresentationInteractionPresenting> presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) UIView * viewWithContent; 
@property (nonatomic,readonly) UIView * viewForTouchContinuation; 
-(id<APUILongLookViewControllerDelegate>)delegate;
-(void)setDelegate:(id<APUILongLookViewControllerDelegate>)arg1 ;
-(id<APUILongLookViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<APUILongLookViewControllerDataSource>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_setActions:(id)arg1 ;
-(id<PLClickPresentationInteractionPresenting>)presenter;
-(void)_dismissButtonTapped:(id)arg1 ;
-(PLExpandedPlatterView *)expandedPlatterView;
-(id)expandedPlatterViewForPresentationView:(id)arg1 ;
-(void)setPresenter:(id<PLClickPresentationInteractionPresenting>)arg1 ;
-(void)_setupProgressIndicator;
-(void)_setupContentView;
-(void)_setCustomContentViewController:(id)arg1 ;
-(void)setExpandedPlatterSize:(CGSize)arg1 ;
-(void)_platterDidReceiveTap:(id)arg1 ;
-(void)_platterUtilityButtonTapped:(id)arg1 ;
-(void)setExpandedPlatterView:(PLExpandedPlatterView *)arg1 ;
-(UITapGestureRecognizer *)platterTapGestureRecognizer;
-(void)setPlatterTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

