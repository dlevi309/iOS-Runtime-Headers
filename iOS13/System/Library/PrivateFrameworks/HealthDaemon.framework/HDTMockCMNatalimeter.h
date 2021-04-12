/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <CoreMotion/CMNatalimeter.h>

@interface HDTMockCMNatalimeter : CMNatalimeter {

	/*^block*/id _handleQueryDataSinceRecord;
	/*^block*/id _handleStartNatalimetryUpdates;
	/*^block*/id _handleStopNatalimeteryUpdates;

}

@property (nonatomic,copy) id handleQueryDataSinceRecord;                 //@synthesize handleQueryDataSinceRecord=_handleQueryDataSinceRecord - In the implementation block
@property (nonatomic,copy) id handleStartNatalimetryUpdates;              //@synthesize handleStartNatalimetryUpdates=_handleStartNatalimetryUpdates - In the implementation block
@property (nonatomic,copy) id handleStopNatalimeteryUpdates;              //@synthesize handleStopNatalimeteryUpdates=_handleStopNatalimeteryUpdates - In the implementation block
-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopAbsoluteNatalimetryDataUpdates;
-(id)handleQueryDataSinceRecord;
-(void)setHandleQueryDataSinceRecord:(id)arg1 ;
-(id)handleStartNatalimetryUpdates;
-(void)setHandleStartNatalimetryUpdates:(id)arg1 ;
-(id)handleStopNatalimeteryUpdates;
-(void)setHandleStopNatalimeteryUpdates:(id)arg1 ;
@end

