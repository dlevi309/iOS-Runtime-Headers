/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@protocol SearchSuggestionsCollectionViewLayoutUpdatesDelegate;
@interface PUAssetPickerSearchSuggestionsCollectionViewLayout : UICollectionViewCompositionalLayout {

	id<SearchSuggestionsCollectionViewLayoutUpdatesDelegate> _layoutUpdatesDelegate;

}

@property (assign,nonatomic,__weak) id<SearchSuggestionsCollectionViewLayoutUpdatesDelegate> layoutUpdatesDelegate;              //@synthesize layoutUpdatesDelegate=_layoutUpdatesDelegate - In the implementation block
-(void)invalidateLayout;
-(id<SearchSuggestionsCollectionViewLayoutUpdatesDelegate>)layoutUpdatesDelegate;
-(void)setLayoutUpdatesDelegate:(id<SearchSuggestionsCollectionViewLayoutUpdatesDelegate>)arg1 ;
@end

