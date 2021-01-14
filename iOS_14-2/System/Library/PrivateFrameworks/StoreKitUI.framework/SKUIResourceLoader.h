/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSOperationQueue *)operationQueue;
-(BOOL)isIdle;
-(void)enterBackground;
-(id)init;
-(id<SKUIResourceLoaderDelegate>)delegate;
-(void)enterForeground;
-(void)cancelRequestWithIdentifier:(unsigned long long)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)cancelAllRequests;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(NSString *)name;
-(void)setDelegate:(id<SKUIResourceLoaderDelegate>)arg1 ;
-(NSString *)description;
-(long long)_qualityOfService;
-(NSOperationQueue *)delegateQueue;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)removeAllCachedResources;
-(void)dealloc;
-(id)cachedResourceForRequestIdentifier:(unsigned long long)arg1 ;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)trySetReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(id)requestIdentifierForCacheKey:(id)arg1 ;
-(void)_sendDidLoadAllForReason:(long long)arg1 ;
-(void)_reprioritizeOperations;
-(long long)_queuePriorityForLoadReason:(long long)arg1 ;
-(void)_updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2 ;
-(void)_sendDidBeginLoadingIfNecessary;
-(void)_sendDidIdleIfNecessary;
-(void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2 ;
-(void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(long long)resourceCacheLimit;
-(void)setResourceCacheLimit:(long long)arg1 ;
@end

