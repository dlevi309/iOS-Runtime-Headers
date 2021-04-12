/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol CPAnalyticsEventProtocol;
@interface _PXAnalyticsSlideshowInfo : NSObject {

	id<CPAnalyticsEventProtocol> _startEvent;
	id<CPAnalyticsEventProtocol> _endEvent;
	id<CPAnalyticsEventProtocol> _lastPauseEvent;
	double _timePaused;
	long long _pauseCount;
	long long _signpostID;
	long long _appSuspensionCount;

}

@property (nonatomic,retain) id<CPAnalyticsEventProtocol> startEvent;                    //@synthesize startEvent=_startEvent - In the implementation block
@property (nonatomic,retain) id<CPAnalyticsEventProtocol> endEvent;                      //@synthesize endEvent=_endEvent - In the implementation block
@property (nonatomic,readonly) id<CPAnalyticsEventProtocol> lastPauseEvent;              //@synthesize lastPauseEvent=_lastPauseEvent - In the implementation block
@property (nonatomic,readonly) double timePaused;                                        //@synthesize timePaused=_timePaused - In the implementation block
@property (nonatomic,readonly) long long pauseCount;                                     //@synthesize pauseCount=_pauseCount - In the implementation block
@property (assign,nonatomic) long long signpostID;                                       //@synthesize signpostID=_signpostID - In the implementation block
@property (assign,nonatomic) long long appSuspensionCount;                               //@synthesize appSuspensionCount=_appSuspensionCount - In the implementation block
-(void)setSignpostID:(long long)arg1 ;
-(long long)signpostID;
-(id<CPAnalyticsEventProtocol>)endEvent;
-(id<CPAnalyticsEventProtocol>)startEvent;
-(double)timePaused;
-(void)pauseWithEvent:(id)arg1 ;
-(void)setAppSuspensionCount:(long long)arg1 ;
-(long long)appSuspensionCount;
-(void)unpauseWithEvent:(id)arg1 ;
-(void)setStartEvent:(id<CPAnalyticsEventProtocol>)arg1 ;
-(void)setEndEvent:(id<CPAnalyticsEventProtocol>)arg1 ;
-(id<CPAnalyticsEventProtocol>)lastPauseEvent;
-(long long)pauseCount;
@end

