/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class MTPAFPlaylistItem, MTPAFPlaylist, MTMediaActivityEventHandler, MTMetricsData;

@interface MTPAFItemActivity : NSObject {

	MTPAFPlaylistItem* _item;
	MTPAFPlaylist* _playlist;
	MTMediaActivityEventHandler* _startEventHandler;
	MTMediaActivityEventHandler* _stopEventHandler;
	MTMetricsData* _startMetricsData;
	MTMetricsData* _stopMetricsData;

}

@property (nonatomic,retain) MTPAFPlaylistItem * item;                                     //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MTPAFPlaylist * playlist;                                     //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MTMediaActivityEventHandler * startEventHandler;              //@synthesize startEventHandler=_startEventHandler - In the implementation block
@property (nonatomic,retain) MTMediaActivityEventHandler * stopEventHandler;               //@synthesize stopEventHandler=_stopEventHandler - In the implementation block
@property (nonatomic,retain) MTMetricsData * startMetricsData;                             //@synthesize startMetricsData=_startMetricsData - In the implementation block
@property (nonatomic,retain) MTMetricsData * stopMetricsData;                              //@synthesize stopMetricsData=_stopMetricsData - In the implementation block
-(MTPAFPlaylistItem *)item;
-(void)setItem:(MTPAFPlaylistItem *)arg1 ;
-(MTPAFPlaylist *)playlist;
-(void)setPlaylist:(MTPAFPlaylist *)arg1 ;
-(void)setStartEventHandler:(MTMediaActivityEventHandler *)arg1 ;
-(void)setStopEventHandler:(MTMediaActivityEventHandler *)arg1 ;
-(MTMetricsData *)startMetricsData;
-(void)startAtOverallPosition:(unsigned long long)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(MTMetricsData *)stopMetricsData;
-(void)stopAtOverallPosition:(unsigned long long)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(MTMediaActivityEventHandler *)startEventHandler;
-(void)setStartMetricsData:(MTMetricsData *)arg1 ;
-(MTMediaActivityEventHandler *)stopEventHandler;
-(void)setStopMetricsData:(MTMetricsData *)arg1 ;
-(void)populatePlaylistAndItemData:(id)arg1 ;
@end

