/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray, NSDictionary, NSMutableDictionary, NSMutableSet, FlexCloudManager, FlexReachability;

@interface FMSongLibrary : NSObject {

	BOOL _networkingIsDisabled;
	BOOL _contactedCloud;
	NSMutableArray* _songs;
	NSDictionary* _options;
	NSMutableDictionary* _songsByUID;
	NSMutableSet* _assetsInFlight;
	FlexCloudManager* _cloudManager;
	FlexReachability* _flexReachability;
	long long _networkStatus;

}

@property (nonatomic,retain) NSMutableArray * songs;                           //@synthesize songs=_songs - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * songsByUID;                 //@synthesize songsByUID=_songsByUID - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetsInFlight;                    //@synthesize assetsInFlight=_assetsInFlight - In the implementation block
@property (nonatomic,retain) FlexCloudManager * cloudManager;                  //@synthesize cloudManager=_cloudManager - In the implementation block
@property (nonatomic,retain) FlexReachability * flexReachability;              //@synthesize flexReachability=_flexReachability - In the implementation block
@property (assign,nonatomic) long long networkStatus;                          //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) BOOL contactedCloud;                              //@synthesize contactedCloud=_contactedCloud - In the implementation block
@property (nonatomic,readonly) BOOL networkingIsDisabled;                      //@synthesize networkingIsDisabled=_networkingIsDisabled - In the implementation block
-(void)dealloc;
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)_setupReachability;
-(long long)networkStatus;
-(void)setNetworkStatus:(long long)arg1 ;
-(BOOL)networkingIsDisabled;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(void)networkStatusChanged:(id)arg1 ;
-(id)fetchSongWithUID:(id)arg1 ;
-(id)fetchSongsWithOptions:(id)arg1 ;
-(void)purgeAllLocalCachedAssetsWithIDs:(id)arg1 ;
-(BOOL)contactedCloud;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2 ;
-(void)_createCloudManager;
-(void)_loadBundledSongs;
-(void)_loadCachedSongs;
-(void)_updateFromCloud;
-(NSMutableDictionary *)songsByUID;
-(NSMutableArray *)songs;
-(void)_notifySongsChanged:(id)arg1 ;
-(void)_downloadProgressChanged:(id)arg1 ;
-(NSMutableSet *)assetsInFlight;
-(void)_notifySongDownloadInProgressChanged:(BOOL)arg1 ;
-(void)setFlexReachability:(FlexReachability *)arg1 ;
-(FlexReachability *)flexReachability;
-(void)setCloudManager:(FlexCloudManager *)arg1 ;
-(void)setContactedCloud:(BOOL)arg1 ;
-(id)registerSongBundleAtPath:(id)arg1 ;
-(BOOL)supportForCloud;
-(void)setSongs:(NSMutableArray *)arg1 ;
-(void)setSongsByUID:(NSMutableDictionary *)arg1 ;
-(void)setAssetsInFlight:(NSMutableSet *)arg1 ;
-(FlexCloudManager *)cloudManager;
-(void)unregisterSongWithID:(id)arg1 ;
-(id)_registerSongs:(id)arg1 ;
-(void)cancelDownloadOfAllAssets;
@end

