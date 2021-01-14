/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/


@class NSURL, NSArray, NSMutableArray;

@interface SFMediaPlayerItem : NSObject {

	BOOL _shouldLoop;
	NSURL* _url;
	NSArray* _playbackNotificationTimeRanges;
	/*^block*/id _timeRangeHandler;
	/*^block*/id _startedHandler;
	/*^block*/id _completedHandler;
	NSMutableArray* _playerItems;
	id _observerToken;

}

@property (nonatomic,retain) NSMutableArray * playerItems;                                 //@synthesize playerItems=_playerItems - In the implementation block
@property (nonatomic,retain) id observerToken;                                             //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL shouldLoop;                                              //@synthesize shouldLoop=_shouldLoop - In the implementation block
@property (nonatomic,copy,readonly) NSArray * playbackNotificationTimeRanges;              //@synthesize playbackNotificationTimeRanges=_playbackNotificationTimeRanges - In the implementation block
@property (nonatomic,copy,readonly) id timeRangeHandler;                                   //@synthesize timeRangeHandler=_timeRangeHandler - In the implementation block
@property (nonatomic,copy) id startedHandler;                                              //@synthesize startedHandler=_startedHandler - In the implementation block
@property (nonatomic,copy) id completedHandler;                                            //@synthesize completedHandler=_completedHandler - In the implementation block
-(id)observerToken;
-(id)initWithURL:(id)arg1 ;
-(id)completedHandler;
-(void)setCompletedHandler:(id)arg1 ;
-(NSURL *)url;
-(id)description;
-(void)setPlayerItem:(id)arg1 ;
-(void)setObserverToken:(id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShouldLoop:(BOOL)arg1 ;
-(BOOL)shouldLoop;
-(id)startedHandler;
-(void)setStartedHandler:(id)arg1 ;
-(NSMutableArray *)playerItems;
-(void)setPlayerItems:(NSMutableArray *)arg1 ;
-(void)setPlaybackNotificationTimeRanges:(id)arg1 withTimeRangeHandler:(/*^block*/id)arg2 ;
-(NSArray *)playbackNotificationTimeRanges;
-(id)timeRangeHandler;
@end

