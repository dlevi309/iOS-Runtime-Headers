/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SLComposeSheetConfigurationItemObserving.h>

@class NSArray, UITableViewController, SLSheetTitleView, UINavigationItem, UIViewController, SLComposeServiceViewController, UIView, UIImage, UITableView, NSString;

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving> {

	NSArray* _configurationItems;
	UITableViewController* _tableViewController;
	SLSheetTitleView* _titleView;
	UINavigationItem* _navItem;
	UIViewController* _autoCompletionViewController;
	SLComposeServiceViewController* _delegate;
	UIView* _contentView;
	UIImage* _serviceIconImage;

}

@property (assign,nonatomic,__weak) SLComposeServiceViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImage * serviceIconImage;                                    //@synthesize serviceIconImage=_serviceIconImage - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,copy) NSArray * configurationItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)navigationItem;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(SLComposeServiceViewController *)delegate;
-(UITableView *)tableView;
-(void)setTitle:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(SLComposeServiceViewController *)arg1 ;
-(UIImage *)serviceIconImage;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setContentView:(UIView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(UIView *)contentView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(NSArray *)configurationItems;
-(void)resetConfigurationItems;
-(double)_preferredTableViewHeight;
-(void)setServiceIconImage:(UIImage *)arg1 ;
-(void)_updateCellForConfigurationItem:(id)arg1 ;
-(void)observeConfigurationItems:(id)arg1 ;
-(void)_updateCell:(id)arg1 withConfigurationItem:(id)arg2 ;
-(void)configurationItemDidChange:(id)arg1 ;
-(void)setPostButtonTitle:(id)arg1 ;
-(void)setPostButtonEnabled:(BOOL)arg1 ;
-(void)updateContentViewSize:(CGSize)arg1 ;
-(void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(double)arg2 contentViewChangeBlock:(/*^block*/id)arg3 ;
-(void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(/*^block*/id)arg1 ;
-(void)setConfigurationItems:(NSArray *)arg1 ;
@end

