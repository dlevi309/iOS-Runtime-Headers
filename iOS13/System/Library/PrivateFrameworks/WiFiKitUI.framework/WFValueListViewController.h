/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSString, NSArray;

@interface WFValueListViewController : UITableViewController {

	NSString* _selectedTitle;
	/*^block*/id _completionHandler;
	/*^block*/id _footerHandler;
	NSArray* _titles;

}

@property (nonatomic,retain) NSArray * titles;                      //@synthesize titles=_titles - In the implementation block
@property (nonatomic,retain) NSString * selectedTitle;              //@synthesize selectedTitle=_selectedTitle - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id footerHandler;                        //@synthesize footerHandler=_footerHandler - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(id)initWithTitles:(id)arg1 ;
-(NSString *)selectedTitle;
-(void)setSelectedTitle:(NSString *)arg1 ;
-(void)setFooterHandler:(id)arg1 ;
-(id)footerHandler;
@end

