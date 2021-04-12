/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/GKNATObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;
@class NSRecursiveLock, NSMutableDictionary, NSObject, GKNATObserver_SCContext;

@interface GKNATObserverInternal : GKNATObserver {

	id _delegate;
	SCDynamicStoreRef _dynamicStore;
	NSRecursiveLock* _xNATCheck;
	int _lastReportedNATType;
	int _lastReportedCarrierNATType;
	int _lastReportedNonCarrierNATType;
	NSMutableDictionary* _interfaceInfoDictionary;
	BOOL _nonCarrierInterfacesOnly;
	BOOL _checkTCPAndSSL;
	BOOL _favorNonCarrier;
	BOOL _newCarrierType;
	BOOL _addInRangeFlag;
	BOOL _addCarrierFlag;
	BOOL _ignoreNatTypeCache;
	BOOL _ignoreCarrierBundle;
	int _NATCheckRetryCount;
	double _NATCheckRetryDelay;
	NSMutableDictionary* _currentNetworkNames;
	NSObject*<OS_dispatch_queue> _natCheckQueue;
	NSObject*<OS_dispatch_queue> _reportNATQueue;
	NSObject*<OS_dispatch_group> _natCheckGroup;
	NSObject*<OS_dispatch_semaphore> _natCheckNetNameSema;
	BOOL _fNATCheckQueued;
	BOOL _fNATCheckInProgress;
	GKNATObserver_SCContext* _sccontext;
	BOOL _hasNATCheckStarted;
	BOOL _hasNATCheckEnded;

}
-(id)initWithOptions:(id)arg1 ;
-(void)shouldTryNATCheck;
-(oneway void)release;
-(id)init;
-(unsigned)setCommNATFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 ;
-(id)delegate;
-(id)nameForNetworkWithIPPort:(tagIPPORT*)arg1 interfaceName:(id)arg2 ;
-(unsigned)setFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 isCachedKey:(id)arg4 mask:(unsigned)arg5 ;
-(void)reportNATType;
-(id)copyNatTypeCache_OSXGamedScheme;
-(int)natTypeForCommNATFlags:(unsigned)arg1 isCarrier:(BOOL)arg2 ;
-(void)updateNatTypeCache_CachePlistScheme:(id)arg1 ;
-(unsigned)setSSLFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 ;
-(void)updateNatTypeCache_OSXGamedScheme:(id)arg1 ;
-(id)lookupCachedNATFlagsForNetwork:(id)arg1 ;
-(id)copyNatTypeCachePlistScheme;
-(void)registerForNetworkChanges;
-(void)setDelegate:(id)arg1 ;
-(void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2 ;
-(void)HTTPSCheckWithIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK40*)arg2 useCache:(BOOL)arg3 ;
-(void)HTTPCheckWithIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK40*)arg2 useCache:(BOOL)arg3 ;
-(tagCommNATInfo*)callCommNATTestFromIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK40*)arg2 ;
-(int)currentNATType;
-(BOOL)ensureNatCachePathExists;
-(id)copyNatTypeCache;
-(void)tryNATCheckWithDelay:(double)arg1 ;
-(int)callHTTPTestFromIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK40*)arg2 ToServer:(id)arg3 isSSL:(BOOL)arg4 ;
-(unsigned)setTCPFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 ;
-(void)updateNatTypeCache:(id)arg1 ;
-(void)calculateSummmaryNATType:(int*)arg1 andCarrierNATType:(int*)arg2 andNonCarrierNATType:(int*)arg3 copyInterfaceInfoDictionary:(id*)arg4 ;
-(void)dealloc;
-(void)NATCheckWithIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK40*)arg2 useCache:(BOOL)arg3 ;
-(void)clearRetries;
@end

