/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<PLClickPresentationInteractionPresenting> presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) UIView * viewWithContent; 
@property (nonatomic,readonly) UIView * viewForTouchContinuation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresenter:(id<PLClickPresentationInteractionPresenting>)arg1 ;
-(id<APUILongLookViewControllerDelegate>)delegate;
-(id<APUILongLookViewControllerDataSource>)dataSource;
-(id<PLClickPresentationInteractionPresenting>)presenter;
-(void)setDelegate:(id<APUILongLookViewControllerDelegate>)arg1 ;
-(void)setDataSource:(id<APUILongLookViewControllerDataSource>)arg1 ;
-(void)_setActions:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)loadView;
-(void)_dismissButtonTapped:(id)arg1 ;
-(id)expandedPlatterViewForPresentationView:(id)arg1 ;
-(void)_setupContentView;
-(void)setExpandedPlatterSize:(CGSize)arg1 ;
-(PLExpandedPlatterView *)expandedPlatterView;
-(void)_platterDidReceiveTap:(id)arg1 ;
-(void)setPlatterTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)platterTapGestureRecognizer;
-(void)_setupProgressIndicator;
-(void)_setCustomContentViewController:(id)arg1 ;
-(void)setExpandedPlatterView:(PLExpandedPlatterView *)arg1 ;
-(void)_platterUtilityButtonTapped:(id)arg1 ;
@end

