/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)setURLBag:(id)arg1 forContext:(id)arg2 ;
+(id)URLBagForContext:(id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(SSURLBagContext *)URLBagContext;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithURLBagContext:(id)arg1 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)_loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(NSDictionary *)existingBagDictionary;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_connection;
-(void)_drainPendingLookupsWithError:(id)arg1 ;
-(void)_loadURLBag;
-(void)dealloc;
@end

