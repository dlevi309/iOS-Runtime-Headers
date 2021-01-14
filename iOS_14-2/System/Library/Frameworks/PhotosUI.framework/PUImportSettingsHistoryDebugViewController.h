/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class PHFetchResult, NSString;

@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, PHPhotoLibraryChangeObserver> {

	PHFetchResult* _importSessions;

}

@property (nonatomic,retain) PHFetchResult * importSessions;              //@synthesize importSessions=_importSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateFlowLayout:(id)arg1 withBounds:(CGRect)arg2 traitCollection:(id)arg3 ;
-(void)_updateTitle;
-(void)viewWillLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)_scrollToBottom:(id)arg1 ;
-(id)_assetForIndexPath:(id)arg1 ;
-(id)_assetsForSection:(long long)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)_reloadData;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(PHFetchResult *)importSessions;
-(void)setImportSessions:(PHFetchResult *)arg1 ;
-(void)dealloc;
@end

