/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleDataSourceDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class PXPeoplePersonDataSource, UICollectionView, PXPeopleSuggestionDataSource, NSString;

@interface PXPeopleDetailSettingsViewController : UIViewController <PXPeopleDataSourceDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	PXPeoplePersonDataSource* _dataSource;
	UICollectionView* _collectionView;
	PXPeopleSuggestionDataSource* _suggestionDataSource;

}

@property (retain) PXPeoplePersonDataSource * dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PXPeopleSuggestionDataSource * suggestionDataSource;              //@synthesize suggestionDataSource=_suggestionDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)loadSuggestionsForPerson:(id)arg1 ;
-(PXPeopleSuggestionDataSource *)suggestionDataSource;
-(void)setSuggestionDataSource:(PXPeopleSuggestionDataSource *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PXPeoplePersonDataSource *)dataSource;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)commonInit;
-(void)setDataSource:(PXPeoplePersonDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLoad;
-(void)peopleDataSourceMembersChanged:(id)arg1 ;
-(void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

