/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroAssetSuggestionsCollectionViewController.h>

@interface MiroKeyAssetSuggestionsCollectionsViewController : MiroAssetSuggestionsCollectionViewController {

	BOOL _viewInitialLayout;

}

@property (assign) BOOL viewInitialLayout;              //@synthesize viewInitialLayout=_viewInitialLayout - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setViewInitialLayout:(BOOL)arg1 ;
-(BOOL)viewInitialLayout;
-(void)_customizeKeyAssetPickerLayoutWithSize:(CGSize)arg1 ;
@end

