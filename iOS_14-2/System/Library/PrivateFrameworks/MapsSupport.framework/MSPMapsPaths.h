/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSURL, NSString;

@interface MSPMapsPaths : NSObject {

	NSURL* _libraryURL;
	NSURL* _groupLibraryURL;
	/*^block*/id _invalidationHandler;
	NSString* _mapsDirectory;
	NSString* _cacheDirectory;
	NSString* _groupDirectory;
	NSString* _nanoDirectory;
	NSString* _geoPinnedPlacesSettingsPath;
	NSString* _geoCollectionsSettingsPath;
	NSString* _bookmarksSettingsPath;
	NSString* _geoBookmarksSettingsPath;
	NSString* _directionsSettingsPath;
	NSString* _historySettingsPath;
	NSString* _geoHistorySettingsPath;
	NSString* _nanoHistorySettingsPath;
	NSString* _failedSearchesSettingsPath;
	NSString* _failedGeoSearchesSettingsPath;
	NSString* _failedDirectionsSettingsPath;
	NSString* _failedGeoDirectionsSettingsPath;
	NSString* _routingAppLaunchRecordPath;
	NSString* _directionsCachePath;
	NSString* _pinsSettingsPath;
	NSString* _reportAProblemDirectionsRecordingsPath;
	NSString* _reportAProblemSearchRecordingsPath;
	NSString* _reportAProblemNotificationsPath;
	NSString* _favoritesSyncedMarkerFile;
	NSString* _historySyncedMarkerFile;

}

@property (nonatomic,readonly) NSString * homeDirectory; 
@property (nonatomic,readonly) NSString * mapsDirectory;                                                    //@synthesize mapsDirectory=_mapsDirectory - In the implementation block
@property (nonatomic,readonly) NSString * cacheDirectory;                                                   //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,readonly) NSString * groupDirectory;                                                   //@synthesize groupDirectory=_groupDirectory - In the implementation block
@property (nonatomic,readonly) NSString * nanoDirectory;                                                    //@synthesize nanoDirectory=_nanoDirectory - In the implementation block
@property (nonatomic,readonly) NSString * geoPinnedPlacesSettingsPath;                                      //@synthesize geoPinnedPlacesSettingsPath=_geoPinnedPlacesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoCollectionsSettingsPath;                                       //@synthesize geoCollectionsSettingsPath=_geoCollectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * bookmarksSettingsPath;                                            //@synthesize bookmarksSettingsPath=_bookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoBookmarksSettingsPath;                                         //@synthesize geoBookmarksSettingsPath=_geoBookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsSettingsPath;                                           //@synthesize directionsSettingsPath=_directionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * historySettingsPath;                                              //@synthesize historySettingsPath=_historySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoHistorySettingsPath;                                           //@synthesize geoHistorySettingsPath=_geoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * nanoHistorySettingsPath;                                          //@synthesize nanoHistorySettingsPath=_nanoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedSearchesSettingsPath;                                       //@synthesize failedSearchesSettingsPath=_failedSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoSearchesSettingsPath;                                    //@synthesize failedGeoSearchesSettingsPath=_failedGeoSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoDirectionsSettingsPath;                                  //@synthesize failedGeoDirectionsSettingsPath=_failedGeoDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedDirectionsSettingsPath;                                     //@synthesize failedDirectionsSettingsPath=_failedDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * routingAppLaunchRecordPath;                                       //@synthesize routingAppLaunchRecordPath=_routingAppLaunchRecordPath - In the implementation block
@property (nonatomic,readonly) NSString * pinsSettingsPath;                                                 //@synthesize pinsSettingsPath=_pinsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsCachePath;                                              //@synthesize directionsCachePath=_directionsCachePath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemDirectionsRecordingsPath;                           //@synthesize reportAProblemDirectionsRecordingsPath=_reportAProblemDirectionsRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemSearchRecordingsPath;                               //@synthesize reportAProblemSearchRecordingsPath=_reportAProblemSearchRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemNotificationsPath;                                  //@synthesize reportAProblemNotificationsPath=_reportAProblemNotificationsPath - In the implementation block
@property (nonatomic,readonly) NSString * favoritesSyncedMarkerFile;                                        //@synthesize favoritesSyncedMarkerFile=_favoritesSyncedMarkerFile - In the implementation block
@property (nonatomic,readonly) BOOL shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile; 
@property (nonatomic,readonly) NSString * historySyncedMarkerFile;                                          //@synthesize historySyncedMarkerFile=_historySyncedMarkerFile - In the implementation block
@property (nonatomic,readonly) BOOL shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile; 
+(id)routingAppLaunchRecordPath;
+(id)nanoHistorySettingsPath;
+(id)failedSearchesSettingsPath;
+(id)favoritesSyncedMarkerFile;
+(id)geoCollectionsSettingsPath;
+(id)geoPinnedPlacesSettingsPath;
+(id)reportAProblemDirectionsRecordingsPath;
+(id)reportAProblemNotificationsPath;
+(id)geoBookmarksSettingsPath;
+(id)nanoDirectory;
+(id)failedGeoDirectionsSettingsPath;
+(id)directionsCachePath;
+(id)pinsSettingsPath;
+(id)directionsSettingsPath;
+(id)geoHistorySettingsPath;
+(id)mapsApplicationContainerPaths;
+(id)groupDirectory;
+(id)cacheDirectory;
+(id)historySyncedMarkerFile;
+(id)reportAProblemSearchRecordingsPath;
+(id)historySettingsPath;
+(id)currentMapsGroupContainerURL;
+(id)currentMapsApplicationContainerURL;
+(id)pathsAtLocation:(long long)arg1 ;
+(id)failedGeoSearchesSettingsPath;
+(id)mapsApplicationContainerPathsWithInvalidationHandler:(/*^block*/id)arg1 ;
+(id)bookmarksSettingsPath;
+(id)mapsDirectory;
+(id)failedDirectionsSettingsPath;
-(NSString *)routingAppLaunchRecordPath;
-(NSString *)nanoHistorySettingsPath;
-(NSString *)failedSearchesSettingsPath;
-(NSString *)favoritesSyncedMarkerFile;
-(NSString *)geoCollectionsSettingsPath;
-(NSString *)geoPinnedPlacesSettingsPath;
-(NSString *)reportAProblemDirectionsRecordingsPath;
-(NSString *)reportAProblemNotificationsPath;
-(void)_invalidate;
-(NSString *)geoBookmarksSettingsPath;
-(NSString *)nanoDirectory;
-(NSString *)failedGeoDirectionsSettingsPath;
-(NSString *)directionsCachePath;
-(NSString *)pinsSettingsPath;
-(NSString *)directionsSettingsPath;
-(NSString *)geoHistorySettingsPath;
-(NSString *)groupDirectory;
-(NSString *)cacheDirectory;
-(NSString *)historySyncedMarkerFile;
-(NSString *)reportAProblemSearchRecordingsPath;
-(NSString *)historySettingsPath;
-(BOOL)deleteHistorySyncedMarkerFile;
-(NSString *)homeDirectory;
-(BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg1 ;
-(BOOL)_deleteSyncedFileAtPath:(id)arg1 ;
-(NSString *)failedGeoSearchesSettingsPath;
-(NSString *)bookmarksSettingsPath;
-(BOOL)shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;
-(BOOL)deleteFavoritesSyncedMarkerFile;
-(BOOL)shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
-(id)initWithLibraryDirectoryURL:(id)arg1 groupLibraryURL:(id)arg2 invalidationHandler:(/*^block*/id)arg3 ;
-(NSString *)mapsDirectory;
-(NSString *)failedDirectionsSettingsPath;
@end

