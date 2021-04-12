/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSURLBagContext, NSDictionary, NSObject, NSMutableArray, NSString;

@interface SSURLBag : NSObject {

	SSXPCConnection* _connection;
	SSURLBagContext* _context;
	NSDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _expirationTime;
	BOOL _ignoreCacheForNextLookup;
	NSMutableArray* _pendingLookups;
	NSString* _storeFrontIdentifier;

}

@property (readonly) NSDictionary * existingBagDictionary; 
@property (readonly) NSString * storeFrontIdentifier;                   //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (readonly) SSURLBagContext * URLBagContext; 
+(id)URLBagForContext:(id)arg1 ;
+(void)setURLBag:(id)arg1 forContext:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(NSString *)storeFrontIdentifier;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SSURLBagContext *)URLBagContext;
-(void)_loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_drainPendingLookupsWithError:(id)arg1 ;
-(void)_loadURLBag;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)existingBagDictionary;
@end

