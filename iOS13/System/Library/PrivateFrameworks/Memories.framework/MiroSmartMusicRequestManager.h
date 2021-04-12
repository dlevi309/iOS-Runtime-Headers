/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEiOSSharedObject.h>

@class FMSongLibrary, NSSet, MiroAutoEditLogger, NSArray, NSDate;

@interface MiroSmartMusicRequestManager : VEiOSSharedObject {

	BOOL _moodIsDownloading[12];
	BOOL _allowsDownloads;
	BOOL _didLogSongs;
	FMSongLibrary* _library;
	NSSet* _moodIDSet;
	double _initTime;
	MiroAutoEditLogger* _logger;
	NSArray* _observers;
	NSDate* _dateM5Starts;
	NSDate* _dateM5Ends;

}

@property (nonatomic,readonly) FMSongLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSSet * moodIDSet;                        //@synthesize moodIDSet=_moodIDSet - In the implementation block
@property (assign,nonatomic) double initTime;                          //@synthesize initTime=_initTime - In the implementation block
@property (assign,nonatomic) BOOL didLogSongs;                         //@synthesize didLogSongs=_didLogSongs - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (retain) NSArray * observers;                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * dateM5Starts;                    //@synthesize dateM5Starts=_dateM5Starts - In the implementation block
@property (nonatomic,retain) NSDate * dateM5Ends;                      //@synthesize dateM5Ends=_dateM5Ends - In the implementation block
@property (assign,nonatomic) BOOL allowsDownloads;                     //@synthesize allowsDownloads=_allowsDownloads - In the implementation block
-(id)init;
-(void)dealloc;
-(MiroAutoEditLogger *)logger;
-(void)_setup;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
-(FMSongLibrary *)library;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(double)initTime;
-(void)setInitTime:(double)arg1 ;
-(id)fetchAllSongs;
-(id)fetchSongWithUID:(id)arg1 ;
-(id)songLibrary;
-(id)bestLocalSongUIDForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4 ;
-(BOOL)hasEnoughLocalSongsForMoodID:(id)arg1 ;
-(id)recommendSongUIDForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4 ;
-(void)_removeObserversOnLibrary;
-(void)setAllowsDownloads:(BOOL)arg1 ;
-(void)setMoodIDSet:(NSSet *)arg1 ;
-(void)setDateM5Starts:(NSDate *)arg1 ;
-(void)setDateM5Ends:(NSDate *)arg1 ;
-(void)_downloadInProgressChanged:(id)arg1 ;
-(unsigned long long)_indexForMoodID:(id)arg1 ;
-(id)_moodIDforSongUID:(id)arg1 ;
-(void)storeDatePlayedForSongID:(id)arg1 ;
-(id)nextFeaturedSongToDownload;
-(void)_requestDownloadForMoodID:(id)arg1 ;
-(BOOL)_isDownloadingforMoodID:(id)arg1 ;
-(BOOL)allowsDownloads;
-(id)bestSongToDownloadForMoodID:(id)arg1 ;
-(void)_setDownloding:(BOOL)arg1 forMoodID:(id)arg2 ;
-(id)_addObserversOnSongLibrary:(id)arg1 indicateNetworkActivity:(BOOL)arg2 ;
-(id)_featuredSongPredicateForMoodTag:(id)arg1 ;
-(id)_featuredSongSortDescriptor;
-(id)_featuredSongPredicate;
-(NSSet *)moodIDSet;
-(NSDate *)dateM5Starts;
-(NSDate *)dateM5Ends;
-(BOOL)isNowWithinTheM5PromotionDateRange;
-(id)allSongsScoredForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4 localOptions:(int)arg5 ;
-(BOOL)didLogSongs;
-(double)scoreSong:(id)arg1 withKeywords:(id)arg2 ;
-(double)scoreSong:(id)arg1 forSpecialKeywords:(id)arg2 ;
-(double)scoreSong:(id)arg1 withRegionID:(id)arg2 ;
-(double)scoreLocalityForSong:(id)arg1 ;
-(double)scoreSong:(id)arg1 withMusicGenreDistribution:(id)arg2 ;
-(double)scoreSong:(id)arg1 withDateLastSelected:(double)arg2 ;
-(double)scoreSong:(id)arg1 withMoodID:(id)arg2 ;
-(void)setDidLogSongs:(BOOL)arg1 ;
-(BOOL)_isDownloadingAnything;
-(void)markSongUIDAsRequested:(id)arg1 ;
-(void)logSongLibraryInitTimeWithLogger:(id)arg1 ;
-(void)tearDownSongLibrary;
-(id)fetchFeaturedSongsForMoodTag:(id)arg1 ;
-(id)moodIDForSong:(id)arg1 ;
-(id)genreIDsForSong:(id)arg1 ;
-(BOOL)songHasSpecialKeyword:(id)arg1 ;
-(void)purgeAllLocalCachedAssets;
@end

