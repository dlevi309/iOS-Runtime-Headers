/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXOutlineDataSectionManagerDelegate.h>
#import <libobjc.A.dylib/PXNavigationListDataSectionManagerObserver.h>

@protocol PXSidebarDataSourceControllerDelegate;
@class PXOutlineDataSectionManager, NSMutableDictionary, NSArray, PXDataSectionManager, PXNavigationListItemDataSectionManager, PHPhotoLibrary, NSOperationQueue, PXPhotoLibraryLocalDefaults, NSString;

@interface PXSidebarDataController : NSObject <PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver> {

	PXOutlineDataSectionManager* _rootDataSectionManager;
	NSMutableDictionary* _dataSectionManagers;
	NSMutableDictionary* _dataSectionObjects;
	NSArray* _arrangedObjectIdentifiers;
	PXDataSectionManager* _mediaTypesSectionManager;
	PXNavigationListItemDataSectionManager* _mediaTypesItemManager;
	PHPhotoLibrary* _photoLibrary;
	NSOperationQueue* _workQueue;
	id<PXSidebarDataSourceControllerDelegate> _delegate;
	PXPhotoLibraryLocalDefaults* _localDefaults;

}

@property (nonatomic,readonly) PXPhotoLibraryLocalDefaults * localDefaults;                                 //@synthesize localDefaults=_localDefaults - In the implementation block
@property (nonatomic,readonly) PXDataSectionManager * mediaTypesSectionManager;                             //@synthesize mediaTypesSectionManager=_mediaTypesSectionManager - In the implementation block
@property (nonatomic,readonly) PXNavigationListItemDataSectionManager * mediaTypesItemManager;              //@synthesize mediaTypesItemManager=_mediaTypesItemManager - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                               //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * workQueue;                                                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) id<PXSidebarDataSourceControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prototypesDataSectionManagerForLibrary:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3 ;
+(id)albumsDataSectionManagerWithMediaTypesItemManager:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3 ;
+(id)photosDataSectionManagerForLibrary:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3 ;
+(id)projectsDataSectionManagerForLibrary:(id)arg1 workQueue:(id)arg2 ;
+(id)devicesDataSectionManagerForLibrary:(id)arg1 ;
+(id)dataSectionManagerForCollection:(id)arg1 workQueue:(id)arg2 ;
-(NSOperationQueue *)workQueue;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(id<PXSidebarDataSourceControllerDelegate>)delegate;
-(void)setDelegate:(id<PXSidebarDataSourceControllerDelegate>)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 sectionEnablementProvider:(id)arg2 ;
-(void)requestImageForItem:(id)arg1 parentItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)infoForItem:(id)arg1 childIndex:(long long)arg2 ;
-(id)child:(long long)arg1 ofItem:(id)arg2 ;
-(BOOL)isItemExpanded:(id)arg1 ;
-(PXNavigationListItemDataSectionManager *)mediaTypesItemManager;
-(id)childrenOfListItem:(id)arg1 ;
-(id)outlineDataSectionManager:(id)arg1 arrangedSectionContent:(id)arg2 ;
-(void)_setDataSectionManager:(id)arg1 forKey:(id)arg2 ;
-(void)_removeDataSectionManagerForKey:(id)arg1 ;
-(void)_updateDataSectionForRemovedItems:(id)arg1 ;
-(void)_updateMediaTypesItemManager;
-(id)_dataSectionManagerForListItem:(id)arg1 ;
-(long long)numberOfChildrenOfItem:(id)arg1 ;
-(BOOL)moveGroupItem:(id)arg1 afterGroupItem:(id)arg2 ;
-(void)setExpanded:(BOOL)arg1 forItem:(id)arg2 ;
-(id)childDataSectionForItem:(id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(id)sectionManagersForLibrary:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3 ;
-(id)dataSectionManagerForItem:(id)arg1 ;
-(PXDataSectionManager *)mediaTypesSectionManager;
-(PXPhotoLibraryLocalDefaults *)localDefaults;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

