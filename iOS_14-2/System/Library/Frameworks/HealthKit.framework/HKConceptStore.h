/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKConceptStoreClientInterface.h>

@class HKObserverSet, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSString;

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface> {

	HKObserverSet* _conceptObservers;
	os_unfair_lock_s _conceptIndexManagerStateLock;
	unsigned long long _lastKnownConceptIndexManagerState;
	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                    //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long currentConceptIndexerState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskServerIdentifier;
+(id)serverInterface;
+(id)clientInterface;
+(id)conceptStore;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)arg1 ;
-(id)ontologyVersionWithError:(id*)arg1 ;
-(id)conceptForIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)fetchConceptForIdentifier:(id)arg1 loadRelationships:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)loadRelationshipsForConcept:(id)arg1 error:(id*)arg2 ;
-(BOOL)makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 ;
-(BOOL)breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 ;
-(long long)countOfConceptsAssociatedToUserRecordsWithError:(id*)arg1 ;
-(BOOL)cleanUpAfterUnitTest;
-(unsigned long long)currentConceptIndexerState;
-(void)resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerAsConceptObserver:(id)arg1 onQueue:(id)arg2 ;
-(void)unregisterAsConceptObserver:(id)arg1 onQueue:(id)arg2 ;
-(id)init;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)_startTaskServerIfNeeded;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
@end

