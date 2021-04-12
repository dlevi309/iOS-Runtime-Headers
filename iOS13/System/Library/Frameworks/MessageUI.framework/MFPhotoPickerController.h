/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/MFPreferredHeightProviding.h>

@protocol MFPhotoPickerControllerDelegate;
@class NSMutableSet, PHFetchResult, PHAssetCollection, PHCachingImageManager, UIImagePickerController, MFPhotoPickerProgressManager, NSSet, NSString;

@interface MFPhotoPickerController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, MFPreferredHeightProviding> {

	NSMutableSet* _selectedAssetIdentifiers;
	struct {
		unsigned delegateRespondsToPickerDidCancel : 1;
		unsigned delegateRespondsToDidDeselectAssetWithIdentifier : 1;
	}  _flags;
	id<MFPhotoPickerControllerDelegate> _pickerDelegate;
	PHFetchResult* _photosFetchResult;
	PHAssetCollection* _photosCollection;
	PHCachingImageManager* _imageManager;
	double _availableWidth;
	UIImagePickerController* _systemImagePicker;
	MFPhotoPickerProgressManager* _progressManager;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) PHFetchResult * photosFetchResult;                                      //@synthesize photosFetchResult=_photosFetchResult - In the implementation block
@property (nonatomic,retain) PHAssetCollection * photosCollection;                                   //@synthesize photosCollection=_photosCollection - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                   //@synthesize imageManager=_imageManager - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                                   //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic) double availableWidth;                                                  //@synthesize availableWidth=_availableWidth - In the implementation block
@property (nonatomic,retain) UIImagePickerController * systemImagePicker;                            //@synthesize systemImagePicker=_systemImagePicker - In the implementation block
@property (nonatomic,retain) MFPhotoPickerProgressManager * progressManager;                         //@synthesize progressManager=_progressManager - In the implementation block
@property (nonatomic,readonly) NSSet * selectedAssetIdentifiers; 
@property (assign,nonatomic,__weak) id<MFPhotoPickerControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(void)close:(id)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(PHCachingImageManager *)imageManager;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(id)initWithPhotoPickerProgressManager:(id)arg1 ;
-(void)setPickerDelegate:(id<MFPhotoPickerControllerDelegate>)arg1 ;
-(void)addSelectedAssetIdentifiers:(id)arg1 ;
-(double)availableWidth;
-(void)setAvailableWidth:(double)arg1 ;
-(PHFetchResult *)photosFetchResult;
-(NSSet *)selectedAssetIdentifiers;
-(MFPhotoPickerProgressManager *)progressManager;
-(id)_visibleCellForIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(id<MFPhotoPickerControllerDelegate>)pickerDelegate;
-(void)addSelectedAssetIdentifier:(id)arg1 ;
-(void)removeSelectedAssetIdentifier:(id)arg1 ;
-(void)showSystemImagePicker:(id)arg1 ;
-(UIImagePickerController *)systemImagePicker;
-(void)removeAllSelectedAssetIdentifiers;
-(BOOL)_isPresentingInASheet;
-(void)setPhotosFetchResult:(PHFetchResult *)arg1 ;
-(PHAssetCollection *)photosCollection;
-(void)setPhotosCollection:(PHAssetCollection *)arg1 ;
-(void)setSystemImagePicker:(UIImagePickerController *)arg1 ;
-(void)setProgressManager:(MFPhotoPickerProgressManager *)arg1 ;
@end

