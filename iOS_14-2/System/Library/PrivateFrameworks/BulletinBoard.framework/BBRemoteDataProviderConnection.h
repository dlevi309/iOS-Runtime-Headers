/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBRemoteDataProviderDelegate.h>
#import <libobjc.A.dylib/BBDataProviderConnectionServerProxy.h>
#import <libobjc.A.dylib/BBDataProviderStore.h>

@protocol BBRemoteDataProviderStoreDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore> {

	BOOL _connected;
	id<BBRemoteDataProviderStoreDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dataProvidersBySectionID;
	NSMutableDictionary* _dataProvidersByUniversalSectionID;
	BOOL _clientReady;
	NSString* _serviceName;
	NSString* _bundleID;

}

@property (nonatomic,copy) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isConnected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(void)performBlockOnDataProviders:(/*^block*/id)arg1 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadAllDataProviders;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setConnected:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeDataProvider:(id)arg1 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)addParentSectionFactory:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithServiceName:(id)arg1 bundleID:(id)arg2 delegate:(id)arg3 ;
-(NSString *)bundleID;
-(void)_queue_removeDataProvider:(id)arg1 ;
-(void)remoteDataProviderNeedsToWakeClient:(id)arg1 ;
-(NSString *)serviceName;
-(void)removeDataProviderWithSectionID:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)dataProvidersForUniversalSectionID:(id)arg1 ;
-(void)clientIsReady:(/*^block*/id)arg1 ;
@end

