/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>

@protocol HMFNetServiceBrowserDelegate, OS_dispatch_queue;
@class NSHashTable, NSMutableOrderedSet, NSString, NSObject, NSNetServiceBrowser, NSArray;

@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate> {

	os_unfair_lock_s _lock;
	NSHashTable* _netServices;
	NSMutableOrderedSet* _cachedNetServices;
	BOOL _browsing;
	id<HMFNetServiceBrowserDelegate> _delegate;
	NSString* _domain;
	NSString* _serviceType;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSNetServiceBrowser* _internal;
	/*^block*/id _browseBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSNetServiceBrowser * internal;                        //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;                         //@synthesize browsing=_browsing - In the implementation block
@property (nonatomic,copy) id browseBlock;                                            //@synthesize browseBlock=_browseBlock - In the implementation block
@property (__weak) id<HMFNetServiceBrowserDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;                                //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL shouldCache; 
@property (nonatomic,copy,readonly) NSArray * cachedNetServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)shouldCache;
-(void)setBrowsing:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(id)init;
-(id<HMFNetServiceBrowserDelegate>)delegate;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(NSArray *)cachedNetServices;
-(NSNetServiceBrowser *)internal;
-(id)shortDescription;
-(NSString *)debugDescription;
-(id)logIdentifier;
-(NSString *)domain;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)addNetServiceToCache:(id)arg1 ;
-(void)setDelegate:(id<HMFNetServiceBrowserDelegate>)arg1 ;
-(void)setBrowseBlock:(id)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(NSString *)description;
-(void)startBrowsingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithDomain:(id)arg1 serviceType:(id)arg2 ;
-(void)stopBrowsing;
-(id)browseBlock;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(NSString *)serviceType;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(void)setShouldCache:(BOOL)arg1 ;
-(void)_stopBrowsingWithError:(id)arg1 ;
@end

