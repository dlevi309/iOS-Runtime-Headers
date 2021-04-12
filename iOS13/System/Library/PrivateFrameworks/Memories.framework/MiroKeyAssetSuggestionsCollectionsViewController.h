/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroAssetSuggestionsCollectionViewController.h>

@interface MiroKeyAssetSuggestionsCollectionsViewController : MiroAssetSuggestionsCollectionViewController {

	BOOL _viewInitialLayout;

}

@property (assign) BOOL viewInitialLayout;              //@synthesize viewInitialLayout=_viewInitialLayout - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setViewInitialLayout:(BOOL)arg1 ;
-(BOOL)viewInitialLayout;
-(void)_customizeKeyAssetPickerLayoutWithSize:(CGSize)arg1 ;
@end

