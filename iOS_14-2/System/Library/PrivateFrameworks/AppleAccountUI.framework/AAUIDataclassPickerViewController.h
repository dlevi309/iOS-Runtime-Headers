/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_tableHeaderView;
-(void)_updateConstraintsForTraitCollection:(id)arg1 ;
-(id)_tableFooterView;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)_nextBarButtonItem;
-(id<AAUIDataclassPickerViewControllerDelegate>)delegate;
-(id)_titleText;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_messageText;
-(void)_cancelButtonSelected:(id)arg1 ;
-(void)setDelegate:(id<AAUIDataclassPickerViewControllerDelegate>)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)_cancelBarButtonItem;
-(void)_nextButtonSelected:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_tableView;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg1 ;
-(void)loadView;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(double)heightForFooterInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
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

