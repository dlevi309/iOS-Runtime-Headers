/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


@protocol OS_dispatch_queue;
@class NSExtension, NSObject, NSExtensionContext, NSXPCConnection, NSMutableSet, QLGracePeriodTimer, NSMutableArray;

@interface QLExtension : NSObject {

	BOOL _isRequestingExtension;
	NSExtension* _extension;
	long long _extensionScore;
	unsigned long long _externalResourcesPermission;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _completionHandlersQueue;
	NSExtensionContext* _context;
	id _requestIdentifier;
	NSXPCConnection* _connection;
	NSMutableSet* _observers;
	QLGracePeriodTimer* _gracePeriodTimer;
	NSMutableArray* _extensionRequestHandlers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionHandlersQueue;              //@synthesize completionHandlersQueue=_completionHandlersQueue - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                           //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSExtensionContext * context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id requestIdentifier;                                              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) QLGracePeriodTimer * gracePeriodTimer;                             //@synthesize gracePeriodTimer=_gracePeriodTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * extensionRequestHandlers;                         //@synthesize extensionRequestHandlers=_extensionRequestHandlers - In the implementation block
@property (assign,nonatomic) BOOL isRequestingExtension;                                        //@synthesize isRequestingExtension=_isRequestingExtension - In the implementation block
@property (assign) long long extensionScore;                                                    //@synthesize extensionScore=_extensionScore - In the implementation block
@property (assign) unsigned long long externalResourcesPermission;                              //@synthesize externalResourcesPermission=_externalResourcesPermission - In the implementation block
-(void)setRequestIdentifier:(id)arg1 ;
-(void)_invalidate;
-(id)requestIdentifier;
-(NSMutableSet *)observers;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtensionContext *)context;
-(id)initWithExtension:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSExtension *)extension;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setContext:(NSExtensionContext *)arg1 ;
-(void)invalidateAndCancelExtensionRequest;
-(unsigned long long)externalResourcesPermission;
-(void)setExternalResourcesPermission:(unsigned long long)arg1 ;
-(void)extensionContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_invalidateAndCancelExtensionRequest;
-(void)_callExtensionRequestHandlers;
-(QLGracePeriodTimer *)gracePeriodTimer;
-(void)_setupConnectionIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)extensionScore;
-(void)setExtensionScore:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionHandlersQueue;
-(void)setCompletionHandlersQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGracePeriodTimer:(QLGracePeriodTimer *)arg1 ;
-(NSMutableArray *)extensionRequestHandlers;
-(void)setExtensionRequestHandlers:(NSMutableArray *)arg1 ;
-(BOOL)isRequestingExtension;
-(void)setIsRequestingExtension:(BOOL)arg1 ;
@end

