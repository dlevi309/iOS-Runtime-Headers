/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXNavigationListDataSectionManagerObserver.h>
#import <libobjc.A.dylib/PXPreferencesObserver.h>

@class PXExtendedTraitCollection, PXNavigationListDataSectionManager, NSPredicate, NSNumber, NSString;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver> {

	BOOL _shouldShowNavigationListOnIpad;
	BOOL _isPresentedInPicker;
	BOOL _backgroundFetchingIsActive;
	unsigned long long _type;
	PXExtendedTraitCollection* _traitCollection;
	PXNavigationListDataSectionManager* _dataSourceManager;
	NSPredicate* _assetsFilterPredicate;
	NSNumber* _hiddenAlbumVisibleCache;

}

@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                       //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) PXNavigationListDataSectionManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedInPicker;                                          //@synthesize isPresentedInPicker=_isPresentedInPicker - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNavigationListForDeviceAndLayoutClass; 
@property (nonatomic,readonly) NSPredicate * assetsFilterPredicate;                               //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
@property (nonatomic,retain) NSNumber * hiddenAlbumVisibleCache;                                  //@synthesize hiddenAlbumVisibleCache=_hiddenAlbumVisibleCache - In the implementation block
@property (assign,nonatomic) BOOL backgroundFetchingIsActive;                                     //@synthesize backgroundFetchingIsActive=_backgroundFetchingIsActive - In the implementation block
@property (assign,nonatomic) BOOL shouldShowNavigationListOnIpad;                                 //@synthesize shouldShowNavigationListOnIpad=_shouldShowNavigationListOnIpad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateGadgets;
-(void)preferencesDidChange;
-(BOOL)isPresentedInPicker;
-(PXExtendedTraitCollection *)traitCollection;
-(id)init;
-(BOOL)shouldShowNavigationListOnIpad;
-(void)startLoadingRemainingData;
-(void)loadDataForGadgets;
-(void)setShouldShowNavigationListOnIpad:(BOOL)arg1 ;
-(BOOL)shouldShowNavigationListForDeviceAndLayoutClass;
-(void)setDataSourceManager:(PXNavigationListDataSectionManager *)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(NSNumber *)hiddenAlbumVisibleCache;
-(void)setHiddenAlbumVisibleCache:(NSNumber *)arg1 ;
-(void)pauseLoadingRemainingData;
-(NSPredicate *)assetsFilterPredicate;
-(PXNavigationListDataSectionManager *)dataSourceManager;
-(BOOL)backgroundFetchingIsActive;
-(void)_initializeDataSourceManagerIfNeeded;
-(unsigned long long)type;
-(void)setBackgroundFetchingIsActive:(BOOL)arg1 ;
-(BOOL)_shouldHiddenAlbumBeVisible;
-(id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(BOOL)arg3 assetsFilterPredicate:(id)arg4 ;
-(void)_updateGadgets;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

