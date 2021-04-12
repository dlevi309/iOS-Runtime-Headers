/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <NanoMediaBridgeUI/NanoMediaBridgeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol NMBUIOnboardingDataSource;
@class UILabel, NMBUIConfigurationButton, UITableView, NSString;

@interface NMBUIConfigurationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<NMBUIOnboardingDataSource> _dataSource;
	UILabel* _titleLabel;
	UILabel* _headerDescriptionLabel;
	UILabel* _footerDescriptionLabel;
	NMBUIConfigurationButton* _confirmButton;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_dismiss;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)_presentInstructionViewController;
@end

