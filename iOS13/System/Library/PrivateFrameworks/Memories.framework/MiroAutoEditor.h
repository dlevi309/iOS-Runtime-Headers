/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class MiroMemory, Project, MovieController, NSDate, VEKProgressWatcher, NSOperationQueue;

@interface MiroAutoEditor : NSObject {

	BOOL _shouldBuildMovieController;
	BOOL _shouldSave;
	BOOL _topLevelCancel;
	float _downloadProgress;
	float _progress;
	int _downloadPolicy;
	MiroMemory* _memory;
	Project* _project;
	long long _remainingAssetsToDownload;
	MovieController* _movieController;
	id _observer;
	/*^block*/id _downloadCompleted;
	NSDate* _prepareStartedTime;
	NSDate* _tapStartedTime;
	double _autoEditStartedTimePPT;
	double _autoEditFinishedTimePPT;
	double _uiDidLoadTimePPT;
	double _uiDidAppearTimePPT;
	double _playbackStartedTimePPT;
	VEKProgressWatcher* _watcherProperty;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) MiroMemory * memory;                            //@synthesize memory=_memory - In the implementation block
@property (retain) Project * project;                                        //@synthesize project=_project - In the implementation block
@property (assign) long long remainingAssetsToDownload;                      //@synthesize remainingAssetsToDownload=_remainingAssetsToDownload - In the implementation block
@property (assign) float downloadProgress;                                   //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) float progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) id<MiroSequence> sequence; 
@property (assign) BOOL shouldBuildMovieController;                          //@synthesize shouldBuildMovieController=_shouldBuildMovieController - In the implementation block
@property (retain) MovieController * movieController;                        //@synthesize movieController=_movieController - In the implementation block
@property (assign) BOOL shouldSave;                                          //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign) int downloadPolicy;                                       //@synthesize downloadPolicy=_downloadPolicy - In the implementation block
@property (assign) BOOL topLevelCancel;                                      //@synthesize topLevelCancel=_topLevelCancel - In the implementation block
@property (nonatomic,retain) id observer;                                    //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) id downloadCompleted;                             //@synthesize downloadCompleted=_downloadCompleted - In the implementation block
@property (retain) NSDate * prepareStartedTime;                              //@synthesize prepareStartedTime=_prepareStartedTime - In the implementation block
@property (retain) NSDate * tapStartedTime;                                  //@synthesize tapStartedTime=_tapStartedTime - In the implementation block
@property (assign) double autoEditStartedTimePPT;                            //@synthesize autoEditStartedTimePPT=_autoEditStartedTimePPT - In the implementation block
@property (assign) double autoEditFinishedTimePPT;                           //@synthesize autoEditFinishedTimePPT=_autoEditFinishedTimePPT - In the implementation block
@property (assign) double uiDidLoadTimePPT;                                  //@synthesize uiDidLoadTimePPT=_uiDidLoadTimePPT - In the implementation block
@property (assign) double uiDidAppearTimePPT;                                //@synthesize uiDidAppearTimePPT=_uiDidAppearTimePPT - In the implementation block
@property (assign) double playbackStartedTimePPT;                            //@synthesize playbackStartedTimePPT=_playbackStartedTimePPT - In the implementation block
@property (retain) VEKProgressWatcher * watcherProperty;                     //@synthesize watcherProperty=_watcherProperty - In the implementation block
+(id)sharedInstanceForPregenerate;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)observer;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(MiroMemory *)memory;
-(void)setObserver:(id)arg1 ;
-(void)setSequence:(id<MiroSequence>)arg1 ;
-(id<MiroSequence>)sequence;
-(BOOL)isBusy;
-(void)setProgress:(float)arg1 ;
-(void)_cancel;
-(void)updateProgress:(float)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(void)setDownloadPolicy:(int)arg1 ;
-(int)downloadPolicy;
-(void)setShouldSave:(BOOL)arg1 ;
-(BOOL)shouldSave;
-(void)setMovieController:(MovieController *)arg1 ;
-(MovieController *)movieController;
-(void)updateDownloadProgress:(float)arg1 ;
-(Project *)project;
-(void)cancelAutoEdit;
-(void)pregenerateMemory:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithMemory:(id)arg1 shouldBuildMovieController:(BOOL)arg2 ;
-(void)_autoEditMemory:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performPersistWithPersistableThing:(id)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(id)initForPregenerate;
-(BOOL)shouldBuildMovieController;
-(void)_downloadSongForPregenrateWithMemory:(id)arg1 ;
-(void)_logMemoryStuff:(id)arg1 ;
-(void)fetchAndPrintAssets:(id)arg1 andMemory:(id)arg2 ;
-(void)logFreeze:(id)arg1 message:(id)arg2 ;
-(void)setTopLevelCancel:(BOOL)arg1 ;
-(double)autoEditStartedTimePPT;
-(void)setAutoEditStartedTimePPT:(double)arg1 ;
-(double)autoEditFinishedTimePPT;
-(void)setAutoEditFinishedTimePPT:(double)arg1 ;
-(void)setRemainingAssetsToDownload:(long long)arg1 ;
-(BOOL)shouldNotifyProgress;
-(void)performAutoEdit;
-(void)performAutoEditWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isAutoEditing;
-(void)updateProject:(id)arg1 ;
-(void)updateRemainingAssetsToDownload:(long long)arg1 ;
-(void)updateMovieController:(id)arg1 ;
-(long long)remainingAssetsToDownload;
-(void)setShouldBuildMovieController:(BOOL)arg1 ;
-(BOOL)topLevelCancel;
-(id)downloadCompleted;
-(void)setDownloadCompleted:(id)arg1 ;
-(NSDate *)prepareStartedTime;
-(void)setPrepareStartedTime:(NSDate *)arg1 ;
-(NSDate *)tapStartedTime;
-(void)setTapStartedTime:(NSDate *)arg1 ;
-(double)uiDidLoadTimePPT;
-(void)setUiDidLoadTimePPT:(double)arg1 ;
-(double)uiDidAppearTimePPT;
-(void)setUiDidAppearTimePPT:(double)arg1 ;
-(double)playbackStartedTimePPT;
-(void)setPlaybackStartedTimePPT:(double)arg1 ;
-(VEKProgressWatcher *)watcherProperty;
-(void)setWatcherProperty:(VEKProgressWatcher *)arg1 ;
@end

