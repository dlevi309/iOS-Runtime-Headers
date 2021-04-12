/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RETrainingSimulationServerInterface.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCListener, REObserverStore, NSString;

@interface RETrainingSimulationServer : NSObject <NSXPCListenerDelegate, RETrainingSimulationServerInterface> {

	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	REObserverStore* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)dealloc;
-(id)_init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)availableRelevanceEnginesDidChange;
-(void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)availableRelevanceEngines:(/*^block*/id)arg1 ;
-(void)_safelyEnumerateObserversWithBlock:(/*^block*/id)arg1 observerAccessBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

