/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>

@class PUSessionInfo, PXExtendedTraitCollection, PXPhotoKitCollectionsDataSourceManager, PUAlbumsGadgetProvider, NSString;

@interface PUHorizontalAlbumListGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXCollectionsDataSourceManagerObserver> {

	PUSessionInfo* _sessionInfo;
	unsigned long long _type;
	PXExtendedTraitCollection* _traitCollection;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PUAlbumsGadgetProvider* _albumsGadgetProvider;
	NSString* _title;

}

@property (nonatomic,readonly) unsigned long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                           //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PUAlbumsGadgetProvider * albumsGadgetProvider;                           //@synthesize albumsGadgetProvider=_albumsGadgetProvider - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (readonly) PUSessionInfo * sessionInfo;                                                     //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateGadgets;
-(PXExtendedTraitCollection *)traitCollection;
-(id)init;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)startLoadingRemainingData;
-(void)loadDataForGadgets;
-(void)setDataSourceManager:(PXPhotoKitCollectionsDataSourceManager *)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(BOOL)_canProvideGadgets;
-(void)pauseLoadingRemainingData;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(id)_newConfiguration;
-(id)_peoplePlacesAndMediaTypesConfiguration;
-(id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 sessionInfo:(id)arg3 ;
-(void)_handleDataSourceChange;
-(unsigned long long)type;
-(void)_resetGadgets;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setAlbumsGadgetProvider:(PUAlbumsGadgetProvider *)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(id)_fromMyMacConfiguration;
-(PUAlbumsGadgetProvider *)albumsGadgetProvider;
-(id)initWithIdentifier:(id)arg1 ;
-(id)_seeAllViewController;
-(NSString *)title;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

