/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKTitledBuddyHeaderViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant, UIView, UIVisualEffectView, UIFont, NSString, UITableView, UIActivityIndicatorView, _HKMedicalIDData, NSArray, UIButton;

@interface HKOrganDonationConfirmationViewController : HKViewController <HKTitledBuddyHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	HKOrganDonationConnectionManager* _connectionManager;
	HKOrganDonationRegistrant* _registrant;
	UIView* _headerView;
	UIVisualEffectView* _footerView;
	UIFont* _bodyFont;
	NSString* _completionButtonTitle;
	/*^block*/id _registrationCompletionHandler;
	UITableView* _tableView;
	UIActivityIndicatorView* _loadingIndicator;
	_HKMedicalIDData* _medicalIDData;
	NSArray* _dataEntryItems;
	UIButton* _submitButton;

}

@property (nonatomic,retain) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                        //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSArray * dataEntryItems;                                //@synthesize dataEntryItems=_dataEntryItems - In the implementation block
@property (nonatomic,retain) UIButton * submitButton;                                 //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,retain) NSString * completionButtonTitle;                        //@synthesize completionButtonTitle=_completionButtonTitle - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                          //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(id)registrationCompletionHandler;
-(_HKMedicalIDData *)medicalIDData;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(void)viewDidLoad;
-(void)setTableView:(UITableView *)arg1 ;
-(id)_createTableHeaderView;
-(id)_createTableFooterView;
-(NSArray *)dataEntryItems;
-(void)setDataEntryItems:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)viewDidLayoutSubviews;
-(UIButton *)submitButton;
-(void)setSubmitButton:(UIButton *)arg1 ;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
-(id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3 ;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1 ;
-(void)submitButtonTapped:(id)arg1 ;
-(void)confirmSubmissionIfNecessaryWithConfirmHandler:(/*^block*/id)arg1 andCancelHandler:(/*^block*/id)arg2 ;
@end

