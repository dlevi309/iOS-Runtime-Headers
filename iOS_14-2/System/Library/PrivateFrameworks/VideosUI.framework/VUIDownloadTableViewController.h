/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/VUIDownloadDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIDownloadEntityTableViewCellDelegate.h>

@class UITableView, VUIDownloadDataSource, UITableViewDiffableDataSource, NSMutableArray, VUIDownloadEntityTableViewCell, UIBarButtonItem, UIAlertController, NSDictionary, VUIViewControllerContentPresenter, NSString;

@interface VUIDownloadTableViewController : UIViewController <UITableViewDelegate, VUIDownloadDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate> {

	UITableView* _downloadEntitiesTableView;
	VUIDownloadDataSource* _downloadDataSource;
	UITableViewDiffableDataSource* _diffableDataSource;
	NSMutableArray* _downloadEntities;
	VUIDownloadEntityTableViewCell* _sizingCell;
	UIBarButtonItem* _rightBarButtonItem;
	UIBarButtonItem* _leftBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	UIAlertController* _alertController;
	NSDictionary* _identifierToDownloadEntityDictionary;
	NSMutableArray* _assetControllersToRemove;
	VUIViewControllerContentPresenter* _contentPresenter;

}

@property (nonatomic,retain) UITableView * downloadEntitiesTableView;                           //@synthesize downloadEntitiesTableView=_downloadEntitiesTableView - In the implementation block
@property (nonatomic,retain) VUIDownloadDataSource * downloadDataSource;                        //@synthesize downloadDataSource=_downloadDataSource - In the implementation block
@property (nonatomic,retain) UITableViewDiffableDataSource * diffableDataSource;                //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadEntities;                                 //@synthesize downloadEntities=_downloadEntities - In the implementation block
@property (nonatomic,retain) VUIDownloadEntityTableViewCell * sizingCell;                       //@synthesize sizingCell=_sizingCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem;                              //@synthesize rightBarButtonItem=_rightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem;                               //@synthesize leftBarButtonItem=_leftBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                               //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) NSDictionary * identifierToDownloadEntityDictionary;               //@synthesize identifierToDownloadEntityDictionary=_identifierToDownloadEntityDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetControllersToRemove;                         //@synthesize assetControllersToRemove=_assetControllersToRemove - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;              //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUIDownloadEntityTableViewCell *)sizingCell;
-(void)setSizingCell:(VUIDownloadEntityTableViewCell *)arg1 ;
-(UIAlertController *)alertController;
-(void)viewDidLoad;
-(UITableViewDiffableDataSource *)diffableDataSource;
-(void)_cancelPressed;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(UIBarButtonItem *)leftBarButtonItem;
-(void)loadView;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)setLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)setDiffableDataSource:(UITableViewDiffableDataSource *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)backBarButtonItem;
-(id)_createDiffableDataSourceSnapshot;
-(void)_editToggled;
-(void)_exitEditingMode;
-(VUIDownloadDataSource *)downloadDataSource;
-(id)_configureRenewAlertControllerForIndexPath:(id)arg1 forPreferredStyle:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setAssetControllersToRemove:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetControllersToRemove;
-(void)downloadCellDidRequestCancelDownload:(id)arg1 ;
-(void)setDownloadDataSource:(VUIDownloadDataSource *)arg1 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(NSMutableArray *)downloadEntities;
-(id)_createDiffableDataSource;
-(void)setDownloadEntities:(NSMutableArray *)arg1 ;
-(NSDictionary *)identifierToDownloadEntityDictionary;
-(UITableView *)downloadEntitiesTableView;
-(id)_configureAlertControllerForIndexPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_downloadEntityShouldShowRenewOption:(id)arg1 ;
-(id)_createIdentifierToDownloadEntityDictionary;
-(void)setIdentifierToDownloadEntityDictionary:(NSDictionary *)arg1 ;
-(void)_deleteDownloadEntities:(id)arg1 ;
-(void)_deleteMediaEntitiesInDownloadEntities:(id)arg1 ;
-(id)_identifiersForDownloadEntities;
-(void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2 ;
-(void)setDownloadEntitiesTableView:(UITableView *)arg1 ;
@end

