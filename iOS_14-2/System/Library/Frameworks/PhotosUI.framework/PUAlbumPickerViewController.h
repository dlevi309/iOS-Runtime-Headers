/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUSessionInfoObserver.h>

@class UINavigationController, PHCollectionList, PUAlbumPickerViewControllerSpec, PUAlbumPickerSessionInfo, PUAlbumListViewController, NSString;

@interface PUAlbumPickerViewController : UIViewController <PUSessionInfoObserver> {

	BOOL _didLoadSubviews;
	UINavigationController* _contentNavigationController;
	PHCollectionList* _collectionList;
	/*^block*/id _completionHandler;
	PUAlbumPickerViewControllerSpec* _spec;
	PUAlbumPickerSessionInfo* _albumPickerSessionInfo;
	PUAlbumListViewController* __albumListViewController;

}

@property (assign,nonatomic) BOOL didLoadSubviews;                                                                                      //@synthesize didLoadSubviews=_didLoadSubviews - In the implementation block
@property (setter=_setContentNavigationController:,nonatomic,retain) UINavigationController * contentNavigationController;              //@synthesize contentNavigationController=_contentNavigationController - In the implementation block
@property (setter=_setAlbumListViewController:,nonatomic,retain) PUAlbumListViewController * _albumListViewController;                  //@synthesize _albumListViewController=__albumListViewController - In the implementation block
@property (setter=_setSpec:,nonatomic,retain) PUAlbumPickerViewControllerSpec * spec;                                                   //@synthesize spec=_spec - In the implementation block
@property (setter=_setSessionInfo:,nonatomic,retain) PUAlbumPickerSessionInfo * albumPickerSessionInfo;                                 //@synthesize albumPickerSessionInfo=_albumPickerSessionInfo - In the implementation block
@property (nonatomic,retain) PHCollectionList * collectionList;                                                                         //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)setCollectionList:(PHCollectionList *)arg1 ;
-(id)initWithSpec:(id)arg1 sessionInfo:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(PHCollectionList *)collectionList;
-(id)completionHandler;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_setSpec:(id)arg1 ;
-(PUAlbumPickerViewControllerSpec *)spec;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)sessionInfoStatusDidChange:(id)arg1 ;
-(id)initWithSessionInfo:(id)arg1 ;
-(void)_loadSubviewsIfNeeded;
-(void)_setContentNavigationController:(id)arg1 ;
-(PUAlbumPickerSessionInfo *)albumPickerSessionInfo;
-(void)_setSessionInfo:(id)arg1 ;
-(BOOL)didLoadSubviews;
-(void)setDidLoadSubviews:(BOOL)arg1 ;
-(PUAlbumListViewController *)_albumListViewController;
-(void)_setAlbumListViewController:(id)arg1 ;
-(UINavigationController *)contentNavigationController;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)_preferredWhitePointAdaptivityStyle;
@end

