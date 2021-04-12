/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOBatchOpportunisticTileDownloaderDelegate.h>

@protocol OS_dispatch_queue, GEOProactiveTileDownloaderDelegate, OS_dispatch_source;
@class NSString, NSObject, GEOTileDB, GEODataSaverTileLoaderManager, GEOResourceManifestManager, GEORequestCounter, NSDictionary, NSMutableArray, GEOStaleTileUpdater, GEOBatchOpportunisticTileDownloader, GEOPowerAssertion, GEOXPCActivity;

@interface GEOProactiveTileDownloader : NSObject <GEOBatchOpportunisticTileDownloaderDelegate> {

	NSString* _uniqueIdentifier;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	id<GEOProactiveTileDownloaderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	GEOTileDB* _diskCache;
	NSString* _startCountry;
	NSString* _startRegion;
	GEODataSaverTileLoaderManager* _dataSaverManager;
	GEOResourceManifestManager* _manifestManager;
	GEORequestCounter* _requestCounter;
	GEOOnce_s _didStart;
	GEOOnce_s _didFinish;
	NSDictionary* _testDownloaders;
	NSMutableArray* _remainingPolicies;
	GEOStaleTileUpdater* _staleUpdater;
	unsigned long long _currentPolicy;
	GEOBatchOpportunisticTileDownloader* _currentDownloader;
	BOOL _policyEnabled[1];
	GEOPowerAssertion* _powerAssertion;
	GEOXPCActivity* _activity;
	NSObject*<OS_dispatch_source> _deferCheckinTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesDiscretionaryDownloads;
+(BOOL)_canUseXPCActivity;
+(unsigned long long)maximumDownloadBatchSize;
+(BOOL)shouldDownloadTileType:(int)arg1 ;
-(id)init;
-(void)cancel;
-(void)start;
-(void)_start;
-(void)_finish;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 dataSaverManager:(id)arg4 manifestManager:(id)arg5 requestCounter:(id)arg6 downloaders:(id)arg7 ;
-(void)_pauseIfNecessary;
-(void)_clearXPCDeferralTimer;
-(void)_clearPowerAssertion;
-(void)_xpcActivityFired;
-(void)_takePowerAssertionIfNecessary;
-(void)_registerXPCDeferralTimer;
-(void)_startNextDownloader;
-(void)_registerXPCActivity;
-(void)batchOpportunisticTileDownloader:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7 ;
-(void)batchOpportunisticTileDownloader:(id)arg1 failedToLoadKey:(GEOTileKey)arg2 error:(id)arg3 ;
-(void)batchOpportunisticTileDownloaderDidFinish:(id)arg1 ;
@end

