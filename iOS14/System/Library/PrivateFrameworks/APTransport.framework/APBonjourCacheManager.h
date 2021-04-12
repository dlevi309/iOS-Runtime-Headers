/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <APTransport/APTransport-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSObject, NSString, CUCoalescer, CUSystemMonitor;

@interface APBonjourCacheManager : NSObject {

	BOOL _cacheChanged;
	NSMutableDictionary* _cachedItems;
	NSMutableSet* _removedItems;
	NSMutableDictionary* _deviceMap;
	int _pairedPeersChangedToken;
	BOOL _pairedPeersGetting;
	NSMutableDictionary* _pairedPeersMap;
	NSObject*<OS_dispatch_source> _retryTimer;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSString* _networkSignature;
	double _networkSignatureWasValidAt;
	CUCoalescer* _writeCoaleser;
	CUSystemMonitor* _systemMonitor;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _reportDeviceFoundHandler;
	/*^block*/id _reportDeviceLostHandler;
	NSString* _serviceType;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id reportDeviceFoundHandler;                               //@synthesize reportDeviceFoundHandler=_reportDeviceFoundHandler - In the implementation block
@property (nonatomic,copy) id reportDeviceLostHandler;                                //@synthesize reportDeviceLostHandler=_reportDeviceLostHandler - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
-(void)_cancelRetryGetPairedPeers;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_deviceFound:(id)arg1 altPairedInfo:(id)arg2 recheck:(BOOL)arg3 event:(long long)arg4 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)_readCachedItems;
-(id)reportDeviceLostHandler;
-(id)init;
-(void)_refreshOrRemoveCachedItem:(id)arg1 ;
-(void)_reportCachedItemsLost:(long long)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_pairedPeersChanged;
-(BOOL)deviceLost:(id)arg1 ;
-(void)_replaceIfnameFromDNSString:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setReportDeviceLostHandler:(id)arg1 ;
-(void)_updateLastSeenTimestamp:(id)arg1 ;
-(void)forceReportCachedDevices;
-(void)_reportCachedItemsFound:(long long)arg1 ;
-(void)_removeDuplicateCachedItemsIfFound:(unsigned long long)arg1 identifier:(id)arg2 serialNumber:(id)arg3 manufacturer:(id)arg4 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)_refreshCachedItems;
-(void)_reportCachedItemLost:(id)arg1 event:(long long)arg2 ;
-(void)_addDeviceToCache:(id)arg1 pairedPeerInfo:(id)arg2 event:(long long)arg3 ;
-(void)_startRetryGetPairedPeersTimer;
-(void)_invalidated;
-(void)invalidate;
-(void)deviceFound:(id)arg1 ;
-(void)_flushCachedItems;
-(id)reportDeviceFoundHandler;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(void)cacheHKPeerIfNeeded:(id)arg1 pairedPeerInfo:(id)arg2 ;
-(void)_recheckDevices:(long long)arg1 ;
-(void)_networkSignatureChanged;
-(id)invalidationHandler;
-(BOOL)_writeCachedItems:(id)arg1 ;
-(void)_sanitizeDNSStrings:(id)arg1 ;
-(NSString *)label;
-(void)_updateCachedDeviceInfoWhenRealDeviceIsFound:(id)arg1 event:(long long)arg2 ;
-(void)setReportDeviceFoundHandler:(id)arg1 ;
-(void)dealloc;
@end

