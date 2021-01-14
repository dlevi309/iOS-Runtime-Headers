/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOPlaceDataProxy.h>

@protocol OS_dispatch_source;
@class geo_reentrant_isolater, NSMapTable, NSMutableOrderedSet, _GEOPlaceDataPendingRequestManager, GEOPDPlaceCache, NSObject, NSString;

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {

	geo_reentrant_isolater* _accessIsolater;
	NSMapTable* _pendingRequests;
	NSMutableOrderedSet* _recentlySeenPlaceHashes;
	_GEOPlaceDataPendingRequestManager* _pendingRequestManager;
	GEOPDPlaceCache* _pdPlaceCache;
	NSObject*<OS_dispatch_source> _requestTimeoutTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(id)init;
-(void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)_resetRequestTimeout;
-(unsigned long long)shrinkBySizeSync:(unsigned long long)arg1 ;
-(void)_requestIdentifiersFromNetwork:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 finished:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(void)clearCache;
-(void)trackPlaceData:(id)arg1 ;
-(void)_cleanupPendingRequestMananger;
-(void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1 ;
-(void)_callHistoryRecentsClearedObserver:(id)arg1 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)calculateFreeableSpaceSync;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(/*^block*/id)arg7 requesterHandler:(/*^block*/id)arg8 ;
-(void)_privacyAndLocationSettingsResetObserver:(id)arg1 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)cancelRequest:(id)arg1 ;
-(void)dealloc;
@end

