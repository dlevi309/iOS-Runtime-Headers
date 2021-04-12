/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSUINotificationSettingsViewModelDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, AMSProcessInfo, NSString, _UIContentUnavailableView, AMSUILoadingView, AMSUINotificationSettingsViewModel, UITableView;

@interface AMSUINotificationSettingsViewController : UIViewController <AMSUINotificationSettingsViewModelDelegate, AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSString* _identifier;
	_UIContentUnavailableView* _errorView;
	AMSUILoadingView* _loadingView;
	AMSUINotificationSettingsViewModel* _model;
	UITableView* _tableView;

}

@property (nonatomic,retain) _UIContentUnavailableView * errorView;                   //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) AMSUILoadingView * loadingView;                          //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) AMSUINotificationSettingsViewModel * model;              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                             //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(NSString *)identifier;
-(AMSUINotificationSettingsViewModel *)model;
-(void)setModel:(AMSUINotificationSettingsViewModel *)arg1 ;
-(ACAccount *)account;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)_loadData;
-(id<AMSBagProtocol>)bag;
-(id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
-(void)setLoadingView:(AMSUILoadingView *)arg1 ;
-(AMSUILoadingView *)loadingView;
-(_UIContentUnavailableView *)errorView;
-(void)setErrorView:(_UIContentUnavailableView *)arg1 ;
-(void)commonSetup;
-(void)viewModel:(id)arg1 didReceiveValueChange:(id)arg2 forItem:(id)arg3 ;
@end

