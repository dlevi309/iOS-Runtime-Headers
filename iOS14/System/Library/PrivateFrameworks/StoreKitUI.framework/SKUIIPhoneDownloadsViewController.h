/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIDownloadsChildViewControllerDelegate;
@class UITableView, _UIContentUnavailableView, NSArray, SKUIClientContext, NSString;

@interface SKUIIPhoneDownloadsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	_UIContentUnavailableView* _noContentView;
	id<SKUIDownloadsChildViewControllerDelegate> _delegate;
	NSArray* _downloads;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSArray * downloads;                                                       //@synthesize downloads=_downloads - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIDownloadsChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)downloads;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<SKUIDownloadsChildViewControllerDelegate>)delegate;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<SKUIDownloadsChildViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)_reload;
-(void)viewDidLayoutSubviews;
-(void)setDownloads:(NSArray *)arg1 ;
-(void)reloadDownloadsAtIndexes:(id)arg1 ;
@end

