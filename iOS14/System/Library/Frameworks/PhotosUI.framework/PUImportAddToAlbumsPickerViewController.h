/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PUAlbumCreatorDelegate.h>

@protocol PXImportAlbumPickerDelegate;
@class PHCollection, NSIndexPath, PUImportAddToAlbumsPickerCell, PXPhotoKitCollectionsDataSourceManagerConfiguration, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, NSString;

@interface PUImportAddToAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate> {

	PHCollection* _selectedCollection;
	NSIndexPath* _selectedIndex;
	PUImportAddToAlbumsPickerCell* _selectedCell;
	PHCollection* _createdAlbum;
	BOOL _needsDatasourceUpdate;
	PXPhotoKitCollectionsDataSourceManagerConfiguration* _dataSourceManagerConfiguration;
	id<PXImportAlbumPickerDelegate> _delegate;
	PXPhotoKitCollectionsDataSource* _dataSource;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;

}

@property (nonatomic,retain) PXPhotoKitCollectionsDataSource * dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;                                        //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManagerConfiguration * dataSourceManagerConfiguration;              //@synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<PXImportAlbumPickerDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)dataSourceOffset;
+(id)dataSourceShiftedIndexPath:(id)arg1 ;
+(unsigned long long)cellTypeForPosition:(id)arg1 ;
+(id)userCreatredAlbumsPhotoKitConfiguration;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<PXImportAlbumPickerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDataSourceManager:(PXPhotoKitCollectionsDataSourceManager *)arg1 ;
-(id)albumListViewControllerSpec;
-(PXPhotoKitCollectionsDataSource *)dataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(/*^block*/id)completionHandler;
-(void)setDelegate:(id<PXImportAlbumPickerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)setDataSource:(PXPhotoKitCollectionsDataSource *)arg1 ;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(void)setDataSourceManagerConfiguration:(PXPhotoKitCollectionsDataSourceManagerConfiguration *)arg1 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)canPresentPicker;
-(id)createAlbumListViewController;
-(id)hostViewContoller;
-(PXPhotoKitCollectionsDataSourceManagerConfiguration *)dataSourceManagerConfiguration;
-(void)_selectCell:(id)arg1 ;
-(void)updateDatasource;
-(double)_heightForIndex:(id)arg1 ;
-(id)posterImageForCollection:(id)arg1 cell:(id)arg2 forCellType:(unsigned long long)arg3 ;
-(id)addAlbumPlaceHolder:(CGSize)arg1 newAlbum:(BOOL)arg2 ;
-(void)selectCollection:(id)arg1 ;
-(void)configureDataSourceManagerConfiguration:(id)arg1 ;
-(void)_handleCreateAlbum;
-(void)_dismissPicker;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

