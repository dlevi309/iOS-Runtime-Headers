/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol SKUIResourceLoaderDelegate;
@class SKUIClientContext, NSMutableDictionary, NSMapTable, NSCache, NSOperationQueue, NSString;

@interface SKUIResourceLoader : NSObject <NSCacheDelegate> {

	SKUIClientContext* _clientContext;
	NSMutableDictionary* _operationsByRequestID;
	NSMapTable* _requestsByCacheKey;
	NSCache* _resourcesByRequestID;
	BOOL _inBackground;
	long long _requestCountMap[3];
	NSOperationQueue* _operationQueue;
	id<SKUIResourceLoaderDelegate> _delegate;
	NSString* _name;
	NSOperationQueue* _delegateQueue;

}

@property (nonatomic,retain) NSOperationQueue * delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIResourceLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdle,nonatomic,readonly) BOOL idle; 
@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long resourceCacheLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<SKUIResourceLoaderDelegate>)delegate;
-(void)setDelegate:(id<SKUIResourceLoaderDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(long long)_qualityOfService;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(void)cancelAllRequests;
-(SKUIClientContext *)clientContext;
-(BOOL)isIdle;
-(id)initWithClientContext:(id)arg1 ;
-(id)cachedResourceForRequestIdentifier:(unsigned long long)arg1 ;
-(void)enterForeground;
-(void)enterBackground;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)trySetReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(id)requestIdentifierForCacheKey:(id)arg1 ;
-(void)_sendDidLoadAllForReason:(long long)arg1 ;
-(void)_reprioritizeOperations;
-(long long)_queuePriorityForLoadReason:(long long)arg1 ;
-(void)_updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2 ;
-(void)_sendDidBeginLoadingIfNecessary;
-(void)_sendDidIdleIfNecessary;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2 ;
-(void)removeAllCachedResources;
-(void)cancelRequestWithIdentifier:(unsigned long long)arg1 ;
-(void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(long long)resourceCacheLimit;
-(void)setResourceCacheLimit:(long long)arg1 ;
@end

