/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEORequestCounterProtocol.h>

@class GEORequestCounterPersistence, NSString;

@interface GEORequestCounterLocalProxy : NSObject <GEORequestCounterProtocol> {

	GEORequestCounterPersistence* _persistence;

}

@property (assign,nonatomic) BOOL countersEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readProactiveTileDownloadsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)readRequestLogsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned)arg3 tileDownloadAttempts:(unsigned)arg4 successes:(unsigned)arg5 failures:(unsigned)arg6 bytesDownloaded:(unsigned long long)arg7 ;
-(void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)readRequestsPerAppSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)startPowerLogSessionWithName:(id)arg1 ;
-(void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(BOOL)arg4 at:(id)arg5 ;
-(id)requestCounterTicketForType:(SCD_Struct_GE91)arg1 appId:(id)arg2 ;
-(BOOL)countersEnabled;
-(void)setCountersEnabled:(BOOL)arg1 ;
-(void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)clearCounters;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 ;
-(void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5 ;
-(void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(id)initWithPersistence:(id)arg1 ;
@end

