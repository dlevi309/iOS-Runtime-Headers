/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/VUIDownloadDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIDownloadEntityTableViewCellDelegate.h>

@class UITableView, VUIDownloadDataSource, NSMutableArray, VUIDownloadEntityTableViewCell, UIBarButtonItem, UIAlertController, VUIViewControllerContentPresenter, NSString;

@interface VUIDownloadViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, VUIDownloadDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate> {

	UITableView* _downloadEntitiesTableView;
	VUIDownloadDataSource* _downloadManager;
	NSMutableArray* _downloadEntities;
	VUIDownloadEntityTableViewCell* _sizingCell;
	UIBarButtonItem* _rightBarButtonItem;
	UIBarButtonItem* _leftBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	UIAlertController* _alertController;
	NSMutableArray* _assetControllersToRemove;
	VUIViewControllerContentPresenter* _contentPresenter;

}

@property (nonatomic,retain) UITableView * downloadEntitiesTableView;                           //@synthesize downloadEntitiesTableView=_downloadEntitiesTableView - In the implementation block
@property (nonatomic,retain) VUIDownloadDataSource * downloadManager;                           //@synthesize downloadManager=_downloadManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadEntities;                                 //@synthesize downloadEntities=_downloadEntities - In the implementation block
@property (nonatomic,retain) VUIDownloadEntityTableViewCell * sizingCell;                       //@synthesize sizingCell=_sizingCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem;                              //@synthesize rightBarButtonItem=_rightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem;                               //@synthesize leftBarButtonItem=_leftBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                               //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetControllersToRemove;                         //@synthesize assetControllersToRemove=_assetControllersToRemove - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;              //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(void)loadView;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIBarButtonItem *)backBarButtonItem;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)leftBarButtonItem;
-(UIBarButtonItem *)rightBarButtonItem;
-(void)setLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(VUIDownloadDataSource *)downloadManager;
-(VUIDownloadEntityTableViewCell *)sizingCell;
-(void)setSizingCell:(VUIDownloadEntityTableViewCell *)arg1 ;
-(void)_cancelPressed;
-(void)setDownloadManager:(VUIDownloadDataSource *)arg1 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(void)_editToggled;
-(void)_exitEditingMode;
-(id)_configureAlertControllerForIndexPath:(id)arg1 ;
-(NSMutableArray *)assetControllersToRemove;
-(void)downloadCellDidRequestCancelDownload:(id)arg1 ;
-(void)setAssetControllersToRemove:(NSMutableArray *)arg1 ;
-(UITableView *)downloadEntitiesTableView;
-(NSMutableArray *)downloadEntities;
-(void)_updateMediaEntitiesWithNewDownloads:(id)arg1 ;
-(void)setDownloadEntities:(NSMutableArray *)arg1 ;
-(void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2 ;
-(void)setDownloadEntitiesTableView:(UITableView *)arg1 ;
@end

