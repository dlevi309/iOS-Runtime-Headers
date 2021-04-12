/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIProductPageChildViewControllerDelegate, SKUIProductPageChildViewController;
@class SKUIClientContext, SKUIColorScheme, UIColor, SKUIProductPageHeaderViewController, NSArray, SKUIProductPageTableView, SKUILayoutCache, UITableView, NSString;

@interface SKUIProductPageTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	id<SKUIProductPageChildViewController> _delegateSender;
	UIColor* _evenColor;
	SKUIProductPageHeaderViewController* _headerViewController;
	UIColor* _color;
	NSArray* _sections;
	SKUIProductPageTableView* _tableView;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                            //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;                                           //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewController> delegateSender;                //@synthesize delegateSender=_delegateSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(id)_tableView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(SKUILayoutCache *)textLayoutCache;
-(void)_addHeaderView;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2 ;
-(void)scrollToView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegateSender:(id<SKUIProductPageChildViewController>)arg1 ;
-(id)_textLayoutRequestWithText:(id)arg1 ;
-(id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2 ;
-(id<SKUIProductPageChildViewController>)delegateSender;
@end

