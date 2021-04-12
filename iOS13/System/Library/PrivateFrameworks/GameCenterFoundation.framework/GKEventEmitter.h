/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject {

	NSHashTable* _listeners;
	NSMutableArray* _supportedProtocols;
	BOOL _shouldQueue;
	NSMutableArray* _queuedEvents;

}

@property (nonatomic,retain) NSHashTable * listeners;                          //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (assign,nonatomic) BOOL shouldQueue;                                 //@synthesize shouldQueue=_shouldQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedEvents;                    //@synthesize queuedEvents=_queuedEvents - In the implementation block
+(id)eventEmitterForProtocols:(id)arg1 ;
+(id)eventEmitterForProtocols:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSHashTable *)listeners;
-(void)registerListener:(id)arg1 ;
-(void)setListeners:(NSHashTable *)arg1 ;
-(NSMutableArray *)supportedProtocols;
-(void)setSupportedProtocols:(NSMutableArray *)arg1 ;
-(BOOL)listenerRegisteredForSelector:(SEL)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)setShouldQueue:(BOOL)arg1 ;
-(BOOL)shouldQueue;
-(void)unregisterAllListeners;
-(id)initWithSupportedProtocols:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(void)setQueuedEvents:(NSMutableArray *)arg1 ;
-(void)dispatchQueuedEventsToListener:(id)arg1 ;
-(id)invocationForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(NSMutableArray *)queuedEvents;
@end

