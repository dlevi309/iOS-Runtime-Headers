/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOSQLiteDB;

@interface GEORequestCounterPersistence : NSObject {

	GEOSQLiteDB* _db;
	double _maxAge;
	BOOL _enabled;

}

@property (assign,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_tearDown;
-(void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4 ;
-(void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 ;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned)arg3 tileDownloadAttempts:(unsigned)arg4 successes:(unsigned)arg5 failures:(unsigned)arg6 bytesDownloaded:(unsigned long long)arg7 ;
-(void)readProactiveTileDownloadsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(BOOL)arg4 at:(id)arg5 ;
-(void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5 ;
-(void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)countsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)purgeAllCounts;
-(void)incrementForApp:(id)arg1 time:(id)arg2 requestId:(id)arg3 requestType:(unsigned char)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 withCompletion:(/*^block*/id)arg8 ;
-(id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2 ;
-(void)_purgeOlderThan:(id)arg1 ;
-(void)_recordAnalylticsCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 withFxn:(/*function pointer*/void*)arg4 ;
@end

