/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>

@protocol HMFNetServiceBrowserDelegate, OS_dispatch_queue;
@class HMFUnfairLock, NSHashTable, NSMutableOrderedSet, NSString, NSObject, NSNetServiceBrowser, NSArray;

@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate> {

	HMFUnfairLock* _lock;
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
+(id)shortDescription;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)domain;
-(id<HMFNetServiceBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMFNetServiceBrowserDelegate>)arg1 ;
-(NSString *)serviceType;
-(NSNetServiceBrowser *)internal;
-(id)shortDescription;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(BOOL)shouldCache;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isBrowsing;
-(void)setBrowsing:(BOOL)arg1 ;
-(id)logIdentifier;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)setBrowseBlock:(id)arg1 ;
-(void)_stopBrowsingWithError:(id)arg1 ;
-(id)browseBlock;
-(void)addNetServiceToCache:(id)arg1 ;
-(id)initWithDomain:(id)arg1 serviceType:(id)arg2 ;
-(void)setShouldCache:(BOOL)arg1 ;
-(NSArray *)cachedNetServices;
-(void)startBrowsingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopBrowsing;
@end

