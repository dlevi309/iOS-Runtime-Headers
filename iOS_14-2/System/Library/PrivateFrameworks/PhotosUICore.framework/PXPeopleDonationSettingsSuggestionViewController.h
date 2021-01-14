/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class PHPerson, UICollectionView, UIImage, PHFetchResult, NSString;

@interface PXPeopleDonationSettingsSuggestionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	PHPerson* _person;
	UICollectionView* _collectionView;
	UIImage* _image;
	PHFetchResult* _faceCrops;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) PHFetchResult * faceCrops;                      //@synthesize faceCrops=_faceCrops - In the implementation block
@property (nonatomic,readonly) PHPerson * person;                            //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHPerson *)person;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)loadDataSource;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIImage *)image;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLoad;
-(id)initWithPerson:(id)arg1 ;
-(void)setFaceCrops:(PHFetchResult *)arg1 ;
-(PHFetchResult *)faceCrops;
@end

