/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSDaemonListenerVendor.h>

@protocol PDSCDCachePDSKVStore;
@class PDSConfiguration, PDSXPCServer, PDSCDCacheContainer, PDSBag, PDSEntryStore, PDSUserTracker, PDSCoordinator, PDSRequestQueue, NSString;

@interface PDSDaemon : NSObject <PDSDaemonListenerVendor> {

	PDSConfiguration* _configuration;
	PDSXPCServer* _XPCServer;
	PDSCDCacheContainer* _cacheContainer;
	PDSBag* _bag;
	PDSEntryStore* _entryStore;
	id<PDSCDCache><PDSKVStore> _underlyingStorage;
	PDSUserTracker* _userTracker;
	PDSCoordinator* _coordinator;
	PDSRequestQueue* _requestQueue;

}

@property (nonatomic,retain) PDSConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) PDSXPCServer * XPCServer;                                         //@synthesize XPCServer=_XPCServer - In the implementation block
@property (nonatomic,retain) PDSCDCacheContainer * cacheContainer;                             //@synthesize cacheContainer=_cacheContainer - In the implementation block
@property (nonatomic,retain) PDSBag * bag;                                                     //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic,__weak) PDSEntryStore * entryStore;                                //@synthesize entryStore=_entryStore - In the implementation block
@property (assign,nonatomic,__weak) id<PDSCDCache><PDSKVStore> underlyingStorage;              //@synthesize underlyingStorage=_underlyingStorage - In the implementation block
@property (nonatomic,retain) PDSUserTracker * userTracker;                                     //@synthesize userTracker=_userTracker - In the implementation block
@property (nonatomic,retain) PDSCoordinator * coordinator;                                     //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) PDSRequestQueue * requestQueue;                                   //@synthesize requestQueue=_requestQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PDSRequestQueue *)requestQueue;
-(id<PDSCDCache><PDSKVStore>)underlyingStorage;
-(PDSCDCacheContainer *)cacheContainer;
-(void)setCoordinator:(PDSCoordinator *)arg1 ;
-(id)_underlyingStorage;
-(void)setXPCServer:(PDSXPCServer *)arg1 ;
-(void)start;
-(id)remoteInternalListener;
-(PDSUserTracker *)userTracker;
-(PDSBag *)bag;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setRequestQueue:(PDSRequestQueue *)arg1 ;
-(PDSConfiguration *)configuration;
-(PDSXPCServer *)XPCServer;
-(void)setEntryStore:(PDSEntryStore *)arg1 ;
-(void)setUnderlyingStorage:(id<PDSCDCache><PDSKVStore>)arg1 ;
-(void)setBag:(PDSBag *)arg1 ;
-(PDSEntryStore *)entryStore;
-(void)setCacheContainer:(PDSCDCacheContainer *)arg1 ;
-(id)remoteListenerForAllClientIDs;
-(void)setUserTracker:(PDSUserTracker *)arg1 ;
-(id)remoteListenerForClientIDs:(id)arg1 ;
-(id)_entryStore;
-(void)setConfiguration:(PDSConfiguration *)arg1 ;
-(PDSCoordinator *)coordinator;
@end

