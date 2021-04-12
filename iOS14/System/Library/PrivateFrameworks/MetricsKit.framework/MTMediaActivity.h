/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol MTMediaPlaylistItem;
@class MTMetricsData, MTPAFKit;

@interface MTMediaActivity : NSObject {

	long long _type;
	id<MTMediaPlaylistItem> _playlistItem;
	MTMetricsData* _startMetricsData;
	MTMetricsData* _stopMetricsData;
	MTPAFKit* _pafKit;

}

@property (assign,nonatomic,__weak) MTPAFKit * pafKit;                          //@synthesize pafKit=_pafKit - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MTMetricsData * startMetricsData;                  //@synthesize startMetricsData=_startMetricsData - In the implementation block
@property (nonatomic,retain) MTMetricsData * stopMetricsData;                   //@synthesize stopMetricsData=_stopMetricsData - In the implementation block
@property (nonatomic,retain) id<MTMediaPlaylistItem> playlistItem;              //@synthesize playlistItem=_playlistItem - In the implementation block
+(unsigned long long)startOverallPositionForItem:(id)arg1 ;
-(BOOL)isStopped;
-(void)setType:(long long)arg1 ;
-(MTPAFKit *)pafKit;
-(long long)type;
-(MTMetricsData *)startMetricsData;
-(MTMetricsData *)stopMetricsData;
-(void)setPafKit:(MTPAFKit *)arg1 ;
-(void)setPlaylistItem:(id<MTMediaPlaylistItem>)arg1 ;
-(id<MTMediaPlaylistItem>)playlistItem;
-(id)startEventHandler;
-(unsigned long long)positionFromOverallPosition:(unsigned long long)arg1 ;
-(void)setStartMetricsData:(MTMetricsData *)arg1 ;
-(id)stopEventHandler;
-(void)setStopMetricsData:(MTMetricsData *)arg1 ;
-(id)initWithType:(long long)arg1 playlistItem:(id)arg2 pafKit:(id)arg3 ;
-(void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(id)eventDataForTransitioningEvents;
@end

