/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaDownloadObserver.h>

@class NSSet, MPLibraryKeepLocalStatusObserverConfiguration, NSString;

@interface MPLibraryKeepLocalStatusObserver : NSObject <MPMediaDownloadObserver> {

	NSSet* _activeDownloads;
	NSSet* _pausedDownloads;
	MPLibraryKeepLocalStatusObserverConfiguration* _configuration;
	unsigned long long _downloadPausedReason;
	/*^block*/id _statusBlock;
	MPLibraryActiveKeepLocalStatus _currentStatus;

}

@property (nonatomic,retain) MPLibraryKeepLocalStatusObserverConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) MPLibraryActiveKeepLocalStatus currentStatus;                             //@synthesize currentStatus=_currentStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadPausedReason;                                  //@synthesize downloadPausedReason=_downloadPausedReason - In the implementation block
@property (nonatomic,copy) id statusBlock;                                                               //@synthesize statusBlock=_statusBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setConfiguration:(MPLibraryKeepLocalStatusObserverConfiguration *)arg1 ;
-(MPLibraryKeepLocalStatusObserverConfiguration *)configuration;
-(MPLibraryActiveKeepLocalStatus)currentStatus;
-(void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2 ;
-(void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2 ;
-(void)_transientStateDidChangeNotification:(id)arg1 ;
-(void)_handleDownloadStateChanged:(id)arg1 ;
-(id)_pausedDownloadForIdentifierSet:(id)arg1 ;
-(id)_activeDownloadForIdentifierSet:(id)arg1 ;
-(MPLibraryActiveKeepLocalStatus)_calculateCurrentStatus;
-(BOOL)_updateActiveDownloadsAllowingDownloadRemoval:(BOOL)arg1 ;
-(void)_updateCurrentStatus;
-(unsigned long long)downloadPausedReason;
-(id)statusBlock;
-(void)setStatusBlock:(id)arg1 ;
@end

