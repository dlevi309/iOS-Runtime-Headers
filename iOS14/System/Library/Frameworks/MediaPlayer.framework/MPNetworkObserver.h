/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isUsingNetwork;
-(void)setVideoCellularStreamingAllowed:(BOOL)arg1 ;
-(id)init;
-(void)setMusicCellularDownloadingAllowed:(BOOL)arg1 ;
-(BOOL)isMusicCellularStreamingAllowed;
-(void)setMusicCellularStreamingAllowed:(BOOL)arg1 ;
-(void)beginUsingNetwork;
-(id)_init;
-(void)endUsingNetwork;
-(BOOL)isMusicCellularDownloadingAllowed;
-(BOOL)isStoreCellularNetworkingAllowed;
-(BOOL)isVideoCellularStreamingAllowed;
-(void)dealloc;
@end

