/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class HUNewUserEducationCollectionViewModel, NSString;

@interface HUNewUserEducationCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	HUNewUserEducationCollectionViewModel* _collectionViewModel;

}

@property (nonatomic,retain) HUNewUserEducationCollectionViewModel * collectionViewModel;              //@synthesize collectionViewModel=_collectionViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)initWithCollectionViewModel:(id)arg1 ;
-(HUNewUserEducationCollectionViewModel *)collectionViewModel;
-(void)setCollectionViewModel:(HUNewUserEducationCollectionViewModel *)arg1 ;
@end

