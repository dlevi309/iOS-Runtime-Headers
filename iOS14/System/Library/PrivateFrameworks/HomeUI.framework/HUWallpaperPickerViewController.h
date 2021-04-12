/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTableViewController.h>
#import <libobjc.A.dylib/HUWallpaperEditingViewControllerDelegate.h>
#import <libobjc.A.dylib/HUNamedWallpaperCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPhotoCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol HUWallpaperPickerViewControllerDelegate;
@class HUNamedWallpaperCollectionViewController, NSString, PHCachingImageManager, NSMutableDictionary, NSArray;

@interface HUWallpaperPickerViewController : HUTableViewController <HUWallpaperEditingViewControllerDelegate, HUNamedWallpaperCollectionViewControllerDelegate, HUWallpaperPhotoCollectionViewControllerDelegate, PHPhotoLibraryChangeObserver> {

	id<HUWallpaperPickerViewControllerDelegate> _delegate;
	long long _collectionType;
	HUNamedWallpaperCollectionViewController* _namedWallpaperController;
	NSString* _namedSectionTitle;
	PHCachingImageManager* _imageManager;
	NSMutableDictionary* _assetCollectionsToAssetFetchResults;
	NSArray* _assetCollections;

}

@property (assign,nonatomic) long long collectionType;                                                         //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,retain) HUNamedWallpaperCollectionViewController * namedWallpaperController;              //@synthesize namedWallpaperController=_namedWallpaperController - In the implementation block
@property (nonatomic,copy) NSString * namedSectionTitle;                                                       //@synthesize namedSectionTitle=_namedSectionTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPhotoLibrary; 
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                             //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetCollectionsToAssetFetchResults;                        //@synthesize assetCollectionsToAssetFetchResults=_assetCollectionsToAssetFetchResults - In the implementation block
@property (nonatomic,retain) NSArray * assetCollections;                                                       //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,__weak,readonly) id<HUWallpaperPickerViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUWallpaperPickerViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(PHCachingImageManager *)imageManager;
-(void)photoLibraryDidChange:(id)arg1 ;
-(NSArray *)assetCollections;
-(void)viewDidLoad;
-(id)identifierForSection:(unsigned long long)arg1 ;
-(long long)collectionType;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setCollectionType:(long long)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChange;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(void)setAssetCollections:(NSArray *)arg1 ;
-(void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3 ;
-(void)wallpaperEditingDidCancel:(id)arg1 ;
-(id)initWithCollectionType:(long long)arg1 namedSectionTitle:(id)arg2 delegate:(id)arg3 ;
-(void)loadAssetCollections;
-(id)currentSectionIdentifiers;
-(HUNamedWallpaperCollectionViewController *)namedWallpaperController;
-(void)setNamedWallpaperController:(HUNamedWallpaperCollectionViewController *)arg1 ;
-(NSMutableDictionary *)assetCollectionsToAssetFetchResults;
-(NSString *)namedSectionTitle;
-(void)setAssetCollectionsToAssetFetchResults:(NSMutableDictionary *)arg1 ;
-(void)namedWallpaperController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3 ;
-(void)photoCollectionController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3 ;
-(BOOL)shouldShowPhotoLibrary;
-(void)setNamedSectionTitle:(NSString *)arg1 ;
@end

