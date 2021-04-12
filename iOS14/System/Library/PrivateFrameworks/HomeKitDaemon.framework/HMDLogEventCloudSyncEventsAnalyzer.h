/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>

@class NSMutableDictionary, HMDEventFlagsManager, HMDEventCountersManager, AWDHomeKitCloudSync;

@interface HMDLogEventCloudSyncEventsAnalyzer : HMDLogEventAnalyzer {

	BOOL _uploadMaximumDelayReached;
	BOOL _hasDecryptionFailed;
	BOOL _lastDecryptionFailed;
	unsigned _pushCount;
	unsigned _fetchCount;
	unsigned _uploadCount;
	unsigned _uploadErrorCount;
	unsigned _homeManagerFetchCount;
	unsigned _homeZoneFetchCount;
	unsigned _homeManagerUploadCount;
	unsigned _homeZoneUploadCount;
	unsigned _homeDataBytesFetched;
	unsigned _homeDataBytesPushed;
	unsigned _legacyHomeDataBytesFetched;
	unsigned _legacyHomeDataBytesPushed;
	unsigned long long _dataSyncState;
	NSMutableDictionary* _reasonToCountMap;
	NSMutableDictionary* _errorToCountMap;
	HMDEventFlagsManager* _eventFlagsManager;
	HMDEventCountersManager* _eventCountersManager;

}

@property (assign,nonatomic) unsigned pushCount;                                          //@synthesize pushCount=_pushCount - In the implementation block
@property (assign,nonatomic) unsigned fetchCount;                                         //@synthesize fetchCount=_fetchCount - In the implementation block
@property (assign,nonatomic) unsigned uploadCount;                                        //@synthesize uploadCount=_uploadCount - In the implementation block
@property (assign,nonatomic) BOOL uploadMaximumDelayReached;                              //@synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached - In the implementation block
@property (assign,nonatomic) unsigned uploadErrorCount;                                   //@synthesize uploadErrorCount=_uploadErrorCount - In the implementation block
@property (assign,nonatomic) BOOL hasDecryptionFailed;                                    //@synthesize hasDecryptionFailed=_hasDecryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL lastDecryptionFailed;                                   //@synthesize lastDecryptionFailed=_lastDecryptionFailed - In the implementation block
@property (assign,nonatomic) unsigned long long dataSyncState;                            //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (assign,nonatomic) unsigned homeManagerFetchCount;                              //@synthesize homeManagerFetchCount=_homeManagerFetchCount - In the implementation block
@property (assign,nonatomic) unsigned homeZoneFetchCount;                                 //@synthesize homeZoneFetchCount=_homeZoneFetchCount - In the implementation block
@property (assign,nonatomic) unsigned homeManagerUploadCount;                             //@synthesize homeManagerUploadCount=_homeManagerUploadCount - In the implementation block
@property (assign,nonatomic) unsigned homeZoneUploadCount;                                //@synthesize homeZoneUploadCount=_homeZoneUploadCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reasonToCountMap;                      //@synthesize reasonToCountMap=_reasonToCountMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorToCountMap;                       //@synthesize errorToCountMap=_errorToCountMap - In the implementation block
@property (assign,nonatomic) unsigned homeDataBytesFetched;                               //@synthesize homeDataBytesFetched=_homeDataBytesFetched - In the implementation block
@property (assign,nonatomic) unsigned homeDataBytesPushed;                                //@synthesize homeDataBytesPushed=_homeDataBytesPushed - In the implementation block
@property (assign,nonatomic) unsigned legacyHomeDataBytesFetched;                         //@synthesize legacyHomeDataBytesFetched=_legacyHomeDataBytesFetched - In the implementation block
@property (assign,nonatomic) unsigned legacyHomeDataBytesPushed;                          //@synthesize legacyHomeDataBytesPushed=_legacyHomeDataBytesPushed - In the implementation block
@property (nonatomic,retain) HMDEventFlagsManager * eventFlagsManager;                    //@synthesize eventFlagsManager=_eventFlagsManager - In the implementation block
@property (nonatomic,retain) HMDEventCountersManager * eventCountersManager;              //@synthesize eventCountersManager=_eventCountersManager - In the implementation block
@property (nonatomic,readonly) AWDHomeKitCloudSync * cloudSyncMetricForAWD; 
+(id)sharedAWDServerConnection;
-(unsigned)pushCount;
-(unsigned long long)dataSyncState;
-(void)setPushCount:(unsigned)arg1 ;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(unsigned)fetchCount;
-(void)setFetchCount:(unsigned)arg1 ;
-(HMDEventCountersManager *)eventCountersManager;
-(HMDEventFlagsManager *)eventFlagsManager;
-(unsigned)homeDataBytesFetched;
-(unsigned)homeDataBytesPushed;
-(unsigned)legacyHomeDataBytesFetched;
-(unsigned)legacyHomeDataBytesPushed;
-(void)setEventCountersManager:(HMDEventCountersManager *)arg1 ;
-(void)setEventFlagsManager:(HMDEventFlagsManager *)arg1 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3 eventFlagsManager:(id)arg4 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(void)processLogEvent:(id)arg1 ;
-(void)setUploadCount:(unsigned)arg1 ;
-(void)setUploadErrorCount:(unsigned)arg1 ;
-(void)setUploadMaximumDelayReached:(BOOL)arg1 ;
-(void)setHasDecryptionFailed:(BOOL)arg1 ;
-(void)setLastDecryptionFailed:(BOOL)arg1 ;
-(void)setHomeManagerFetchCount:(unsigned)arg1 ;
-(void)setHomeZoneFetchCount:(unsigned)arg1 ;
-(void)setHomeManagerUploadCount:(unsigned)arg1 ;
-(void)setHomeZoneUploadCount:(unsigned)arg1 ;
-(unsigned)uploadCount;
-(unsigned)uploadErrorCount;
-(BOOL)uploadMaximumDelayReached;
-(BOOL)hasDecryptionFailed;
-(BOOL)lastDecryptionFailed;
-(unsigned)homeManagerFetchCount;
-(unsigned)homeZoneFetchCount;
-(unsigned)homeManagerUploadCount;
-(unsigned)homeZoneUploadCount;
-(AWDHomeKitCloudSync *)cloudSyncMetricForAWD;
-(void)submitAWDCloudSyncMetric:(id)arg1 ;
-(void)clearCloudSyncMetrics;
-(NSMutableDictionary *)reasonToCountMap;
-(id)getTop:(long long)arg1 dictionary:(id)arg2 ;
-(NSMutableDictionary *)errorToCountMap;
-(void)setLegacyHomeDataBytesPushed:(unsigned)arg1 ;
-(void)setHomeDataBytesPushed:(unsigned)arg1 ;
-(void)setLegacyHomeDataBytesFetched:(unsigned)arg1 ;
-(void)setHomeDataBytesFetched:(unsigned)arg1 ;
-(void)setReasonToCountMap:(NSMutableDictionary *)arg1 ;
-(void)setErrorToCountMap:(NSMutableDictionary *)arg1 ;
@end
