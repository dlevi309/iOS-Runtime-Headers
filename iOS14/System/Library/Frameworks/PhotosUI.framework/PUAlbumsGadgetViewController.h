/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXGadgetUIViewController.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>

@class PXProgrammaticNavigationDestination, PUSessionInfo, UIBarButtonItem, NSString;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXNavigableCollectionContainer> {

	PXProgrammaticNavigationDestination* _px_navigationDestination;
	PUSessionInfo* _sessionInfo;
	UIBarButtonItem* _plusButtonItem;

}

@property (nonatomic,retain) PXProgrammaticNavigationDestination * px_navigationDestination;              //@synthesize px_navigationDestination=_px_navigationDestination - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * plusButtonItem;                                            //@synthesize plusButtonItem=_plusButtonItem - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                 //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_supportedActionsByKeyCommands;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)navigationHelperCanCurrentlyNavigate:(id)arg1 ;
-(id)keyCommands;
-(void)configureSectionHeader:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)_performKeyCommand:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2 ;
-(void)_handleDoneButton:(id)arg1 ;
-(id)_newAlbumActionWithSpec:(id)arg1 ;
-(void)_performCreateNewFolder;
-(id)_navigableGadgetForCollection:(id)arg1 ;
-(void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPx_navigationDestination:(PXProgrammaticNavigationDestination *)arg1 ;
-(id)_newFolderActionWithSpec:(id)arg1 ;
-(id)_newSmartAlbumActionWithSpec:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)_performCreateNewSharedAlbum;
-(void)viewDidLoad;
-(void)_performActionOfActionType:(long long)arg1 ;
-(void)_performCreateNewAlbum;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(long long)scrollAnimationIdentifier;
-(id)_newSharedAlbumActionWithSpec:(id)arg1 ;
-(BOOL)allowsBarManagement;
-(BOOL)_canPerformActionOfActionType:(long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_canNavigateToCollection:(id)arg1 skipGadgets:(BOOL)arg2 ;
-(UIBarButtonItem *)plusButtonItem;
-(void)_performCreateNewSmartAlbum;
-(void)_updateNavigationBar;
-(PUSessionInfo *)sessionInfo;
-(void)_navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(PXProgrammaticNavigationDestination *)px_navigationDestination;
-(void)setPlusButtonItem:(UIBarButtonItem *)arg1 ;
-(id)px_gridPresentation;
-(id)createPlusButton;
@end

