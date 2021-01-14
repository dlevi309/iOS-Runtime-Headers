/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSupportedProtocols:(NSMutableArray *)arg1 ;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)registerListener:(id)arg1 ;
-(NSHashTable *)listeners;
-(BOOL)listenerRegisteredForSelector:(SEL)arg1 ;
-(NSMutableArray *)supportedProtocols;
-(void)unregisterListener:(id)arg1 ;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)setShouldQueue:(BOOL)arg1 ;
-(void)setQueuedEvents:(NSMutableArray *)arg1 ;
-(id)invocationForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)unregisterAllListeners;
-(id)initWithSupportedProtocols:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(NSMutableArray *)queuedEvents;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dispatchQueuedEventsToListener:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldQueue;
-(void)forwardInvocation:(id)arg1 ;
@end

