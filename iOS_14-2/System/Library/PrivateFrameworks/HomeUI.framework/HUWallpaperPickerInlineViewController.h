/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/HUWallpaperPhotoCellDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol HUWallpaperPickerInlineViewControllerDelegate;
@class NSArray, UIImage, NSMutableDictionary, UIImagePickerController, HUWallpaperPhotoCell, UICollectionViewFlowLayout, HFWallpaper, UIDropInteraction, NSIndexPath, NSString;

@interface HUWallpaperPickerInlineViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, HUWallpaperPhotoCellDelegate, UIDropInteractionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSArray* _namedWallpapers;
	double _preferedHeight;
	UIImage* _originalCustomImage;
	id<HUWallpaperPickerInlineViewControllerDelegate> _delegate;
	NSMutableDictionary* _imageCache;
	UIImagePickerController* _imagePicker;
	HUWallpaperPhotoCell* _customWallpaperCell;
	UICollectionViewFlowLayout* _flowLayout;
	HFWallpaper* _customWallpaper;
	UIDropInteraction* _dropInteraction;
	NSIndexPath* _selectedIndexPath;
	unsigned long long _numberOfWallpapersFittingInWidth;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;                                               //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePicker;                                          //@synthesize imagePicker=_imagePicker - In the implementation block
@property (nonatomic,retain) HUWallpaperPhotoCell * customWallpaperCell;                                     //@synthesize customWallpaperCell=_customWallpaperCell - In the implementation block
@property (readonly) HFWallpaper * selectedWallpaper; 
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                        //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) HFWallpaper * customWallpaper;                                                  //@synthesize customWallpaper=_customWallpaper - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                            //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long numberOfWallpapers; 
@property (assign,nonatomic) unsigned long long numberOfWallpapersFittingInWidth;                            //@synthesize numberOfWallpapersFittingInWidth=_numberOfWallpapersFittingInWidth - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                               //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) NSArray * namedWallpapers;                                                      //@synthesize namedWallpapers=_namedWallpapers - In the implementation block
@property (nonatomic,readonly) double preferedHeight;                                                        //@synthesize preferedHeight=_preferedHeight - In the implementation block
@property (nonatomic,retain) UIImage * originalCustomImage;                                                  //@synthesize originalCustomImage=_originalCustomImage - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperPickerInlineViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useWallpaperPickerCell;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(CGSize)imageSize;
-(UIDropInteraction *)dropInteraction;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id)init;
-(id<HUWallpaperPickerInlineViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<HUWallpaperPickerInlineViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(UICollectionViewFlowLayout *)flowLayout;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)updateScrolling;
-(HUWallpaperPhotoCell *)customWallpaperCell;
-(void)configureCell:(id)arg1 image:(id)arg2 wallpaper:(id)arg3 ;
-(unsigned long long)numberOfWallpapers;
-(void)setNumberOfWallpapersFittingInWidth:(unsigned long long)arg1 ;
-(HFWallpaper *)selectedWallpaper;
-(HFWallpaper *)customWallpaper;
-(NSArray *)namedWallpapers;
-(id)wallpaperForIndexPath:(id)arg1 ;
-(void)setCustomWallpaperCell:(HUWallpaperPhotoCell *)arg1 ;
-(UIImage *)originalCustomImage;
-(void)setImagePicker:(UIImagePickerController *)arg1 ;
-(UIImagePickerController *)imagePicker;
-(void)setSelectedWallpaper:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCustomWallpaper:(HFWallpaper *)arg1 ;
-(unsigned long long)numberOfWallpapersFittingInWidth;
-(void)wallpaperPhotoCellDidPressDeleteButton:(id)arg1 ;
-(void)setCustomWallpaper:(id)arg1 image:(id)arg2 ;
-(void)setNamedWallpapers:(NSArray *)arg1 ;
-(void)setImageSizeToFitWidth:(double)arg1 forNumberOfWallpapers:(unsigned long long)arg2 ;
-(double)preferedHeight;
-(void)setOriginalCustomImage:(UIImage *)arg1 ;
@end

