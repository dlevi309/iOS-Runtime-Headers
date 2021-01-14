/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRRegistry.h>

@protocol NRNSXPCConnectionProtocol;
@class NSMutableDictionary, NSMutableArray;

@interface NRRegistryClient : NRRegistry {

	NSMutableDictionary* _diffIndexObservers;
	BOOL _optimizeGetState;
	BOOL _outstandingRegistryQuery;
	int _devicesUpdateCounterNotifyToken_dispatch;
	int _devicesUpdateCounterNotifyToken_check;
	id<NRNSXPCConnectionProtocol> _connection;
	unsigned long long _tokenValue;
	unsigned long long _lastDevicesUpdateCounterNotifyTokenValue;
	unsigned long long _backoffDuration;
	NSMutableArray* _registryQueryCompletionBlockEntries;

}

@property (nonatomic,retain,readonly) id<NRNSXPCConnectionProtocol> connection; 
@property (nonatomic,readonly) unsigned long long devicesUpdateCounter; 
@property (nonatomic,retain,readonly) id<NRNSXPCConnectionProtocol> rawConnection; 
+(Class)proxyClass;
+(Class)xpcConnectionClass;
-(void)_connectToDaemon;
-(BOOL)daemonIdle;
-(void)_grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(void)_grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)_queryDataAsyncIfNeededWithBlock:(/*^block*/id)arg1 ;
-(id<NRNSXPCConnectionProtocol>)rawConnection;
-(unsigned long long)devicesUpdateCounter;
-(void)grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(void)grabRegistryWithReadBlockAsync:(/*^block*/id)arg1 ;
-(void)syncGrabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)setCollection:(id)arg1 ;
-(void)removeDiffIndexObserver:(id)arg1 ;
-(id)addDiffIndexObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(id<NRNSXPCConnectionProtocol>)connection;
-(void)invalidate;
-(id)initWithParameters:(id)arg1 ;
@end

