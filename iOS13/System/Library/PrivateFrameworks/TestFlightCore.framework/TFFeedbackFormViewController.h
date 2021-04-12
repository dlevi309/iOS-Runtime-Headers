/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TFFeedbackFormPresenterView.h>

@class TFFeedbackFormPresenter, TFFeedbackFormViewDataSource, UITableView, UIBarButtonItem, UIActivityIndicatorView;

@interface TFFeedbackFormViewController : UIViewController <TFFeedbackFormPresenterView> {

	TFFeedbackFormPresenter* _presenter;
	TFFeedbackFormViewDataSource* _viewDataSource;
	UITableView* _tableView;
	UIBarButtonItem* _submitButtonItem;
	UIBarButtonItem* _activityItem;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,readonly) TFFeedbackFormViewDataSource * viewDataSource;                //@synthesize viewDataSource=_viewDataSource - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * submitButtonItem;                           //@synthesize submitButtonItem=_submitButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * activityItem;                               //@synthesize activityItem=_activityItem - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,readonly) TFFeedbackFormPresenter * presenter;                          //@synthesize presenter=_presenter - In the implementation block
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(TFFeedbackFormPresenter *)presenter;
-(id)initWithPresenter:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)registerNotifications;
-(TFFeedbackFormViewDataSource *)viewDataSource;
-(UIBarButtonItem *)activityItem;
-(void)submitButtonPressed:(id)arg1 ;
-(void)showSubmitButtonForSubmissionPendingState:(BOOL)arg1 ;
-(void)unregisterNotifications;
-(void)adjustContentOffsetForKeyboardNotification:(id)arg1 ;
-(UIBarButtonItem *)submitButtonItem;
-(void)setNavigationItemTitle:(id)arg1 ;
-(void)prepareForEntryType:(unsigned long long)arg1 ;
-(void)reloadEntryGroupsAtIndices:(id)arg1 ;
-(void)reloadEntriesAtIndexPaths:(id)arg1 ;
-(void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 ;
@end

