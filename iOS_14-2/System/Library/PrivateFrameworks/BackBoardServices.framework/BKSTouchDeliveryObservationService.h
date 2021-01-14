/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BKSTouchDeliveryObserving_IPC.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, BSMutableIntegerMap, NSMapTable, NSHashTable, NSString;

@interface BKSTouchDeliveryObservationService : NSObject <BKSTouchDeliveryObserving_IPC> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _touchClientQueue;
	BSServiceConnection* _connection;
	BSMutableIntegerMap* _touchIdentifierToObserverLists;
	NSMapTable* _observersToTouchIdentifiers;
	NSHashTable* _generalObservers;

}

@property (nonatomic,retain) BSServiceConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * touchIdentifierToObserverLists;              //@synthesize touchIdentifierToObserverLists=_touchIdentifierToObserverLists - In the implementation block
@property (nonatomic,retain) NSMapTable * observersToTouchIdentifiers;                          //@synthesize observersToTouchIdentifiers=_observersToTouchIdentifiers - In the implementation block
@property (nonatomic,retain) NSHashTable * generalObservers;                                    //@synthesize generalObservers=_generalObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(oneway void)addObserver:(id)arg1 ;
-(id)_queue_observersForTouchIdentifier:(unsigned)arg1 ;
-(id)init;
-(NSMapTable *)observersToTouchIdentifiers;
-(NSHashTable *)generalObservers;
-(void)_queue_removeObserversForTouchIdentifier:(unsigned)arg1 ;
-(BSServiceConnection *)connection;
-(BOOL)_queue_addObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(void)_connectToTouchDeliveryService;
-(oneway void)removeObserver:(id)arg1 ;
-(BSMutableIntegerMap *)touchIdentifierToObserverLists;
-(void)setObserversToTouchIdentifiers:(NSMapTable *)arg1 ;
-(BOOL)_queue_removeObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(oneway void)addObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)observeTouchEventDeliveryDidOccur:(id)arg1 ;
-(void)setGeneralObservers:(NSHashTable *)arg1 ;
-(void)dealloc;
-(void)setTouchIdentifierToObserverLists:(BSMutableIntegerMap *)arg1 ;
@end

