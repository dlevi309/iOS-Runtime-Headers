/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)enabled;
-(void)readProactiveTileDownloadsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)incrementForApp:(id)arg1 time:(id)arg2 requestId:(id)arg3 requestType:(int)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 withCompletion:(/*^block*/id)arg8 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)purgeAllCounts;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned)arg3 tileDownloadAttempts:(unsigned)arg4 successes:(unsigned)arg5 failures:(unsigned)arg6 bytesDownloaded:(unsigned long long)arg7 ;
-(void)_purgeOlderThan:(id)arg1 ;
-(void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)_recordAnalylticsCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 withFxn:(/*function pointer*/void*)arg4 ;
-(void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(BOOL)arg4 at:(id)arg5 ;
-(void)countsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_tearDown;
-(void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 ;
-(id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2 ;
-(void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5 ;
-(void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)logsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

