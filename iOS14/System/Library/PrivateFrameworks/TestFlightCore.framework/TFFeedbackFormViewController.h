/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIBarButtonItem *)activityItem;
-(TFFeedbackFormPresenter *)presenter;
-(void)registerNotifications;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)loadView;
-(id)initWithPresenter:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)submitButtonPressed:(id)arg1 ;
-(TFFeedbackFormViewDataSource *)viewDataSource;
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

