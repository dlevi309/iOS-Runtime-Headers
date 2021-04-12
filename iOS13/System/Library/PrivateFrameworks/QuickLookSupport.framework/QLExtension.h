/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSExtensionContext *)context;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setContext:(NSExtensionContext *)arg1 ;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)setRequestIdentifier:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)requestIdentifier;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)invalidateAndCancelExtensionRequest;
-(unsigned long long)externalResourcesPermission;
-(void)setExternalResourcesPermission:(unsigned long long)arg1 ;
-(void)extensionContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_invalidateAndCancelExtensionRequest;
-(void)setIsRequestingExtension:(BOOL)arg1 ;
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
@end

