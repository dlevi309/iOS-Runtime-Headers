/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@protocol TVPMediaItem;
@class NSObject, NSError, NSNumber, NSArray, NSDictionary, TVPStateMachine, TVPMediaItemLoader, TVPDownloadSession, AVAggregateAssetDownloadTask, NSPointerArray, NSProgress, NSMapTable, TVPReportingSession, NSString;

@interface TVPDownload : NSObject <AVAssetDownloadDelegate> {

	BOOL _performKeyFetchOnly;
	BOOL _allowCellularUsage;
	BOOL _allowHDR;
	BOOL _allowMultichannelAudio;
	BOOL _includeDefaultAudioOption;
	BOOL _useLegacyAudioSettings;
	BOOL _downloadIsComplete;
	NSObject*<TVPMediaItem> _mediaItem;
	long long _state;
	NSError* _error;
	NSNumber* _minimumRequiredMediaBitrate;
	NSArray* _preferredAudioLanguageCodes;
	NSDictionary* _userInfo;
	TVPStateMachine* _stateMachine;
	TVPMediaItemLoader* _mediaItemLoader;
	TVPDownloadSession* _downloadSession;
	AVAggregateAssetDownloadTask* _downloadTask;
	NSPointerArray* _delegates;
	NSProgress* _downloadProgress;
	NSMapTable* _mediaSelectionToProgressMap;
	unsigned long long _downloadInitiationBackgroundTask;
	unsigned long long _downloadTerminationBackgroundTask;
	TVPReportingSession* _reportingSession;
	unsigned long long _numMediaSelectionsThatWillReceiveDownloadProgress;
	unsigned long long _numMediaSelectionsCompleted;
	CGSize _minimumRequiredPresentationSize;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                                                 //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                                                    //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) TVPMediaItemLoader * mediaItemLoader;                                              //@synthesize mediaItemLoader=_mediaItemLoader - In the implementation block
@property (assign,nonatomic,__weak) TVPDownloadSession * downloadSession;                                       //@synthesize downloadSession=_downloadSession - In the implementation block
@property (nonatomic,retain) AVAggregateAssetDownloadTask * downloadTask;                                       //@synthesize downloadTask=_downloadTask - In the implementation block
@property (assign,nonatomic) BOOL downloadIsComplete;                                                           //@synthesize downloadIsComplete=_downloadIsComplete - In the implementation block
@property (nonatomic,retain) NSPointerArray * delegates;                                                        //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSProgress * downloadProgress;                                                     //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) NSMapTable * mediaSelectionToProgressMap;                                          //@synthesize mediaSelectionToProgressMap=_mediaSelectionToProgressMap - In the implementation block
@property (assign,nonatomic) unsigned long long downloadInitiationBackgroundTask;                               //@synthesize downloadInitiationBackgroundTask=_downloadInitiationBackgroundTask - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTerminationBackgroundTask;                              //@synthesize downloadTerminationBackgroundTask=_downloadTerminationBackgroundTask - In the implementation block
@property (nonatomic,retain) TVPReportingSession * reportingSession;                                            //@synthesize reportingSession=_reportingSession - In the implementation block
@property (assign,nonatomic) unsigned long long numMediaSelectionsThatWillReceiveDownloadProgress;              //@synthesize numMediaSelectionsThatWillReceiveDownloadProgress=_numMediaSelectionsThatWillReceiveDownloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long numMediaSelectionsCompleted;                                    //@synthesize numMediaSelectionsCompleted=_numMediaSelectionsCompleted - In the implementation block
@property (nonatomic,readonly) double progress; 
@property (assign,nonatomic) BOOL performKeyFetchOnly;                                                          //@synthesize performKeyFetchOnly=_performKeyFetchOnly - In the implementation block
@property (assign,nonatomic) BOOL allowCellularUsage;                                                           //@synthesize allowCellularUsage=_allowCellularUsage - In the implementation block
@property (assign,nonatomic) CGSize minimumRequiredPresentationSize;                                            //@synthesize minimumRequiredPresentationSize=_minimumRequiredPresentationSize - In the implementation block
@property (nonatomic,retain) NSNumber * minimumRequiredMediaBitrate;                                            //@synthesize minimumRequiredMediaBitrate=_minimumRequiredMediaBitrate - In the implementation block
@property (assign,nonatomic) BOOL allowHDR;                                                                     //@synthesize allowHDR=_allowHDR - In the implementation block
@property (assign,nonatomic) BOOL allowMultichannelAudio;                                                       //@synthesize allowMultichannelAudio=_allowMultichannelAudio - In the implementation block
@property (assign,nonatomic) BOOL includeDefaultAudioOption;                                                    //@synthesize includeDefaultAudioOption=_includeDefaultAudioOption - In the implementation block
@property (nonatomic,retain) NSArray * preferredAudioLanguageCodes;                                             //@synthesize preferredAudioLanguageCodes=_preferredAudioLanguageCodes - In the implementation block
@property (assign,nonatomic) BOOL useLegacyAudioSettings;                                                       //@synthesize useLegacyAudioSettings=_useLegacyAudioSettings - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                                           //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSDictionary *)userInfo;
-(void)failWithError:(id)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)pause;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)progress;
-(long long)state;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(TVPReportingSession *)reportingSession;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_TV2)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_TV2)arg5 forMediaSelection:(id)arg6 ;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(NSPointerArray *)delegates;
-(void)setDelegates:(NSPointerArray *)arg1 ;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setReportingSession:(TVPReportingSession *)arg1 ;
-(NSProgress *)downloadProgress;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(id)descriptionForState:(long long)arg1 ;
-(void)setDownloadTask:(AVAggregateAssetDownloadTask *)arg1 ;
-(AVAggregateAssetDownloadTask *)downloadTask;
-(void)_registerStateMachineHandlers;
-(TVPMediaItemLoader *)mediaItemLoader;
-(void)setMediaItemLoader:(TVPMediaItemLoader *)arg1 ;
-(void)_mediaItemLoaderStateDidChangeTo:(id)arg1 ;
-(NSMapTable *)mediaSelectionToProgressMap;
-(unsigned long long)numMediaSelectionsCompleted;
-(void)setNumMediaSelectionsCompleted:(unsigned long long)arg1 ;
-(unsigned long long)numMediaSelectionsThatWillReceiveDownloadProgress;
-(unsigned long long)downloadTerminationBackgroundTask;
-(void)setDownloadTerminationBackgroundTask:(unsigned long long)arg1 ;
-(void)setDownloadIsComplete:(BOOL)arg1 ;
-(TVPDownloadSession *)downloadSession;
-(void)setNumMediaSelectionsThatWillReceiveDownloadProgress:(unsigned long long)arg1 ;
-(unsigned long long)downloadInitiationBackgroundTask;
-(void)setDownloadInitiationBackgroundTask:(unsigned long long)arg1 ;
-(BOOL)allowCellularUsage;
-(BOOL)performKeyFetchOnly;
-(BOOL)useLegacyAudioSettings;
-(BOOL)includeDefaultAudioOption;
-(NSArray *)preferredAudioLanguageCodes;
-(BOOL)allowMultichannelAudio;
-(CGSize)minimumRequiredPresentationSize;
-(NSNumber *)minimumRequiredMediaBitrate;
-(BOOL)allowHDR;
-(BOOL)downloadIsComplete;
-(id)initWithMediaItem:(id)arg1 downloadSession:(id)arg2 existingDownloadTask:(id)arg3 ;
-(void)setPerformKeyFetchOnly:(BOOL)arg1 ;
-(void)setAllowCellularUsage:(BOOL)arg1 ;
-(void)setMinimumRequiredPresentationSize:(CGSize)arg1 ;
-(void)setMinimumRequiredMediaBitrate:(NSNumber *)arg1 ;
-(void)setAllowHDR:(BOOL)arg1 ;
-(void)setAllowMultichannelAudio:(BOOL)arg1 ;
-(void)setIncludeDefaultAudioOption:(BOOL)arg1 ;
-(void)setPreferredAudioLanguageCodes:(NSArray *)arg1 ;
-(void)setUseLegacyAudioSettings:(BOOL)arg1 ;
-(void)setDownloadSession:(TVPDownloadSession *)arg1 ;
-(void)setMediaSelectionToProgressMap:(NSMapTable *)arg1 ;
@end

