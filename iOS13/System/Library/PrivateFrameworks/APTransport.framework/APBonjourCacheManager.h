/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)setServiceType:(NSString *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)forceReportCachedDevices;
-(void)deviceFound:(id)arg1 ;
-(BOOL)deviceLost:(id)arg1 ;
-(void)cacheHKPeerIfNeeded:(id)arg1 pairedPeerInfo:(id)arg2 ;
-(void)setReportDeviceFoundHandler:(id)arg1 ;
-(void)setReportDeviceLostHandler:(id)arg1 ;
-(void)_networkSignatureChanged;
-(void)_pairedPeersChanged;
-(void)_flushCachedItems;
-(void)_deviceFound:(id)arg1 altPairedInfo:(id)arg2 recheck:(BOOL)arg3 event:(long long)arg4 ;
-(void)_removeDuplicateCachedItemsIfFound:(unsigned long long)arg1 identifier:(id)arg2 serialNumber:(id)arg3 manufacturer:(id)arg4 ;
-(void)_updateCachedDeviceInfoWhenRealDeviceIsFound:(id)arg1 event:(long long)arg2 ;
-(void)_addDeviceToCache:(id)arg1 pairedPeerInfo:(id)arg2 event:(long long)arg3 ;
-(void)_reportCachedItemLost:(id)arg1 event:(long long)arg2 ;
-(void)_replaceIfnameFromDNSString:(id)arg1 ;
-(void)_reportCachedItemsLost:(long long)arg1 ;
-(id)_readCachedItems;
-(void)_refreshCachedItems;
-(void)_reportCachedItemsFound:(long long)arg1 ;
-(void)_recheckDevices:(long long)arg1 ;
-(void)_startRetryGetPairedPeersTimer;
-(void)_cancelRetryGetPairedPeers;
-(void)_refreshOrRemoveCachedItem:(id)arg1 ;
-(void)_sanitizeDNSStrings:(id)arg1 ;
-(void)_updateLastSeenTimestamp:(id)arg1 ;
-(BOOL)_writeCachedItems:(id)arg1 ;
-(id)reportDeviceFoundHandler;
-(id)reportDeviceLostHandler;
@end

