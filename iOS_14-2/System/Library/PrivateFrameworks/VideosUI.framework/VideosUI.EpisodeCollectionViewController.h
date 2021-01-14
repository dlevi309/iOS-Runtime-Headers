/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface VideosUI.EpisodeCollectionViewController : UIViewController <UICollectionViewDelegate> {

	 viewImpressioner;
	 viewModel;
	 dataSource;
	 prototypeCell;
	 prototypeCellMetrics;
	 contextMenuInteractor;

}
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

