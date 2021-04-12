/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIDownloadEntityTableViewCellDelegate.h>

@class VUIDownloadShowDataSource, VUIDownloadShowTableHeaderView, NSMutableArray, UIBarButtonItem, NSString;

@interface VUIDownloadShowTableViewController : UITableViewController <VUILibraryDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate> {

	VUIDownloadShowDataSource* _downloadDataSource;
	VUIDownloadShowTableHeaderView* _sizingHeader;
	NSMutableArray* _groupings;
	UIBarButtonItem* _rightBarButtonItem;
	UIBarButtonItem* _leftBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	NSMutableArray* _assetControllersToRemove;

}

@property (nonatomic,retain) VUIDownloadShowDataSource * downloadDataSource;              //@synthesize downloadDataSource=_downloadDataSource - In the implementation block
@property (nonatomic,retain) VUIDownloadShowTableHeaderView * sizingHeader;               //@synthesize sizingHeader=_sizingHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupings;                                  //@synthesize groupings=_groupings - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem;                        //@synthesize rightBarButtonItem=_rightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem;                         //@synthesize leftBarButtonItem=_leftBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                         //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetControllersToRemove;                   //@synthesize assetControllersToRemove=_assetControllersToRemove - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
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
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)setGroupings:(NSMutableArray *)arg1 ;
-(void)_cancelPressed;
-(void)_editToggled;
-(void)_exitEditingMode;
-(VUIDownloadShowDataSource *)downloadDataSource;
-(void)_popIfNeeded;
-(id)_configureAlertControllerForIndexPath:(id)arg1 ;
-(NSMutableArray *)groupings;
-(NSMutableArray *)assetControllersToRemove;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)downloadCellDidRequestCancelDownload:(id)arg1 ;
-(void)setDownloadDataSource:(VUIDownloadShowDataSource *)arg1 ;
-(VUIDownloadShowTableHeaderView *)sizingHeader;
-(void)setSizingHeader:(VUIDownloadShowTableHeaderView *)arg1 ;
-(void)setAssetControllersToRemove:(NSMutableArray *)arg1 ;
@end

