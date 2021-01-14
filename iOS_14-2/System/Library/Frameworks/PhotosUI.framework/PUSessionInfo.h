/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUPhotoSelectionManagerChangeObserver.h>

@protocol PLAlbumProtocol, PXPhotosViewDelegate;
@class NSPointerArray, PUPhotoSelectionManager, PHAssetCollection, NSOrderedSet, NSObject, NSString, NSPredicate, PXLoadingStatusManager, PXSelectionCoordinator;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerChangeObserver> {

	NSPointerArray* _observers;
	BOOL _selectingTargetAlbum;
	BOOL _allowsMultipleSelection;
	BOOL _enforcesSelectionLimitByDelesectingOtherAssets;
	BOOL _showsFileSizePicker;
	BOOL _isForAssetPicker;
	BOOL _isLimitedLibraryPicker;
	long long _status;
	PUPhotoSelectionManager* _photoSelectionManager;
	PHAssetCollection* _sourceAlbum;
	NSOrderedSet* _transferredAssets;
	NSObject*<PLAlbumProtocol> _targetAlbum;
	NSString* _targetAlbumName;
	NSPredicate* _assetsFilterPredicate;
	unsigned long long _assetTypesToInclude;
	NSString* _localizedPrompt;
	long long _promptLocation;
	/*^block*/id _bannerGenerator;
	unsigned long long _selectionLimit;
	id<PXPhotosViewDelegate> _photosViewDelegate;
	PXLoadingStatusManager* _loadingStatusManager;
	PXSelectionCoordinator* _selectionCoordinator;

}

@property (nonatomic,retain) PHAssetCollection * sourceAlbum;                                        //@synthesize sourceAlbum=_sourceAlbum - In the implementation block
@property (nonatomic,copy) NSOrderedSet * transferredAssets;                                         //@synthesize transferredAssets=_transferredAssets - In the implementation block
@property (nonatomic,retain) PUPhotoSelectionManager * photoSelectionManager;                        //@synthesize photoSelectionManager=_photoSelectionManager - In the implementation block
@property (nonatomic,copy) NSString * localizedPrompt;                                               //@synthesize localizedPrompt=_localizedPrompt - In the implementation block
@property (assign,nonatomic) long long promptLocation;                                               //@synthesize promptLocation=_promptLocation - In the implementation block
@property (nonatomic,copy) id bannerGenerator;                                                       //@synthesize bannerGenerator=_bannerGenerator - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection;                                           //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosViewDelegate> photosViewDelegate;                     //@synthesize photosViewDelegate=_photosViewDelegate - In the implementation block
@property (nonatomic,retain) PXLoadingStatusManager * loadingStatusManager;                          //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
@property (assign,nonatomic) long long status;                                                       //@synthesize status=_status - In the implementation block
@property (getter=isSelectingAssets,nonatomic,readonly) BOOL selectingAssets; 
@property (getter=isSelectingTargetAlbum,nonatomic,readonly) BOOL selectingTargetAlbum;              //@synthesize selectingTargetAlbum=_selectingTargetAlbum - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> targetAlbum;                                 //@synthesize targetAlbum=_targetAlbum - In the implementation block
@property (nonatomic,retain) NSString * targetAlbumName;                                             //@synthesize targetAlbumName=_targetAlbumName - In the implementation block
@property (nonatomic,retain) NSPredicate * assetsFilterPredicate;                                    //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long assetTypesToInclude;                                 //@synthesize assetTypesToInclude=_assetTypesToInclude - In the implementation block
@property (assign,nonatomic) unsigned long long selectionLimit;                                      //@synthesize selectionLimit=_selectionLimit - In the implementation block
@property (assign,nonatomic) BOOL enforcesSelectionLimitByDelesectingOtherAssets;                    //@synthesize enforcesSelectionLimitByDelesectingOtherAssets=_enforcesSelectionLimitByDelesectingOtherAssets - In the implementation block
@property (assign,nonatomic) BOOL showsFileSizePicker;                                               //@synthesize showsFileSizePicker=_showsFileSizePicker - In the implementation block
@property (nonatomic,readonly) BOOL isForAssetPicker;                                                //@synthesize isForAssetPicker=_isForAssetPicker - In the implementation block
@property (nonatomic,readonly) BOOL isLimitedLibraryPicker;                                          //@synthesize isLimitedLibraryPicker=_isLimitedLibraryPicker - In the implementation block
@property (nonatomic,retain) PXSelectionCoordinator * selectionCoordinator;                          //@synthesize selectionCoordinator=_selectionCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXLoadingStatusManager *)loadingStatusManager;
-(BOOL)allowsMultipleSelection;
-(void)setLoadingStatusManager:(PXLoadingStatusManager *)arg1 ;
-(void)setAssetsFilterPredicate:(NSPredicate *)arg1 ;
-(unsigned long long)selectionLimit;
-(BOOL)showsFileSizePicker;
-(void)setShowsFileSizePicker:(BOOL)arg1 ;
-(PUPhotoSelectionManager *)photoSelectionManager;
-(id)init;
-(void)_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)setAssetTypesToInclude:(unsigned long long)arg1 ;
-(id<PXPhotosViewDelegate>)photosViewDelegate;
-(void)photoSelectionManagerSelectionDidChange:(id)arg1 ;
-(BOOL)isSelectingTargetAlbum;
-(BOOL)hasTargetAlbum;
-(BOOL)hasLocalTargetAlbum;
-(NSPredicate *)assetsFilterPredicate;
-(NSString *)targetAlbumName;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(NSObject*<PLAlbumProtocol>)targetAlbum;
-(void)setPhotosViewDelegate:(id<PXPhotosViewDelegate>)arg1 ;
-(void)setPhotoSelectionManager:(PUPhotoSelectionManager *)arg1 ;
-(PHAssetCollection *)sourceAlbum;
-(long long)promptLocation;
-(BOOL)isForAssetPicker;
-(void)setTargetAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(unsigned long long)assetTypesToInclude;
-(void)setSelectionLimit:(unsigned long long)arg1 ;
-(NSOrderedSet *)transferredAssets;
-(NSString *)localizedPrompt;
-(BOOL)isSelectingAssets;
-(id)bannerGenerator;
-(void)addSessionInfoObserver:(id)arg1 ;
-(void)removeSessionInfoObserver:(id)arg1 ;
-(void)setLocalizedPrompt:(NSString *)arg1 ;
-(void)setTransferredAssets:(NSOrderedSet *)arg1 ;
-(void)setSourceAlbum:(PHAssetCollection *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setBannerGenerator:(id)arg1 ;
-(void)setPromptLocation:(long long)arg1 ;
-(void)setTargetAlbumName:(NSString *)arg1 ;
-(BOOL)isLimitedLibraryPicker;
-(void)setSelectionCoordinator:(PXSelectionCoordinator *)arg1 ;
-(PXSelectionCoordinator *)selectionCoordinator;
-(long long)status;
-(BOOL)enforcesSelectionLimitByDelesectingOtherAssets;
-(void)setEnforcesSelectionLimitByDelesectingOtherAssets:(BOOL)arg1 ;
@end

