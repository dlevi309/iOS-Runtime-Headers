/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSMutableArray, NSMutableDictionary, NSDictionary;

@interface TVPPlaybackReportingEventCollection : NSObject {

	BOOL _isDownloaded;
	BOOL _complete;
	BOOL _initialFPSRequestsComplete;
	long long _videoType;
	NSMutableArray* _eventArray;
	NSMutableDictionary* _openEvents;

}

@property (nonatomic,retain) NSMutableArray * eventArray;                         //@synthesize eventArray=_eventArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * openEvents;                    //@synthesize openEvents=_openEvents - In the implementation block
@property (assign,nonatomic) long long videoType;                                 //@synthesize videoType=_videoType - In the implementation block
@property (assign,nonatomic) BOOL isDownloaded;                                   //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) BOOL complete;                                       //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) BOOL initialFPSRequestsComplete;                     //@synthesize initialFPSRequestsComplete=_initialFPSRequestsComplete - In the implementation block
@property (nonatomic,readonly) NSDictionary * rtcReportingEventDict; 
+(void)initialize;
+(double)_totalTimeSpentDoingFPSFetchesFromEndEvents:(id)arg1 ;
-(id)init;
-(BOOL)complete;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)isDownloaded;
-(long long)videoType;
-(void)setVideoType:(long long)arg1 ;
-(void)_addEventWithName:(id)arg1 type:(long long)arg2 identifier:(id)arg3 value:(id)arg4 timestamp:(id)arg5 forceAdd:(BOOL)arg6 ;
-(NSMutableArray *)eventArray;
-(NSMutableDictionary *)openEvents;
-(void)_closeOpenEvents;
-(void)_setError:(id)arg1 inEventDict:(id)arg2 errorCodeKey:(id)arg3 errorDomainKey:(id)arg4 ;
-(BOOL)initialFPSRequestsComplete;
-(BOOL)containsEventWithName:(id)arg1 ;
-(void)addStartEventWithName:(id)arg1 ;
-(void)addOrReplaceStartEventWithName:(id)arg1 date:(id)arg2 ;
-(void)addStartEventWithName:(id)arg1 identifier:(id)arg2 ;
-(void)addEndEventWithName:(id)arg1 ;
-(void)addEndEventWithName:(id)arg1 identifier:(id)arg2 ;
-(void)addEndEventWithName:(id)arg1 identifier:(id)arg2 timestamp:(id)arg3 ;
-(void)addSingleShotEventWithName:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)rtcReportingEventDict;
-(void)setIsDownloaded:(BOOL)arg1 ;
-(void)setInitialFPSRequestsComplete:(BOOL)arg1 ;
-(void)setEventArray:(NSMutableArray *)arg1 ;
-(void)setOpenEvents:(NSMutableDictionary *)arg1 ;
@end

