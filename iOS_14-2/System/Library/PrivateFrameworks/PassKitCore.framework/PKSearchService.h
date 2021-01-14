/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKSearchServiceClientExportedInterface.h>

@protocol OS_dispatch_queue;
@class PKXPCService, NSObject, NSHashTable, NSMutableDictionary;

@interface PKSearchService : NSObject <PKSearchServiceClientExportedInterface> {

	PKXPCService* _remoteService;
	NSObject*<OS_dispatch_queue> _replyQueue;
	os_unfair_lock_s _lockObservers;
	NSHashTable* _observers;
	os_unfair_lock_s _lockResults;
	NSMutableDictionary* _results;

}
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(void)searchWithQuery:(id)arg1 ;
-(void)cancelQueryWithIdentifier:(id)arg1 ;
-(void)resetRegionsWithCompletion:(/*^block*/id)arg1 ;
-(void)regionsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateRegionWithIdentifier:(id)arg1 localizedName:(id)arg2 boundingRegion:(SCD_Struct_PK10)arg3 mapsIdentifier:(unsigned long long)arg4 providerIdentifier:(int)arg5 completion:(/*^block*/id)arg6 ;
-(void)resetRegionsCoordinatesWithCompletion:(/*^block*/id)arg1 ;
-(void)transactionsMissingRegionsWithCompletion:(/*^block*/id)arg1 ;
-(void)indexedTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)indexedTransactionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)indexedPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)searchDidCompleteWithError:(id)arg1 forIdentifier:(id)arg2 ;
-(void)searchDidReceivePartialResults:(id)arg1 forIdentifier:(id)arg2 ;
-(void)invalidateSearchResults;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)errorHandlerForMethod:(SEL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canProvideFullResults;
-(BOOL)hasSearchableContent;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
@end

