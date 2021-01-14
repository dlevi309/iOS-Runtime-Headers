/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <VideosUI/VideosUI.StackCollectionViewCompositionalLayoutDelegate.h>

@interface VideosUI.StackViewController : UIViewController <UICollectionViewDelegate, VideosUI.StackCollectionViewCompositionalLayoutDelegate> {

	 peekingEnabled;
	 collectionImpressioner;
	 stackType;
	 collectionView;
	 supplementaryHeaderTypeToKindMap;
	 supplementaryFooterTypeToKindMap;
	 supplementaryKindToReuseIdentifierMap;
	 dataSource;
	 templateViewModel;
	 collectionViewModel;
	 $__lazy_storage_$_prototypeCells;
	 sectionViewModels;
	 $__lazy_storage_$_hostingCellViewControllers;
	 _showcaseHeight;
	 verticalPaginationMonitor;
	 verticalPaginationMonitorSubscriber;
	 paginationCollectionTypes;
	 contextMenuInteractor;

}
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

