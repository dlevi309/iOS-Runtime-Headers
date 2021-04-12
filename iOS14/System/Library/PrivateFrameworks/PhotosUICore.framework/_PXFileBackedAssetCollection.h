/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseDisplayCollection.h>
#import <libobjc.A.dylib/PXDisplayAssetCollection.h>

@class NSString, NSArray, NSDate;

@interface _PXFileBackedAssetCollection : PXBaseDisplayCollection <PXDisplayAssetCollection>

@property (nonatomic,readonly) BOOL isEnriched; 
@property (nonatomic,readonly) BOOL isEnrichmentComplete; 
@property (nonatomic,readonly) double promotionScore; 
@property (nonatomic,readonly) BOOL isAggregation; 
@property (nonatomic,readonly) BOOL isRecent; 
@property (nonatomic,readonly) unsigned short px_highlightEnrichmentState; 
@property (nonatomic,readonly) long long px_highlightKind; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedDebugDescription; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSString * localizedDateDescription; 
@property (nonatomic,readonly) NSString * localizedSmartDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) BOOL canContainAssets; 
@property (nonatomic,readonly) BOOL canContainCollections; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) BOOL px_allowsImplicitSelectionForProjectOrSharingAction; 
@property (nonatomic,readonly) BOOL px_canRearrangeContent; 
@property (nonatomic,readonly) BOOL px_canAddContent; 
@property (nonatomic,readonly) BOOL px_isUserCreated; 
@property (nonatomic,readonly) BOOL px_isRegularAlbum; 
@property (nonatomic,readonly) BOOL px_isStandInAlbum; 
@property (nonatomic,readonly) BOOL px_isImportedAlbum; 
@property (nonatomic,readonly) BOOL px_isMyPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL px_isUserSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRootSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isMediaTypeSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isAllPhotosSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isFavoritesSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isPlacesSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isHiddenSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyAddedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyDeletedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentsSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyEditedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isScreenRecordingsSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isPanoramasSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isMoment; 
@property (nonatomic,readonly) BOOL px_isHighlight; 
@property (nonatomic,readonly) BOOL px_isSuggestion; 
@property (nonatomic,readonly) BOOL px_isSharedAlbum; 
@property (nonatomic,readonly) BOOL px_isOwnedSharedAlbum; 
@property (nonatomic,readonly) BOOL px_isCloudMultipleContributorsEnabled; 
@property (nonatomic,readonly) BOOL px_isInReadWriteCloudLibrary; 
@property (nonatomic,readonly) BOOL px_isFolder; 
@property (nonatomic,readonly) BOOL px_isRegularFolder; 
@property (nonatomic,readonly) BOOL px_isSmartFolder; 
@property (nonatomic,readonly) BOOL px_isFavoriteMemoriesSmartFolder; 
@property (nonatomic,readonly) BOOL px_isTopLevelFolder; 
@property (nonatomic,readonly) BOOL px_isSharedAlbumsFolder; 
@property (nonatomic,readonly) BOOL px_isSharedAlbumsAndActivityFolder; 
@property (nonatomic,readonly) BOOL px_isMediaTypesFolder; 
@property (nonatomic,readonly) BOOL px_isProjectsFolder; 
@property (nonatomic,readonly) BOOL px_isMacSyncedAlbum; 
@property (nonatomic,readonly) BOOL px_isMacSyncedEventsFolder; 
@property (nonatomic,readonly) BOOL px_isMacSyncedFacesFolder; 
@property (nonatomic,readonly) BOOL px_isProject; 
@property (nonatomic,readonly) BOOL px_isPhotosVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isMomentsVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isMemoriesVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isForYouVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isPeopleVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isSharedActivityVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isTransientPlacesCollection; 
@property (nonatomic,readonly) BOOL px_isImportHistoryCollection; 
@property (nonatomic,readonly) BOOL px_isMyAlbumsVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isSharedAlbumsVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isImportSessionCollection; 
@property (nonatomic,readonly) id px_cheapLogIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAggregation;
-(NSString *)localizedTitle;
-(NSDate *)endDate;
-(BOOL)isEnrichmentComplete;
-(unsigned short)px_highlightEnrichmentState;
-(NSString *)localizedDateDescription;
-(NSString *)localizedSmartDescription;
-(long long)px_highlightKind;
-(id)localizedDateDescriptionWithOptions:(unsigned long long)arg1 ;
-(NSString *)localizedDebugDescription;
-(NSDate *)startDate;
-(BOOL)isEnriched;
-(NSArray *)localizedLocationNames;
-(NSString *)localizedSubtitle;
-(double)promotionScore;
-(unsigned long long)estimatedAssetCount;
-(BOOL)isRecent;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

