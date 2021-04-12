/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AAUISwitchTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AAUIDataclassPickerViewControllerDelegate;
@class AAUIHeaderView, UITableView, AAUIBuddyView, NSArray, _AAUIDataclassOptionCache, NSDictionary, NSString;

@interface AAUIDataclassPickerViewController : UIViewController <AAUISwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate, NSCoding, NSSecureCoding> {

	AAUIHeaderView* _tableHeaderView;
	UITableView* _tableView;
	AAUIBuddyView* _tableFooterView;
	NSArray* _compactConstraints;
	NSArray* _expandedConstraints;
	_AAUIDataclassOptionCache* _dataclassOptionCache;
	id<AAUIDataclassPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) AAUIBuddyView * view; 
@property (assign,nonatomic,__weak) id<AAUIDataclassPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * dataclassOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AAUIDataclassPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AAUIDataclassPickerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)_cancelBarButtonItem;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)_tableView;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(double)heightForFooterInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)_cancelButtonSelected:(id)arg1 ;
-(id)_nextBarButtonItem;
-(void)_updateConstraintsForTraitCollection:(id)arg1 ;
-(void)_nextButtonSelected:(id)arg1 ;
-(id)initWithDataclassOptions:(id)arg1 ;
-(void)setDataclassOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)dataclassOptions;
-(id)_signOutFooterText;
-(void)_additionalInformationSelected:(id)arg1 ;
-(void)_delegate_signOutViewControllerDidCancel;
-(void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)arg1 ;
-(void)_dismissAdditionalInformation:(id)arg1 ;
-(double)_compressedHeightForView:(id)arg1 containedInView:(id)arg2 ;
-(void)switchTableViewCellDidUpdateValue:(id)arg1 ;
@end

