/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkObserver : NSObject {

	int _musicCellularNetworkingAllowedNotifyToken;
	int _videosPreferencesChangedToken;
	long long _networkUsageCount;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _videosAllowsCellularStreaming;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (assign,getter=isMusicCellularStreamingAllowed,nonatomic) BOOL musicCellularStreamingAllowed; 
@property (assign,getter=isVideoCellularStreamingAllowed,nonatomic) BOOL videoCellularStreamingAllowed; 
@property (assign,getter=isMusicCellularDownloadingAllowed,nonatomic) BOOL musicCellularDownloadingAllowed; 
@property (getter=isStoreCellularNetworkingAllowed,nonatomic,readonly) BOOL storeCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)isUsingNetwork;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(BOOL)isMusicCellularStreamingAllowed;
-(void)setMusicCellularStreamingAllowed:(BOOL)arg1 ;
-(BOOL)isVideoCellularStreamingAllowed;
-(void)setVideoCellularStreamingAllowed:(BOOL)arg1 ;
-(BOOL)isMusicCellularDownloadingAllowed;
-(void)setMusicCellularDownloadingAllowed:(BOOL)arg1 ;
-(BOOL)isStoreCellularNetworkingAllowed;
@end

