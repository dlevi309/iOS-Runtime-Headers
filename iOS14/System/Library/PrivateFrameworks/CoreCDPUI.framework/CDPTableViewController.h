/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, UIView, UITableView, BFFPaneHeaderView;

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _headerTitle;
	NSString* _headerSubTitle;
	/*^block*/id _completionHandler;
	UIView* _containerView;
	UITableView* _tableView;
	BFFPaneHeaderView* _headerView;

}

@property (nonatomic,retain) UIView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) BFFPaneHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                        //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * headerSubTitle;                     //@synthesize headerSubTitle=_headerSubTitle - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceClass; 
@property (nonatomic,readonly) BOOL isIPad; 
@property (nonatomic,readonly) BOOL isiPhone5OrSmaller; 
@property (nonatomic,readonly) BOOL uiTestMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)headerTitle;
-(void)setHeaderView:(BFFPaneHeaderView *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(UITableView *)tableView;
-(BOOL)isIPad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)deviceClass;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)completionHandler;
-(UIView *)containerView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BFFPaneHeaderView *)headerView;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(void)loadView;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 ;
-(void)setHeaderSubTitle:(NSString *)arg1 ;
-(BOOL)isiPhone5OrSmaller;
-(BOOL)uiTestMode;
-(NSString *)headerSubTitle;
@end

