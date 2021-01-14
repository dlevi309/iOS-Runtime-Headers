/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXHorizontalCollectionGadget.h>
#import <libobjc.A.dylib/PUStackedAlbumTransitionDelegate.h>
#import <libobjc.A.dylib/PUCloudSharedAlbumViewControllerDelegate.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>

@class PUAlbumsGadgetProvider, PUSessionInfo, PUPhotoPinchGestureRecognizer, NSUserActivity, PUAlbumListViewControllerSpec, NSString;

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PUCloudSharedAlbumViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigableCollectionContainer> {

	PUAlbumsGadgetProvider* _provider;
	PUSessionInfo* _sessionInfo;
	PUPhotoPinchGestureRecognizer* _pinchGestureRecognizer;
	NSUserActivity* _siriActionActivity;

}

@property (nonatomic,readonly) PUPhotoPinchGestureRecognizer * pinchGestureRecognizer;                   //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) PUAlbumListViewControllerSpec * albumListViewControllerSpec; 
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                        //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (nonatomic,readonly) PUAlbumsGadgetProvider * provider;                                        //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_showsHorizontalScrollIndicator;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setGadgetSpec:(id)arg1 ;
-(void)_updateCollectionViewLayout;
-(id)init;
-(PUAlbumsGadgetProvider *)provider;
-(void)_handlePinch:(id)arg1 ;
-(void)sharedAlbumDeletedBySharedAlbumViewController:(id)arg1 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(PUAlbumListViewControllerSpec *)albumListViewControllerSpec;
-(id)accessoryButtonTitle;
-(PUPhotoPinchGestureRecognizer *)pinchGestureRecognizer;
-(unsigned long long)accessoryButtonType;
-(id)initWithAlbumsGadgetProvider:(id)arg1 ;
-(BOOL)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg1 ;
-(void)viewDidLoad;
-(void)_navigateToCollection:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(NSUserActivity *)siriActionActivity;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forPHCollection:(id)arg3 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(id)px_gridPresentation;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3 ;
@end

