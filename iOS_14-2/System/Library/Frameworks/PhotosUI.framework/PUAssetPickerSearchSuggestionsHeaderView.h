/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/SearchSuggestionsCollectionViewLayoutUpdatesDelegate.h>

@protocol PUAssetPickerSearchSuggestionsSelectionDelegate;
@class UICollectionView, NSString;

@interface PUAssetPickerSearchSuggestionsHeaderView : UIView <UICollectionViewDelegate, SearchSuggestionsCollectionViewLayoutUpdatesDelegate> {

	id<PUAssetPickerSearchSuggestionsSelectionDelegate> _suggestionsSelectionDelegate;
	UICollectionView* _collectionView;

}

@property (assign,nonatomic,__weak) id<PUAssetPickerSearchSuggestionsSelectionDelegate> suggestionsSelectionDelegate;              //@synthesize suggestionsSelectionDelegate=_suggestionsSelectionDelegate - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didInvalidateLayout:(id)arg1 ;
-(id<PUAssetPickerSearchSuggestionsSelectionDelegate>)suggestionsSelectionDelegate;
-(void)setSuggestionsSelectionDelegate:(id<PUAssetPickerSearchSuggestionsSelectionDelegate>)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
@end

